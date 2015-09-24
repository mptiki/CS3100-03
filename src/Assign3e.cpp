#include "Assign3e.hpp"

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
