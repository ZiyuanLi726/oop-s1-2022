#include "cart.h"

cart::cart() 
{
	
    curNum = 0;
	max = 5;
}     

bool cart::addMeerkat(meerkat cat) 
{
	if (curNum < max) 
	{
		meercart[curNum] = cat;
		curNum ++;
	}else {
		std::cout << "The cart is full" << std::endl;
	}

	if(curNum == max) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}   

void cart::emptyCart() 
{
	curNum = 0;
	std::cout << "empty" << std::endl;
}            

void cart::printMeerkats() 
{
	if(curNum == 0) 
	{
		std::cout << "No meerkat" << std::endl;
	}
	else 
	{
		for (int i = 0; i < curNum; i++) 
		{
			std::cout << "Meerkat " << i+1 << ": Name is " << meercart[i].getName() << ", Age is " << meercart[i].getAge() << std::endl; 
		}
	}
} 
