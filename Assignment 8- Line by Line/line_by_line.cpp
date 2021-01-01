/*
Assignment 8- Line by Line, A Program of Cortez Phenix.
This program reads a text file and writes lines to an array, allowing
the user to select which line they would like to view.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

struct OpenFailException : public exception{
    const char* what() const throw (){
        return "file not available";
    }
};

class FileIO
{
    public:
        FileIO(const string& Path,const bool &ToMemory){
            _Path = Path;
            _File.open(_Path);
            _Load = ToMemory;

            if(_File.is_open()){
                if(ToMemory){
                    while(!_File.eof()){
                        string Input;
                        getline(_File, Input, '\n');
                        _Memory.push_back(Input);
                    }
                }
            }

            else{
                cout<<"file not available";
                exit;
            }
        }
        string Data(const int &Line){
            return _Memory[Line - 1];
        }
    private:
        string _Path;
        fstream _File;
        vector <string> _Memory;
        bool _Load;
};

int main()
{
    FileIO A("weblog.txt", true);
    int Input;
    cout << "In this program, you will enter a line number.\nThat line number of the text file will be displayed.\nTo exit the program enter 9999.\n\nEnter Your Desired Line Number: ";
    do
    {
    cin>>Input;
    cout << "\n";
    cout<<A.Data(Input);
    }
    while (Input != 9999 && cout << "\n\nEnter Your Desired Line Number: ");
}

/*
SAMPLE RUN:

In this program, you will enter a line number.
That line number of the text file will be displayed.
To exit the program enter 9999.

Enter Your Desired Line Number: 1

172.138.80.174 - - [05/Aug/2001:21:06:27 -0300] "GET /~csc226 HTTP/1.0" 301 303 "http://www.goto.com/d/search/?Keywords=stringVar+%2B+savitch&view=2+80+0&did=" "Mozilla/4.61 [en] (Win98; I)"


Enter Your Desired Line Number: 2

172.138.80.174 - - [05/Aug/2001:21:06:28 -0300] "GET /~csc226/ HTTP/1.0" 200 3387 "http://www.goto.com/d/search/?Keywords=stringVar+%2B+savitch&view=2+80+0&did=" "Mozilla/4.61 [en] (Win98; I)"


Enter Your Desired Line Number: 2990

140.184.39.111 - - [11/Sep/2001:12:02:53 -0300] "GET /~csc226/class HTTP/1.0" 301 309 "http://cs.stmarys.ca/~csc226/" "Mozilla/4.77 [en] (Windows NT 5.0; U)"


Enter Your Desired Line Number: 9999

terminate called after throwing an instance of 'std::length_error'
  what():  basic_string::_M_create
Aborted (core dumped)
*/

