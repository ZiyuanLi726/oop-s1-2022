#include <iostream>
using namespace std;

extern int* collate_negatives(int *vals,int len, int num_negative);
extern int count_negatives(int *vals,int len);

int main()
{
    int *vals[5] = {-1,3,-4,-5,6};
    int len = 5
    cout << count_negatives(*vals,5) << endl;
    cout << collate_negatives(*vals,5,num_negative)
}