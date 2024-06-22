#include <iostream>
#include <cstdlib>

int main()
{
  int number_of_points;
  std::cin >> number_of_points;
  
  int previous_x , previous_y;
  std::cin >> previous_x;
  std::cin >> previous_y;

  int point_x , point_y;
 
  int total_distance = 0;
  int current_distance = 0;

  for (int i = 0; i < number_of_points - 1; i++)
  {
    std::cin >> point_x;
    std::cin >> point_y; 

    current_distance = std::abs(previous_x - point_x) + std::abs(previous_y - point_y);

    previous_x = point_x;
    previous_y = point_y;

    total_distance += current_distance;
  }

  std::cout << total_distance;

  return 0;
}
