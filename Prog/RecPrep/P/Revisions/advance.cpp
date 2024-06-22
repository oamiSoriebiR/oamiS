void advance(int delta, int& day, int& month, int& year)
{
  int days_in_month = 0;

  // Check if the current month is February and if it is a leap year
  if (month == 2 && (year % 400 == 0 || ((year % 4 == 0) && (year % 100 != 0)))) 
  {
    days_in_month = 29; // If it is a leap year, February has 29 days
  }
  // Check if the current month is February and if it is not a leap year
  else if (month == 2 && !(year % 400 == 0 || ((year % 4 == 0) && (year % 100 != 0)))) 
  {
    days_in_month = 28; // If it is not a leap year, February has 28 days
  }
  // Check if the current month has 31 days
  else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
  {
    days_in_month = 31; // These months have 31 days
  }
  else
  {
    days_in_month = 30; // All other months have 30 days
  }

  // Update the date by adding delta days
  day += delta;

  // Check if the updated day exceeds the number of days in the current month
  if (day > days_in_month)
  {
    day -= days_in_month; // Subtract the number of days in the current month
    month++; // Increment the month

    // Check if the updated month exceeds 12
    if (month > 12)
    {
      month = 1; // Reset the month to 1 (January)
      year++; // Increment the year
    }
  }
}

