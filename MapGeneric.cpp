#include "MapGeneric.h"
using namespace std;

vector<int> MapGeneric::map(vector<int> input)
{
    for(vector<int>::iterator iter = input.begin(); iter != input.end(); iter++)
    {
        *iter = f(*iter);
    }
    return input;
}