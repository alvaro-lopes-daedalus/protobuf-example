#include <iostream>
#include <opencv2/opencv.hpp>
#include "PipelineMessage.pb.h"



using namespace std;

int main(void) {
    //open the file where the data was written in input and binary mode
    fstream input("test.data", ios::in | ios::binary);

    //create an instance of the class generated automatically by the compilation of the .proto file
    opencv::OcvMat serializableMat;

    //create an empty OpenCV matrix
    cv::Mat m;

    //read the data from the input file into the OcvMat object
    if(serializableMat.ParseFromIstream(&input))
    {
        //allocate the matrix
        m.create(serializableMat.rows(),
        serializableMat.cols(),
        serializableMat.elt_type());

        //set the matrix's data
        size_t dataSize = serializableMat.rows() *  serializableMat.cols() * serializableMat.elt_size();

        std::copy(reinterpret_cast<unsigned char *>(
                const_cast<char *>(serializableMat.mat_data().data())),
            reinterpret_cast<unsigned char *>(
                const_cast<char *>(serializableMat.mat_data().data()) + dataSize),
            m.data);
        
        cv::imshow("test", m);
        cv::waitKey(0);
        cv::destroyAllWindows();
    }
    else
    {
        cerr << "error" << endl;
    }

    input.close();

    return 0;
}