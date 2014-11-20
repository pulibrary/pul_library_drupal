<?php
/**
 * @file
 * Template to display a view as a calendar week.
 * 
 * @see template_preprocess_calendar_week.
 *
 * $day_names: An array of the day of week names for the table header.
 * $rows: The rendered data for this week.
 * 
 * For each day of the week, you have:
 * $rows['date'] - the date for this day, formatted as YYYY-MM-DD.
 * $rows['datebox'] - the formatted datebox for this day.
 * $rows['empty'] - empty text for this day, if no items were found.
 * $rows['all_day'] - an array of formatted all day items.
 * $rows['items'] - an array of timed items for the day.
 * $rows['items'][$time_period]['hour'] - the formatted hour for a time period.
 * $rows['items'][$time_period]['ampm'] - the formatted ampm value, if any for a time period.
 * $rows['items'][$time_period]['values'] - An array of formatted items for a time period.
 * 
 * $view: The view.
 * $min_date_formatted: The minimum date for this calendar in the format YYYY-MM-DD HH:MM:SS.
 * $max_date_formatted: The maximum date for this calendar in the format YYYY-MM-DD HH:MM:SS.
 * 
 */
//dsm('Display: '. $display_type .': '. $min_date_formatted .' to '. $max_date_formatted);
//dsm($rows);
//dsm($items);
$index = 0;
$header_ids = array();
foreach ($day_names as $key => $value) {
  $header_ids[$key] = $value['header_id'];
}
//dpm($rows['singleday_buckets']);
?>
<div class="calendar-calendar">
  <div class="week-view">
    <table class="full">
      <thead>
        <tr>
          <?php foreach ($day_names as $cell): ?>
            <th class="<?php print $cell['class']; ?>" id="<?php print $cell['header_id']; ?>">
              <?php print $cell['data']; ?>
            </th>
          <?php endforeach; ?>
        </tr>
      </thead>
      <tbody> 
        <tr>
          <?php foreach ($rows['singleday_buckets'] as $day): ?>
            <td class="calendar-agenda-items single-day <?php print $class; ?>">
               <?php if (count($day)==0): ?>
               		<div class="tba">TBA</div>
               <?php else: ?>
               	<?php foreach($day as $theDay): ?>
               		<?php foreach($theDay as $item): ?>
                 		<?php print $item['entry'];?>
               		<?php endforeach;?>
               	<?php endforeach;?>
               <?php endif;?>
            </td>
          <?php endforeach; ?>
        </tr>   
      </tbody>
    </table>
  </div>
</div>