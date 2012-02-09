#include "stdafx.h"
#include <stdio.h>
#include <iostream>
//Використовуючи тільки бітові та арифметичні операції, 
//написати функцію, яка виконує циклічний зсув заданого беззнакового 
//довгого цілого числа на r бітів уліво.
typedef unsigned int uint;
void printBinCode (uint n) //print binary code;
{
	std::cout<<"Binary code "<<n<<" - ";
	uint temp=n;
	for(int i=31;i>=0;i--)
		std::cout<<((n>>i)&1);
	std::cout<<std::endl;
};
uint cyclicLeftShift(uint p,uint n)
{
	uint temp=p>>(sizeof(p)*8-n);//save bits which going to be lost;
	p<<=n;//make a shift;
	return temp|p; //attache bits which lost to the end of p;
};
int main(void)
{
	uint numb,bn,res;
	std::cout<<"Enter a number"<<std::endl;
	std::cin>>numb;
	std::cout<<"Enter a number bits"<<std::endl;
	std::cin>>bn;
	printBinCode(numb);
	printBinCode(bn);
	res=cyclicLeftShift(numb,bn);
	printBinCode(res);
	getchar();
	getchar();
	return 0;
}

