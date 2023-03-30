#include <opencv/highgui.h>
int main()
{
    IplImage*img = cvLoadImage("2.jpg");
    cvShowImage("week07",img);
    cvWaitKey(0);
}
