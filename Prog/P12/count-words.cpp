#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <algorithm>

using namespace std;

void count_words(const string &str, map<string, size_t> &count)
{
  // Convert the string to lowercase
  string lowercaseStr = str;
  transform(lowercaseStr.begin(), lowercaseStr.end(), lowercaseStr.begin(), ::tolower);

  // Split the string into words
  istringstream iss(lowercaseStr);
  string word;
  while (iss >> word)
  {
    // Remove any non-alphanumeric characters from the word
    word.erase(remove_if(word.begin(), word.end(), [](char c)
                         { return !isalnum(c) && c != '\''; }),
               word.end());

    // Increment the count for the word in the map
    count[word]++;
  }
}

void show_map(const map<string, size_t> &count)
{
  cout << "[ ";
  for (const auto &e : count)
  {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}
