#include<iostream>
#include<Windows.h>
#include"mouse.h"
POINT p;
int main()
{
	std::cout << "hello" << std::endl;
	mou::mouselo(p);
	Sleep(5000);
	mou::setmouselo();
	return 0;
}