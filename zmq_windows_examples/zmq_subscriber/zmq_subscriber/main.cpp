
/*
#include <zmq.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	void *context = zmq_init(1);
	void *socket = zmq_socket(context, ZMQ_SUB);
	zmq_connect(socket, "tcp://127.0.0.1:12345");
	zmq_setsockopt(socket, ZMQ_SUBSCRIBE, "", 0);

	char string[1000] = "";
	while (1) {
		zmq_msg_t in_msg;
		zmq_msg_init(&in_msg);
		zmq_recv(socket, &in_msg, 20,0);
		int size = zmq_msg_size(&in_msg);
		memcpy(string, zmq_msg_data(&in_msg), size);
		zmq_msg_close(&in_msg);
		string[size] = 0;
		printf("%s\n", string);

		//sleep(1);
	}
	
	printf("Connecting to hello world serve\n");
	void *context = zmq_ctx_new();
	void *subscriber = zmq_socket(context, ZMQ_SUB);
	zmq_connect(subscriber, "tcp://127.0.0.1:5555");

	int request_nbr;
	for (request_nbr = 0; request_nbr != 10; request_nbr++) {
		char buffer[10];
		//printf("Sending Hello %d…\n", request_nbr);
		//zmq_send(requester, "Hello", 5, 0);
		zmq_recv(subscriber, buffer, 10, 0);
		printf("Received World %d\n", request_nbr);
	}
	
	zmq_close(socket);
	zmq_ctx_destroy(context);
	return 0;

}


*/

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