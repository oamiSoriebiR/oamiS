#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void count_words(const string &str, vector<pair<string, size_t>> &count)
{
  string word;
  size_t pos = 0;

  while (pos < str.length())
  {
    // Find the next word
    while (pos < str.length() && !isalpha(str[pos]) && str[pos] != '\'')
    {
      pos++;
    }

    if (pos == str.length())
    {
      break;
    }

    // Extract the word
    word.clear();
    while (pos < str.length() && (isalpha(str[pos]) || str[pos] == '\''))
    {
      word += tolower(str[pos]);
      pos++;
    }

    // Check if the word already exists in the vector
    auto it = find_if(count.begin(), count.end(), [&](const pair<string, size_t> &p)
                      { return p.first == word; });

    if (it != count.end())
    {
      // Increment the count if the word already exists
      it->second++;
    }
    else
    {
      // Add a new pair if the word doesn't exist
      count.push_back(make_pair(word, 1));
    }
  }

  // Sort the vector alphabetically by word
  sort(count.begin(), count.end(), [](const pair<string, size_t> &p1, const pair<string, size_t> &p2)
       { return p1.first < p2.first; });
}

void show_vector(const vector<pair<string, size_t>> &count)
{
  cout << "[ ";
  for (const auto &e : count)
  {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}