# Protobuf example

In this example a `cv::Mat` will be serialized and deserialized using protobuf.

Make sure to have **protoc** installed. I built it from source:

```bash
sudo apt-get install g++ git bazel
git clone https://github.com/protocolbuffers/protobuf.git
cd protobuf
git submodule update --init --recursive
cmake . -DCMAKE_CXX_STANDARD=14
cmake --build . --parallel 10
ctest --verbose
sudo cmake --install .
```

TO-DO: Try this command:
```bash 
sudo apt install libprotobuf-dev protobuf-compiler
```

# Running the example

Compiling:
```bash
make all
```

To serialize the matrix run the binary:
```bash
./serialize
```
this command will write a `test.data` file that will store the matrix.

To deserialize the matrix run the binary:
```bash
./deserialize
```
this binary will deserialize the `test.data` file.

# Reference
https://stackoverflow.com/questions/51553943/how-can-i-serialize-cvmat-objects-using-protobuf
