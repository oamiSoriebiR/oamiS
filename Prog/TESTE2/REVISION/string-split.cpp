#include <vector>
#include <string>
#include "print_string.h"
#include <cctype>

void trim(std::string &str)
{
  // Remove leading whitespace
  str.erase(0, str.find_first_not_of(' '));

  // Remove trailing whitespace
  str.erase(str.find_last_not_of(' ') + 1);
}

void split(const std::string &s, std::vector<std::string> &v)
{
  std::string trimmed_s = s;
  trim(trimmed_s);

  if (trimmed_s.empty())
  {
    return;
  }

  size_t start = 0;
  size_t end = trimmed_s.find(' ');

  while (end != std::string::npos)
  {
    std::string sub_str = trimmed_s.substr(start, end - start);
    if (sub_str != "")
    {
      v.push_back(sub_str);
    }

    start = end + 1;
    end = trimmed_s.find(' ', start);
  }

  std::string last_sub_str = trimmed_s.substr(start);
  if (last_sub_str != "")
  {
    v.push_back(last_sub_str);
  }
}