#include <string>
#include <cmath>
#include <iostream>
using namespace std;

void counter()
{
   int counter = 10;
   while (counter > 0)
   {
     std::cout << counter << std::endl;
     counter++;
   }
   std::cout << "Goodbye to now";
}

int main ()
{
  counter();
  return 0;
}
