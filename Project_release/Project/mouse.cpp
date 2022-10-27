#include<iostream>
#include<fstream>
#include<Windows.h>

namespace mou
{
	void Mouselo(POINT &p)
	{
		int i = 0;
		while (i < 10)
		{
			GetCursorPos(&p);
			std::cout << p.x << "    " << p.y << std::endl;
			Sleep(500);
			++i;
		}
	}
	void mouselo(POINT &p)
	{
		int i;
		std::cout << "输入1为获取10次鼠标位置，0为不获取" << std::endl;
		while (1)
		{
			std::cin >> i;
			if (i == 1)
			{
				Mouselo(p);
				std::cout << "是否重新获取？1为确认0为退出" << std::endl;
			}
			if (i == 0)
				break;
		}
	}
	void mouse()
	{
		std::ifstream mouselofile;
		mouselofile.open("mouselofile.txt",std::ios::in);
		if (!mouselofile.is_open())
		{
			std::cout << "打开鼠标位置文件失败,请检查" << std::endl;
			return;
		}
		while (!mouselofile.eof())
		{
			int x, y, mode;
			mouselofile >> x, mouselofile >> y, mouselofile >> mode;
			SetCursorPos(x,y);
			if (mode == 1)
			{
				mouse_event(MOUSEEVENTF_LEFTDOWN|MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			}
			if (mode == 2)
			{
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
				Sleep(10);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			}
			if (mode == 3)
			{
				mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
			}
			Sleep(2000);
		}
		mouselofile.close();
	}
}