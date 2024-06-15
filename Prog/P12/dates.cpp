#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

class Date
{
public:
  Date(int year = 1, int month = 1, int day = 1)
      : year_(year), month_(month), day_(day) {}
  int getYear() const { return year_; }
  int getMonth() const { return month_; }
  int getDay() const { return day_; }

private:
  int year_, month_, day_;
};

bool operator<(const Date &lhs, const Date &rhs)
{
  if (lhs.getYear() != rhs.getYear())
    return lhs.getYear() < rhs.getYear();
  if (lhs.getMonth() != rhs.getMonth())
    return lhs.getMonth() < rhs.getMonth();
  return lhs.getDay() < rhs.getDay();
}

std::ostream &operator<<(std::ostream &os, const Date &date)
{
  os << std::setfill('0') << std::setw(4) << date.getYear() << '/'
     << std::setw(2) << date.getMonth() << '/' << std::setw(2) << date.getDay();
  return os;
}

int main()
{
  std::vector<Date> dates = {Date(2022, 12, 31), Date(2021, 1, 1), Date(2022, 1, 1)};

  std::sort(dates.begin(), dates.end());

  for (const auto &d : dates)
    std::cout << d << std::endl;

  return 0;
}