#include<iostream>
#include<Windows.h>
#include<fstream>
#include"mouse.h"
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
POINT p;
int main()
{
	//std::string path = "picture_test/����.jpg";����·����
	//cv::Mat img = cv::imread(path);MatΪͼ����󣬶���һ��ͼ��imread��ȡ·�����ַ���ͼ�����
	//cv::imshow("my wife", img);imshow����ʾͼ�񣬵�һ������Ϊ���������ڶ���Ϊͼ���������
	//cv::waitKey(0);��cvר�еĵȴ��������еȴ�������ͼ��չʾ�����
	
	
	std::string path1 = "video_test/1.mp4";
	cv::VideoCapture cap(0);
	cv::Mat img;
	cv::Mat imgray;
	while (1)
	{
		cap.read(img);
		cv::cvtColor(img, imgray, cv::COLOR_BGR2GRAY);
		cv::imshow("gray", imgray);
		cv::imshow("emmm", img);
		cv::waitKey(1);
	}
	return 0;
}
