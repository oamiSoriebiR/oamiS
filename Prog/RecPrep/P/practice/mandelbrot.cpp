#include "complex.h"


complex sum(complex c1, complex c2)
{
  complex res;
  res.real = c1.real + c2.real;
  res.img = c1.img + c2.img; 
  return res;
}

complex mul(complex c1, complex c2)
{
  complex res;
  res.real = c1.real*c2.real - c1.img*c2.img;
  res.img = c1.real*c2.img + c2.real*c1.img;
  return res;
}

void mandel(complex c, int n, complex z[])
{
  for (int i = 0; i < n; i++)
  {
    if(i==0)
    {
      z[i].real = 0;
      z[i].img = 0;
      continue;
    }
    if(i==1)
    {
      z[i] = c;
      continue;
    }

    z[i] = sum(mul(z[i-1], z[i-1]), c); 
  }
}

