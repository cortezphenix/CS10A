/*Survivor Calculator; Cortez Phenix; This program will display the
percentage of people who survive a disaster, using functions, parameters,
and other features*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double calculatePct(double number_of_people_in_zone, double number_of_deaths)
{
    double result =((number_of_people_in_zone - number_of_deaths) / number_of_people_in_zone) * 100;
    return result;
}

double calculateTotal(double number_of_people_in_zone, double percentage_of_people_killed)
{
        double result = number_of_people_in_zone - (number_of_people_in_zone * percentage_of_people_killed);
        return result;
}

int main()
{
    cout << "Hello.\nThis program will display the percentage of survivors and the total number of\nsurvivors, in a simulated disaster scenario.\n\n";

    cout << "If the disaster zone had 4 people and 2 deaths:\n";
    double answer = calculatePct(4, 2);
    cout << answer << "% of people survived.\n";
    double answer_2 = calculateTotal(4, .50);
    cout << answer_2 << " people survived.\n\n";

    cout << "If the disaster zone had 100 people and 50 deaths:\n";
    double answer_3 = calculatePct(8, 2);
    cout << answer_3 << "% of people survived.\n";
    double answer_4 = calculateTotal(8, .20);
    cout << answer_4 << " people survived.\n\n";

    cout << "If the disaster zone had 100 people and 25 deaths:\n";
    double answer_5 = calculatePct(100, 25);
    cout << answer_5 << "% of people survived.\n";
    double answer_6 = calculateTotal(100, .75);
    cout << answer_6 << " people survived.\n\n";

    cout << "Thank you for viewing. Have a nice day!\n";
    return 0;
}

/*
SAMPLE RUN OUTPUT:
Hello.
This program will display the percentage of survivors and the total number of
survivors, in a simulated disaster scenario.

If the disaster zone had 100 people and 75 deaths:
25% of people survived.
25 people survived.

If the disaster zone had 100 people and 50 deaths:
50% of people survived.
50 people survived.

If the disaster zone had 100 people and 25 deaths:
75% of people survived.
75 people survived.

Thank you for viewing. Have a nice day!
*/
