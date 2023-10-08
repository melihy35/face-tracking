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


int main() {
    // Webcam açma
    VideoCapture cap(0); // 0, birinci kamerayı temsil eder. Birden fazla kamera varsa, kamera numarasını değiştirebilirsiniz.

    if (!cap.isOpened()) {
        cerr << "Webcam açılamadı!" <<endl;
        return -1;
    }

    namedWindow("Webcam", WINDOW_NORMAL); // Pencereyi oluştur

    while (true) {
        Mat frame;
        cap >> frame; // Webcam görüntüsünü al

        if (frame.empty()) {
            cerr << "Görüntü alınamadı!" << endl;
            break;
        }

        imshow("Webcam", frame); // Görüntüyü ekranda göster

        // ESC tuşuna basılınca döngüden çık
        if (waitKey(10) == 27) {
            break;
        }
    }

    cap.release(); // Webcam'i serbest bırak
    destroyWindow("Webcam"); // Pencereyi kapat

    return 0;
}
