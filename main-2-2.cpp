#include <iostream>
using namespace std;
extern int maximum_sum(int*,int);

int main() {
	int array[8] = { 31, -41, 59, 26, -53, 58, 97, -93 };
	
	int size = 10;
	
	int *ptr = array;

	int max = maximum_sum(ptr,size);

	cout << "The sum is: " << max << endl;

	return 0;
}