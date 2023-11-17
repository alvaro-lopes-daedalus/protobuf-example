#include <iostream>
#include <opencv2/opencv.hpp>
#include "PipelineMessage.pb.h"


using namespace std;

int main(void)
{

    cv::Mat m = cv::Mat::ones(480, 640, CV_8UC3);

    cv::imshow("test", m);
    cv::waitKey(0);
    cv::destroyAllWindows();


    //open a file in output, overwrite and binary mode
    fstream output("test.data", ios::out | ios::trunc | ios::binary);

    //create an instance of the class generated by the compilation of the .proto file
    opencv::OcvMat serializableMat;

    //set the trivial fields
    serializableMat.set_rows(m.rows);
    serializableMat.set_cols(m.cols);
    serializableMat.set_elt_type(m.type());
    serializableMat.set_elt_size((int)m.elemSize());

    //set the matrix's raw data
    size_t dataSize = m.rows * m.cols * m.elemSize();
    serializableMat.set_mat_data(m.data, dataSize);

    //write to file
    if(!serializableMat.SerializeToOstream(&output))
    {
        cerr << "error" << endl;
    }

    output.close();
    return 0;
}