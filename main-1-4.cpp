#include <iostream>

using namespace std;

extern void cpyda(double* ,double* ,int);

int main() 
{

	double * arr1 = new double[3];
	arr1[0] = 0.1;
	arr1[1] = 0.2;
	arr1[2] = 0.3;

	double * arr2 = new double[3];
	int length = 3;
	cpyda(arr1,arr2,length);
	delete[] arr1;
	delete[] arr2;

	return 0;
}