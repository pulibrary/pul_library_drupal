describe "main page", type: :feature, js: true do
  it "loads the main page and clicks all the links and menus" do
    visit 'http://library-main.lndo.site/'
    expect(page).to have_content 'Princeton University Library'
    index = 1
    puts "### clicking links ###"
    [
      ".l-header", ".l-footer", ".pane-library-hours", 
      "#libcal_events-panel_pane_1", "#libcal_events-panel_pane_2", ".library-news"
    ].each do |css_selector|
      check_links(css_selector: css_selector, index: index)
      index = 0
    end
    puts "### clicking Main Menu links ###"
    within(".l-header") do
      hover_menu_link_count = page.all('.expanded a').count
      for i in 0..hover_menu_link_count-1 do
        link = page.all('.expanded a')[i]
        path = link.path
        hover(path: path)
        check_links(css_selector: '.expanded .menu', index: index) do
          hover(path: path)          
        end
      end
    end
  end
end

def check_links(css_selector:, index:, ignore: ["Mudd Manuscript", "Special Collections", "Tools and Tech"])
  test_selector(css_selector: css_selector)
  all_links = within(css_selector) do
    page.all('a')
  end
  for i in index..all_links.count-1 do
    yield if block_given?
    within(css_selector) do
      link = page.all('a')[i]
      next if ignore.any? { |word| link.text.include?(word) }
      puts link.text
      link.click
      validate_page
      page.go_back
    end
  end 
end

def hover(path:)
  begin
    page.find(:xpath,path).hover
  rescue Capybara::ElementNotFound
    puts "could not hover"
    page.go_back
    retry
  end
end

def test_selector(css_selector:)
  begin
    page.find(css_selector)
  rescue Capybara::ElementNotFound
    puts "could not css #{css_selector}"
    page.go_back
    retry
  end
end

def validate_page
  valid = (page.source.include?("princeton") || page.source.include?("pulibrary")) && !page.source.include?("We're sorry, but there was a problem finding the page you requested.")
  puts page.source unless valid
  expect(valid).to be_truthy
end
