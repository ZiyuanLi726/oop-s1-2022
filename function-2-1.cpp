#include <iostream>
#include<cmath>
#include<string>
using namespace std;

void print_as_binary(std::string decimal_number)
{
    long long l=0,base=1;
    for(int i=decimal_number.size()-1;i>=0;i--)
    {
        l+=base*(decimal_number[i]-'0');
        base*=2;
    }
	cout<<l;
}