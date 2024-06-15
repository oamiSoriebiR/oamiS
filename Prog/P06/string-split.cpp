#include <iostream>
#include <string>
#include <vector>
#include "print_string.h"

void split(const std::string &s, std::vector<std::string> &v)
{
  std::string::size_type pos = 0;
  std::string::size_type prev_pos = 0;

  while ((pos = s.find(' ', prev_pos)) != std::string::npos)
  {
    std::string substring = s.substr(prev_pos, pos - prev_pos);
    if (!substring.empty())
    {
      v.push_back(substring);
    }
    prev_pos = pos + 1;
  }

  std::string last_substring = s.substr(prev_pos);
  if (!last_substring.empty())
  {
    v.push_back(last_substring);
  }
}
