#include <sstream>
#include "Date2.h"

Date::Date()
{
  year = 1;
  month = 1;
  day = 1;
}

// Constructor with parameters
Date::Date(int year, int month, int day) : year(year), month(month), day(day)
{
  if (!is_valid())
  {
    this->year = 0;
    this->month = 0;
    this->day = 0;
  }
}

// Constructor with string parameter
Date::Date(const std::string &year_month_day)
{
  std::istringstream iss(year_month_day);
  char separator;
  iss >> year >> separator >> month >> separator >> day;
  if (!is_valid() || separator != '/')
  {
    this->year = 0;
    this->month = 0;
    this->day = 0;
  }
}

// Accessor for year
int Date::get_year() const
{
  return year;
}

// Accessor for month
int Date::get_month() const
{
  return month;
}

// Accessor for day
int Date::get_day() const
{
  return day;
}

// Method to check if the date is valid
bool Date::is_valid() const
{
  if (year < 1 || year > 9999 || month < 1 || month > 12 || day < 1 || day > num_days(year, month))
  {
    return false;
  }
  return true;
}

// Method to compute the number of days in a month
int Date::num_days(int year, int month)
{
  static const int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int num_days = days_in_month[month - 1];
  if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
  {
    num_days = 29;
  }
  return num_days;
}
