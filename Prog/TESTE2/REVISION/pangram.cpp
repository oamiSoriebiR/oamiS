#include <string>
#include <set>
#include <cctype>

bool pangram(const std::string &s, std::string &m)
{
  bool is_pangram = false;
  std::set<char> characters;
  std::string alpha_l = {
      "abcdefghijklmnopqrstuvwxyz"};

  std::string s_normalized = "";

  for (char ch : s)
  {
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
      s_normalized.append(1, tolower(ch));
    }
  }

  for (char ch : s_normalized)
  {
    characters.insert(ch);
  };
  if (characters.size() == 26)
  {
    is_pangram = true;
  }
  bool is_present = false;
  for (char ch : alpha_l)
  {
    is_present = false;
    for (char elem : characters)
    {
      if (ch == elem)
      {
        is_present = true;
        break;
      }
    }
    if (!is_present)
    {
      m.append(std::string(1, ch));
    }
  }
  return is_pangram;
}
