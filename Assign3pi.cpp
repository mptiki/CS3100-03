#include "Assign3pi.hpp"

//approximate pi to n digits using an implementation of Ramanujan's formula.
//I have no idea how this works.
double pi(double digits){
  double previous, cur = 0, tolerance = pow(10.0, (digits + 1)*-1), sum = 0;
  int loop = 0;
  do{
    previous = cur;
    sum = sum + (
      fact(4*loop)/pow((pow(4.0,loop)*fact(loop)),4)
    ) * (
      (1103 + 26390 * loop)/pow(99.0, 4 * loop)
    );
    cur = (sqrt(8)/9801) * sum;
    cur = 1/cur;
    loop++;
  }while (abs(previous - cur) > tolerance); 
  //repeat until cur and previous match to the correct number of digits + 1
  //The + 1 suppresses rounding errors and... well... errors.

  return cur;
}

//Factorial function used to calculate pi
int fact(int n)
{
    return (n == 1 || n == 0) ? 1 : fact(n-1) * n;
}
