#include <iostream>
#include <string>
using namespace std;

bool pangram(const string &s, string &m)
{
  int lenStr = s.length();
  bool IsInAlpha[26] = {0};
  int lowerAlpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  int upperAlpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

  for (int i = 0; i < lenStr; i++)
  {
    for (int j = 0; j < 26; j++)
    {
      if (s[i] == lowerAlpha[j] || s[i] == upperAlpha[j])
      {
        IsInAlpha[j] = true;
        break;
      }
    }
  }

  bool isPangram = true;
  for (int i = 0; i < 26; i++)
  {
    if (!IsInAlpha[i])
    {
      isPangram = false;
      m += lowerAlpha[i];
    }
  }

  return isPangram;
}