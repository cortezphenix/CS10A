#include <iostream>
using namespace std;

int  main()
{
   // user-provided values
   double mpg, roundTripDistance;

   // Ask for user input
   cout << "How many miles per gallon does your car get, city? ";
   cin >> mpg;
   cout << "How many miles would you travel, round trip, \n  to come to "
      "the nearest college campus? ";
   cin >> roundTripDistance;

   // Echo results to screen
   cout << "\n\nYou said that you get " << mpg << " MGG city and have a \n"
      << " round trip of "
      << roundTripDistance << " miles to/from campus." << endl << endl;

   return 0;
}
