#include <iostream>
using namespace std;

void passorfail(char grade)
{
    string result = "null";
    switch (grade)
    {
        case 'A':
        result = "Pass";
        break;
        
        case 'B':
        result = "Pass";
        break;
        
        case 'C':
        result = "Pass";
        break;
        
        case 'D':
        result = "Fail";
        break;
        
        case 'E':
        result = "Fail";
        break;
    }
    
    if (result == "null")
    {
        cout << "nothing" << endl;
    }
    else
    {
        cout << result << endl;
    }
}
