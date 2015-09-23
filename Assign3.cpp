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
