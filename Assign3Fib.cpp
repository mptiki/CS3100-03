#include "Assign3Fib.hpp"

//Simple fibonacci recursion, now with more ?
int fib(int depth){
    (depth == 0 || depth == 1)? depth : fib(depth-1) + fib(depth -2);
}
