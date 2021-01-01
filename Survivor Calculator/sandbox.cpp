#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void passbyValue(int valnum)
{

cout << "passbyValue reports: passed valnum by value. valnum = " << valnum << endl;
valnum = valnum + 100;
cout << "passbyValue reports: valnum changed by value to: " << valnum << endl;

}

void passbyRef(int& refnum)
{
cout << "passbyRef reports: passed refnum by reference = " << refnum << endl;
refnum = refnum + 100;
cout << "passbyRef reports: changed refnum by reference to: " << refnum << endl;
}

int main()
{

     int original_num = 1; //this is my original buck
     std::cout << "Before passbyValue, original_num = " << original_num << std::endl;
     passbyValue(original_num);
     std::cout << "After passbyValue, original_num = " << original_num << std::endl;
     passbyRef(original_num);
     std::cout << "After passbyRef, original_num = " << original_num << std::endl;

}
