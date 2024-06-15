#include <fstream>
#include <iostream>
#include <string>

int count(const std::string &fname, const std::string &word)
{
  std::ifstream file(fname);

  std::string w;
  int count = 0;
  while (file >> w)
  {
    if (w.size() == word.size())
    {
      bool match = true;
      for (unsigned int i = 0; i < w.size(); i++)
      {
        if (toupper(w[i]) != toupper(word[i]))
        {
          match = false;
          break;
        }
      }
      if (match)
      {
        count++;
      }
    }
  }

  return count;
}
