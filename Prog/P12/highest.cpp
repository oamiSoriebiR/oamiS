#include <iostream>
#include <map>
#include <list>
#include <string>

using namespace std;

string student_highest_avg(map<string, list<int>> m)
{
  string highest_avg_student;
  double highest_avg = 0.0;

  for (const auto &entry : m)
  {
    const string &student = entry.first;
    const list<int> &grades = entry.second;

    double sum = 0.0;
    int count = 0;

    for (int grade : grades)
    {
      sum += grade;
      count++;
    }

    double avg = sum / count;

    if (avg > highest_avg)
    {
      highest_avg = avg;
      highest_avg_student = student;
    }
  }

  return highest_avg_student;
}
