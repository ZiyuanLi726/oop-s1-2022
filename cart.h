#ifndef CART_H
#define CART_H
#include <iostream>
#include "meerkat.h"

class cart 
{

public:
	cart();    
	void printMeercats();
	bool addMeerkat(meerkat cat);   
	void emptyCart();               
	


private:
	int max;
	int curNum;
	meerkat meercart[5];
};

#endif