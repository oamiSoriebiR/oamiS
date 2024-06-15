#include <fstream>
#include <string>
#include "show_file.h"
#include <limits>

void maximum(const std::string &input_fname, const std::string &output_fname)
{
  std::ifstream input_file(input_fname);
  std::ofstream output_file(output_fname);

  double value;
  double max_value = std::numeric_limits<double>::lowest();
  int count = 0;

  while (input_file >> value)
  {
    max_value = std::max(max_value, value);
    count++;
    output_file << std::fixed << std::setprecision(3) << value << std::endl;
  }

  output_file << "count=" << count << "/max=" << max_value << std::endl;
}
