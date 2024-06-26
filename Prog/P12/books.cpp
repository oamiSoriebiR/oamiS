#include "Book.h"
#include "Page.h"
#include <iostream>

using namespace std;

void Book::build_index(const set<string> &words)
{
  index_.clear();
  for (string word : words)
  {

    for (size_t i = 0; i < book_.size(); ++i)
    {
      Page page = book_[i];

      for (size_t j = 0; j < page.get_num_lines(); ++j)
      {
        string line = page.get_line(j);

        if (line.find(word) == string::npos)
          continue;

        if (index_.find(word) == index_.end())
          index_[word] = {};
        index_[word].insert(i + 1);

        break;
      }
    }
  }
}