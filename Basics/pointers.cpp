#include <iostream>
#include <vector>

int main()
{

    int myInt = 1000;
    int* myPtr = &myInt;

    // points to address of variable
    std::cout << myPtr << "\n";
    // points to the value stored in myPtr
    std::cout << *myPtr << "\n";
    return 0;
}