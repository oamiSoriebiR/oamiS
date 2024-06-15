#ifndef POWER_H
#define POWER_H

#include "Operation.h"

class Power : public Operation
{
public:
  Power(int op1, int op2) : Operation(op1, op2) {}

  int operation() const override
  {
    int result = 1;
    for (int i = 0; i < get_op2(); i++)
    {
      result *= get_op1();
    }
    return result;
  }
};

#endif