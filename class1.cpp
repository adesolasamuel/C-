#include <iostream>
#include <cmath>

int main(){
float a, b, c;

std::cout << "NUMBER 1";

std::cout << " QUADRATIC EQUATION CALCULATOR \n";
std::cout << "Enter a: ";
std::cin >> a;
std::cout << "Enter b: ";
std::cin >> b;
std::cout << "Enter c: ";
std::cin >> c;

float x1 = (-b + sqrt(b*b - 4*a*c))/2*a;
float x2 = (-b - sqrt(b*b - 4*a*c))/2*a;

std::cout << "Root 1 = " << x1 << "Root 2 = " << x2;

return 0;
}