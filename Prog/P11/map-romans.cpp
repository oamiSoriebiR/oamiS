#include <string>
#include <vector>
#include <utility>

unsigned roman_to_arab(const std::string &roman)
{
  std::vector<std::pair<char, unsigned>> roman_to_int = {
      {'I', 1},
      {'V', 5},
      {'X', 10},
      {'L', 50},
      {'C', 100},
      {'D', 500},
      {'M', 1000}};

  unsigned result = 0;
  unsigned prev_value = 0;

  for (int i = roman.size() - 1; i >= 0; i--)
  {
    char current_symbol = roman[i];
    unsigned current_value = 0;

    for (const auto &pair : roman_to_int)
    {
      if (pair.first == current_symbol)
      {
        current_value = pair.second;
        break;
      }
    }

    if (current_value >= prev_value)
    {
      result += current_value;
    }
    else
    {
      result -= current_value;
    }

    prev_value = current_value;
  }

  return result;
}