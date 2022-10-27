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
	//std::string path = "picture_test/鲨鲨.jpg";设置路径名
	//cv::Mat img = cv::imread(path);Mat为图像矩阵，定义一个图像，imread读取路径名字返回图像矩阵
	//cv::imshow("my wife", img);imshow来显示图像，第一个参数为窗口名，第二个为图像矩阵类型
	//cv::waitKey(0);用cv专有的等待函数进行等待，否则图像展示会错误
	
	
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
