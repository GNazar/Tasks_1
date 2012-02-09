/*7. Використовуючи тільки бітові операції, написати функцію,
яка міняє місцями усі сусідні біти у заданому беззнаковому довгому цілому числі.*/
#include "stdafx.h"
#include <iostream>
typedef unsigned long uint;
void printBinCode (uint n) //print binary code;
{
	std::cout<<"Binary code "<<n<<" - ";
	uint temp=n;
	for(int i=sizeof(n)*8-1;i>=0;i--)
		std::cout<<((n>>i)&1);
	std::cout<<std::endl;
};
uint exchangeBits(uint p)//change next bits;
{
	uint mask=(uint)0x5555555555555555;//mask for extracting odd bits (...10101);
	uint temp=(p>>1)&mask;//shift bits on an odd position to even position and extract them;
	p=(p<<1)&(~mask);//shift bits on an even position to odd position and extract them;
	return temp|p;

}
int main()
{
	uint n,res;
	std::cout<<"Enter a number"<<std::endl;
	std::cin>>n;
	printBinCode(n);
	std::cout<<"Result:\n";
	res=exchangeBits(n);
	printBinCode(res);
	getchar();
	getchar();
	return 0;
}

