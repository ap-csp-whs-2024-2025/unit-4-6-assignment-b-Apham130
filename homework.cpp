/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector
#include <cmath> 


bool isPrime(int N)
{
    std::vector<int> primeList = {2,3,5,7,11,13}; 
    return 1;
}

std::vector<double> quadForm(double a, double b, double c)
{
    std::vector<double> x = {};
    if ((b*b - 4*a*c) > 0)
    {
        x.push_back(2);
        x.push_back((-b + sqrt(b*b - 4*a*c))/(2*a));
        x.push_back((-b - sqrt(b*b - 4*a*c))/(2*a));
        return x;
    } else if ((b*b - 4*a*c) == 0)
    {
        x.push_back(1);
        x.push_back((-b)/(2*a));
        return x;
    }
    {
        x.push_back(0);
        x.push_back(-99999);
        return x;
    }
}

int main()
{
    double num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
    
    
    std::vector<double> x = quadForm(num1, num2, num3);
    if (x[0] == 2)
    {
        std::cout << "There are 2 real solutions: " << x[1] << " and " << x[2] << "\n";
    } else if (x[0] == 1)
    {
        std::cout << "There is 1 real solutions: " << x[1]  << "\n";
    } else if (x[0] == 0)   
    {
        std::cout << "There are no real solutions\n";
    }
    return 0;
}
