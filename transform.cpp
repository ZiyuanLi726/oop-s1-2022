#include <iostream>
using namespace std;

int conv10to2(int a[],int num)
{
    
    for (int i = 0;num>0;i++)
    {
        a[i] = num%2;
        num = num/2;
    }
    
    cout<<"Binary of the given number= ";    
    for(int i=i-1 ;i>=0 ;i--)    
    {    
        cout<<a[i];    
    }
    
    return 0;

}


int main()
{
    int test_a = 75;
    cout<<conv10to2(test_a)<<endl;

}