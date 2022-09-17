#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/cudaimgproc.hpp>
#include <opencv2/core.hpp>
//#include <opencv2/core/cuda.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>
#include <stdlib.h>
#include <ctime>


using namespace std;
using namespace cv;



void main() {

    Mat kamera;    
    VideoCapture cap(1);

    while (true)
    {
        cap.read(kamera); //read cam
		flip(kamera, kamera, 1);//mirror cam
		imshow("kopya first layer", kamera);
		waitKey(1);
    }
    



}