#include<iostream>
#include "NumberList.h"

int main()
{
	NumberList test;
	test.Init();
	test.Add(6);
	test.Add(3);
	test.Add(1);
	test.Add(7);
	test.Add(5);
	test.Add(2);
	test.Print();
	printf("\n");
	test.Sort();
	test.Print();
	return 0;
}