CFLAGS_LIBS = `pkg-config --cflags --libs protobuf opencv` 

all: protobuf cpp

cpp: serialize deserialize


protobuf:
	protoc --cpp_out=. PipelineMessage.proto

serialize:
	g++ -std=c++14 serialize.cpp PipelineMessage.pb.cc -o serialize $(CFLAGS_LIBS)

deserialize:
	g++ -std=c++14 deserialize.cpp PipelineMessage.pb.cc -o deserialize $(CFLAGS_LIBS)

clean:
	rm serialize deserialize