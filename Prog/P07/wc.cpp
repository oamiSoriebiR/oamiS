#include <fstream>
#include "wc.h"

wcresult wc(const std::string &filename)
{
  wcresult result = {0, 0, 0};

  std::ifstream file(filename);

  std::string line;
  while (std::getline(file, line))
  {
    result.lines++;

    std::istringstream iss(line);
    std::string word;
    while (iss >> word)
    {
      result.words++;
    }

    result.bytes += line.size() + 1;
  }

  file.close();

  return result;
}
