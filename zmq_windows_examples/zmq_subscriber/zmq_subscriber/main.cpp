#include <zmq.h>
#include <stdio.h>
//#include <unistd.h>
#include <string.h>
#include <assert.h>
#include <iostream>


int main(void)
{

	printf("Connecting to hello world server\n");
	void * context = zmq_ctx_new();
	void * subscriber = zmq_socket(context, ZMQ_SUB);
	zmq_connect(subscriber, "tcp://127.0.0.1:5556");
	const int SIZE = 20;
	char msg[SIZE];
//	cout << "receiving..." << endl;
//	zmq_setsockopt(subscriber, ZMQ_SUBSCRIBE, "hello", strlen("hello"));
	int a = zmq_recv(subscriber, msg, SIZE, 0);
	assert(a != -1);
	std::cout << "received" << msg << std::endl;
	zmq_close(subscriber);
	zmq_ctx_destroy(context);
	return 0;


}
