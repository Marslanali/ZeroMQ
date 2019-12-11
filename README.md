# cpp_matlab_zmq
Publisher Subscriber pattern for C and Matlab using ZeroMQ.

This repositroy is implementation publisher/subsciber pattern for C and Matlab.

### Dependencies

This project was built using VC2015 with Matlab 2016a with ZMQ 4.0.x. 

### ZeroMQ Installation

Make sure latest version of ZeroMQ install on your system. For ZeroMQ installation, see https://zeromq.org/download/ for instructions.

#### Matlab binding for ZeroMQ

Make sure you have ZMQ 4.0.x installed. Change settings in config_win.m to point to your installation. Ensure you have mex configured. On Matlab it can be easily set by ``` mex -setup C ```.
Then Run ```make.m```
Make sure that the lib directory is on your MATLAB path.

### Runing the Code

To run, first clone the repository.

```git clone``` https://github.com/Marslanali/cpp_matlab_zmq.git

Run ```Publisher.cpp``` and on matlab run ```Subscriber.m```.
