#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;
 
int main() {
	string src = "D:\\test1.jpg";
	cv::Mat img = imread(src);
	if (img.empty()) return 0;
	imshow("cat", img);
	waitKey(0);
	
	return 0;
}