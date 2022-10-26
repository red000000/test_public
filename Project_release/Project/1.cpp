#include<iostream>
#include<Windows.h>
namespace mou
{
	void Mouselo()
	{
		int i = 0;
		POINT a;
		while (i < 10)
		{
			GetCursorPos(&a);
			std::cout << a.x << "    " << a.y << std::endl;
			Sleep(500);
			++i;
		}
	}
	void mouselo()
	{
		int i;
		std::cout << "输入1为获取10次鼠标位置，0为不获取" << std::endl;
		while (1)
		{
			std::cin >> i;
			if (i == 1)
			{
				Mouselo();
				std::cout << "是否重新获取？1为确认0为退出" << std::endl;
			}
			if (i == 0)
				break;
		}
	}
}