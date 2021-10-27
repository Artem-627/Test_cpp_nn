#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat image = imread("C:\\Users\Artem\Downloads\BZW1VuKHJyk.jpg");

	namedWindow("Photo", WINDOW_AUTOSIZE);
	imshow("Photo", image);
	waitKey(0);
	destroyAllWindows();
}
