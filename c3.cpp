//prints black and white and colour
#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void imgcreate(void)
{
Mat color_image(600,800, CV_8UC3, 255);
Mat BW_image(600, 800, CV_8UC1, 255);
for(int i = 150; i<300; i++)
for(int j = 150; j<600; j++)
{
color_image.at<Vec3b>(i,j)[0] =0;
color_image.at<Vec3b>(i,j)[1] =0;
color_image.at<Vec3b>(i,j)[2] =255;

BW_image.at<uchar>(i,j) = 0;
}
imshow("color :", color_image);
imshow("B&W:",BW_image);
}

int main()
{
imgcreate();
waitKey(0);
return 0;
}
