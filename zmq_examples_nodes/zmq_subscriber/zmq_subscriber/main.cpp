#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <zmq.h>
#include <iostream>

int main(void) {
  printf("Connecting to zmq_windows_server server\n");

  char buffer[20];

  void* context = zmq_ctx_new();
  void* subscriber = zmq_socket(context, ZMQ_SUB);

  zmq_connect(subscriber, "tcp://localhost:5555");
  int a = zmq_recv(subscriber, buffer, 20, 0);
  assert(a != -1);
  std::cout << "Received: \n " << buffer << std::endl;
  zmq_close(subscriber);
  zmq_ctx_destroy(context);

  return 0;
}
