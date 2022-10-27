#include<iostream>
#include<Windows.h>
#include<fstream>
#include"mouse.h"
POINT p;
int main()
{
	//mou::mouselo(p);
	mou::mouse();
	std::cout << "ok" << std::endl;
	return 0;
}