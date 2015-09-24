//Chris Kinsey
//9/14/15
//Assign1.cpp for CS 3100
//Uses c++11 standard

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>

#include "Assign3e.hpp"
#include "Assign3Fib.hpp"
#include "Assign3pi.hpp"

using namespace std;

int main(int argc, char *argv[]){
    //only use argv[1] and [2]. Any deviation will tossed to the help.
	int i_opt = stoi(argv[2]);
	if (!strcmp(argv[1], "-fib") && i_opt <= 14){
	  cout << fib(i_opt) << endl;
	}

    else if(i_opt >= 1){	
	    if (!strcmp(argv[1], "-pi") && i_opt <= 10){
	    cout << setprecision(i_opt) << pi(i_opt) << endl;
	    }
	  
    	else if (!strcmp(argv[1], "-e") && i_opt <= 30){
            cout << setprecision(20) << e(i_opt) << endl;
        }
	    else cout << "--- assign 1 help --- \n" 
		      << "-fib [n] compute the fibonacci of [n]  for 0<=n<=14\n"
		      << "-e [n] compute the value of 'e' using [n] iterations for 1<=n<=30\n"
		      << "-pi [n] compute pi to [n] digits for 1<=n<=10\n";
 
    }

	else cout << "--- assign 1 help --- \n" 
		      << "-fib [n] compute the fibonacci of [n]  for 0<=n<=14\n"
		      << "-e [n] compute the value of 'e' using [n] iterations for 1<=n<=30\n"
		      << "-pi [n] compute pi to [n] digits for 1<=n<=10\n";
    
    return 0;
}
