#include <iostream>

using namespace std;

extern void copy_2d_strings(string[][2], string[][2], int);

int main() 
{
    int row = 3;
	string arr1[3][2] = {{"a","b"},{"c","d"},{"e","f"}};
	string arr2[3][2];
	

	copy_2d_strings(arr1,arr2,row);

	return 0;
}