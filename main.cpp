#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#define W 3
#define H 4
using namespace cv;
using namespace std;

int main(){
    Mat image;
    image = imread("ramphastosSulphuratus.jpg", CV_LOAD_IMAGE_COLOR);   // Read the file

	for (int rows=0; rows<=image.rows; rows=rows+W){
		for(int cols=0; cols<=image.cols; cols=cols+H){
			std::cout<<"pizel value: "<<image[rows,cols];
		}
	}
    if(! image.data ){
        return -1;
    }

    return 0;
}
