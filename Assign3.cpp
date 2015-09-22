//Chris Kinsey
//9/14/15
//Assign1.cpp for CS 3100
//Uses c++11 standard

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;

int fib(int depth);
double pi(double digits);
double e(int loops);
int fact(int n);

int main(int argc, char *argv[]){
    //only use argv[1] and [2]. Any deviation will tossed to the help.
	
	if (!strcmp(argv[1], "-fib")){
	  cout << fib(stoi(argv[2])) << endl;
	}
	
	else if (!strcmp(argv[1], "-pi")){
	  cout << setprecision(stoi(argv[2])) << pi(stoi(argv[2])) << endl;
	}
	  
	else if (!strcmp(argv[1], "-e")){
        cout << setprecision(20) << e(stoi(argv[2])) << endl;
    }
	
	else cout << "--- Assign 1 Help --- \n" 
		      << "-fib [n] Compute the fibonacci of [n] \n"
		      << "-e [n] Compute the value of 'e' using [n] iterations\n"
		      << "-pi [n] Compute Pi to [n] digits\n";
    
    return 0;
}
    
//Common recursive fibonacci function.
int fib(int depth){
  if (depth == 0 || depth == 1){
      return depth;
  }
  else return (fib(depth-1)) + (fib(depth-2));
}

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

//Very very very simple implementation of the Taylor series to approximate e
//Rather than directly calculating factorials every time, j is kept as a running counter to save computation time.
double e(int loops){
    double e = 1, j = 1;
    for (int i = 1; i < loops; i++){
        j *= i;
        e += (1/j);
    }
    return e;
}

//factorial function used for calculating pi.
int fact(int n)
{
  return (n == 1 || n == 0) ? 1 : fact(n - 1) * n;
}
