#include "stdafx.h"
#include <iostream>
typedef unsigned long ulong;
void printBinCode (ulong n) //print binary code;
{
	std::cout<<"Binary code "<<n<<" - ";
	ulong temp=n;
	for(int i=sizeof(ulong)*8-1;i>=0;i--)
		std::cout<<((n>>i)&1);
	std::cout<<std::endl;
};
ulong min(int p)
{
	int temp=p;
	temp>>=sizeof(temp); //fill temp 1 if temp negative or 0 if possitive
 	temp=~temp;    //make a mask to extract possitive number
	return temp&p;  //extract possitive number
}
int main(void)
{
	int numb;
	ulong res;
	std::cout<<"Enter a number"<<std::endl;
	std::cin>>numb;
	printBinCode(numb);
	res=min(numb);
	std::cout<<"Result:"<<std::endl;
	printBinCode(res);
	getchar();
	getchar();
	return 0;
}

