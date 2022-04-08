#include <iostream>
#include "meerkat.h"
using namespace std;

int main() 
{
	meerkat m1,m2;
	m1.setName("Alice");
	m1.setAge(34);
	m2.setName("john");
	m2.setAge(45);
	
	cout<<"First name"<<m1.getName()<<"and age"<<m1.getAge()<<endl;
	cout<<"Second name"<<m2.getName()<<"and age"<<m2.getAge()<<endl;

}