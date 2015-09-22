#relationship file for make Assign3
Assign3: Assign3.o Assign3pi.o Assign3e.o Assign3Fib.o
    g++ -o Assign3 Assign3.o Assign3pi.o Assign3e.o Assign3Fib.o

Assign3.o: Assign3.cpp
    g++ -c Assign3.cpp

Assign3pi.o: Assign3pi.cpp Assign3pi.hpp
    g++ -c Assign3pi.cpp

Assign3e.o: Assign3e.cpp Assign3pi.hpp
    g++ -c Assign3e.cpp

Assign3Fib.o: Assign3Fib.cpp Assign3Fib.hpp
    g++ -c Assign3Fib.cpp
