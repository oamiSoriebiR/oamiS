#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <string>
#include <cmath>
#include "show_file.h"

void calc_medians(const string &input_fname, const string &output_fname)
{
  ifstream input_file(input_fname);
  ofstream output_file(output_fname);

  string line;
  while (getline(input_file, line))
  {
    if (line.empty() || line[0] == '#')
    {
      continue;
    }

    stringstream ss(line);
    string identifier;
    ss >> identifier;

    vector<double> values;
    double value;
    while (ss >> value)
    {
      values.push_back(value);
    }

    sort(values.begin(), values.end());

    double median;
    if (values.size() % 2 == 1)
    {
      median = values[values.size() / 2];
    }
    else
    {
      int mid = values.size() / 2;
      median = 0.5 * (values[mid - 1] + values[mid]);
    }

    output_file << fixed << setprecision(1) << identifier << " " << median << endl;
  }

  input_file.close();
  output_file.close();
}