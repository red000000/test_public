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
		std::cout << "����1Ϊ��ȡ10�����λ�ã�0Ϊ����ȡ" << std::endl;
		while (1)
		{
			std::cin >> i;
			if (i == 1)
			{
				Mouselo();
				std::cout << "�Ƿ����»�ȡ��1Ϊȷ��0Ϊ�˳�" << std::endl;
			}
			if (i == 0)
				break;
		}
	}
}