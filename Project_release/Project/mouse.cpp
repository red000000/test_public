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
	void setmouselo()
	{

		SetCursorPos();
	}

}