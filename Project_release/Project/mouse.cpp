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
		std::cout << "����1Ϊ��ȡ10�����λ�ã�0Ϊ����ȡ" << std::endl;
		while (1)
		{
			std::cin >> i;
			if (i == 1)
			{
				Mouselo(p);
				std::cout << "�Ƿ����»�ȡ��1Ϊȷ��0Ϊ�˳�" << std::endl;
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
			std::cout << "�����λ���ļ�ʧ��,����" << std::endl;
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