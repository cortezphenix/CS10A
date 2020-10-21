/*
Poetry In Motion; Cortez Phenix
This program allows the user to make a poem, and the program contains a
poem game. The most notable features are loops controlled by the user.
*/

#include <string>
#include <iostream>
using namespace std;

void guessLimerick();

void makePoem()
{
    string poem;
    string user_input;

    cout << "Enter a poem of your own creation, one line at a time.\n";
    cout << "Type your poem, pressing the enter key to create a new line.\nType '_quit_', after entering your poem, to stop writing your poem and move on\nto a fun game.\n\n";

    while (getline(cin, user_input))
    {
        if (user_input == "_quit_")
            break;

        poem += user_input;
        poem += '\n';
    }

    cout << "\nWow! What an amazing poem!\n";
    guessLimerick();
}

void guessLimerick()
{
    cout << "\nTime for a limerick guessing game!\nRead the following limerick, and type what you think the final word is,\nin all lowercase letters, followed by a period.\n\n";

    string final_word;
    do
    {
    cout << "\nIn pizza tech, changes abound.\nThe progress they serve is profound.\nI'd say it's a miracle to make the box spherical,\na box that is totally ";
    cin >> final_word;
    }
    while (final_word != "round." && cout << "\nThat's wrong! Try again!\n");

    if (final_word == "round.")
        cout << "\nThat's right!\nHave a great day!\n";
}

int main()
{
    makePoem();
    return 0;
}

/*
TEST OUTPUT:

Enter a poem of your own creation, one line at a time.
Type your poem, pressing the enter key to create a new line.
Type '_quit_', after entering your poem, to stop writing your poem and move on
to a fun game.

this is my poem
my poem is great
it is time to celebrate

_quit_

Wow! What an amazing poem!

Time for a limerick guessing game!
Read the following limerick, and type what you think the final word is,
in all lowercase letters, followed by a period.


In pizza tech, changes abound.
The progress they serve is profound.
I'd say it's a miracle to make the box spherical,
a box that is totally round!

That's wrong! Try again!

In pizza tech, changes abound.
The progress they serve is profound.
I'd say it's a miracle to make the box spherical,
a box that is totally round.

That's right!
Have a great day!
*/
