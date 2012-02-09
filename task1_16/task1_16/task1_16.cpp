/*16. �������������� ����� ���� �� ���������� ��������, �������� �������, 
��� ������� ���������� ����� ���� �����, ��� ������ ���� ��������� ��� �������� n, 
��������� � p-�� ��� (��� ����������� �� 0 ������ �����).*/
#include "stdafx.h"
#include <iostream>
typedef unsigned long ulong;
void printBinCode (ulong n) //print binary code;
{
	std::cout<<"Binary code "<<n<<" - ";
	ulong temp=n;
	for(int i=sizeof(n)*8-1;i>=0;i--)
		std::cout<<((n>>i)&1);
	std::cout<<std::endl;
};
ulong fillBits(ulong p,ulong n)
{
	int numb=sizeof(ulong)*8-n;;
	ulong temp=-1; //fill temp by '1';
	temp>>=numb; //get n bits filled by '1' at the first positons;
	temp<<=p;//set bits at p position;
	return temp;
}
int main(void)
{
	ulong res;
	int p,n;
	std::cout<<"Enter number of bits\n";
	std::cin>>n;
	std::cout<<"Enter position number\n";
	std::cin>>p;
	res=fillBits(p,n);
	std::cout<<"Results:\n";
	printBinCode(res);
	getchar();
	getchar();
	return 0;
}

