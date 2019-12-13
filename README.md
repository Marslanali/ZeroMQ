# cpp_matlab_zmq
Publisher/Subscriber and PUSH/PULL pattern for C and Matlab using ZeroMQ.

This repositroy is implementation publisher/subsciber and PUSH/PULL pattern for C and Matlab.

### Dependencies

Tested on Windows 10 with VC2015 & Matlab 2016a with ZMQ 4.0.x. Also tested on Ubuntu 16.04 LTS & Matlab 2015a linux with Cmake.  

### ZeroMQ Installation

**On Windows:**

Make sure latest version of ZeroMQ install on your system. For ZeroMQ installation, see https://zeromq.org/download/ for instructions.

**On Debian and Ubuntu:**

if you intall by ``` sudo apt-get install libzmq3-dev ```, CMake should be configure according. Recommend way is to build from source. https://github.com/zeromq/libzmq. 


```
./configure
make
sudo make install
sudo ldconfig

```

### ZeroMQ mex bindings for MATLAB 

Make sure you have ZMQ 4.0.x installed. Change settings in ```config_win.m``` & ```config_unix.m``` to point to your installation. Ensure you have mex configured. On Matlab it can be easily set by ``` mex -setup C ```.
Then Run ```make.m```. 
Make sure that the lib directory is on your MATLAB path.

### Runing the Code

To run, first clone the repository.

```git clone``` https://github.com/Marslanali/cpp_matlab_zmq.git

**On Windows:**

Open with Visual studio and run ```Publisher.cpp``` and on matlab run ```Subscriber.m```.

**On Ubuntu:**

```
cd cpp_matlab_zmq-master
mkdir build
cd build
cmake ..   
make
```

### Problem running the code

**On Windows:**

Make sure you environment variable is set for path of ``libsodium.dll`` on your VC++ and Matlab path where you are currently running example codes.

Other dependencies can be check by dependency walker, see http://www.dependencywalker.com/ 

**On Ubuntu:**

