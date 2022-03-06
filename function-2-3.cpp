#include <iostream>
using namespace std;

void twofivenine(int array[], int n)
{
    int two = 0;
    int five = 0;
    int nine = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 2)
        {
            two+=1;
        }
        else if (array[i] == 5)
        {
            five+=1;
        }
        else if (array[i] == 9)
        {
            nine+=1;
        }
    }
    cout << "2:" << two << ";" << "5:" << five << ";" << "9:" << nine << ";" << endl;
    cout<<endl;
}