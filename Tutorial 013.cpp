// Tutorial 013.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int readNumber()
{
    // get and return a single integer 
    
    std::cout << "Type in an Integer: ";
    int x{ 0 };
    std::cin >> x; 
    
    return x; 
}

int writeAnswer(int x)
{
    // output the answer, single parameter, no return value 
    std::cout << "The total is: " << x << '\n';

    return 0; 

}

int main()
{
    int x{ readNumber() };
    int y{ readNumber() };

    writeAnswer(x + y); 

    return 0; 
    
}
