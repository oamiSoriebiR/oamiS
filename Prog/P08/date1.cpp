#include "Date1.h"
#include <iostream>
#include <cmath>

Date::Date()
{
  year = 1;
  month = 1;
  day = 1;
}

Date::Date(int year, int month, int day)
{
  this->year = year;
  this->month = month;
  this->day = day;
}

int Date::get_year() const
{
  return year;
}

int Date::get_month() const
{
  return month;
}

int Date::get_day() const
{
  return day;
}

bool is_before(const Date &date1, const Date &date2)
{
  int data1, data2;
  data1 = date1.get_year() * 10000 + date1.get_month() * 100 + date1.get_day();
  data2 = date2.get_year() * 10000 + date2.get_month() * 100 + date2.get_day();

  if (data1 < data2)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}