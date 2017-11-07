#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#define W 3
#define H 4
using namespace cv;
using namespace std;

int main(){
    Mat image, newImage	;
    image = imread("ramphastosSulphuratus.jpg", CV_LOAD_IMAGE_COLOR);   // Read the file
	int  average [3]={0,0,0};
	for (int rows=0; rows<=image.rows; rows=rows+W){
		for(int cols=0; cols<=image.cols; cols=cols+H){
			Mat cropped(image, Rect(rows, cols, rows+H, cols+W));
			averagePixel(cropped);
		

		}
	}
	
	
    if(! image.data ){
        return -1;
    }

    return 0;
}
int [3] averagePixel(mat subImage){
	int crows, ccols;
	int[] bc =[0,0,0];
	for(crows=0; crows<= subImage.rows; crows++){
		for(ccols=0; ccols<=subImage.cols;ccols++){
			
			Vec3b intensity = subImage.at<Vec3b>(crows, ccols);
			bc[0]=bc[0]+intensity.val[0];
			bc[1]=bc[1]+intensity.val[1];
			bc[2]=bc[2]+intensity.val[2];
		}
	}
	return bc;
}
void setPixelColor(int x, int y, int color){
	for (int c=x; c<=c+x; c++){
		for (int c=x; c<=c+x; c++){
			image.at<Vec3b>(Point(x,y)) = color;

		}
	}
}
