#include <iostream>
#include <wiringPi.h>
#include <wiringPiI2C.h>
#include <MPU9250.h>

// Register SPI addresses
#define DEVID 0x68
#define WHO_AM_I 0x75

using namespace std;

int main(int argc, char** argv) {
    cout << "Starting program..." << endl;
    cout << "Connecting to IMU..." << endl;
    
    int fd; // Device file handle
    if ((fd = wiringPiI2CSetup(DEVID)) < 0) {
        cout << "Device connection not successfull!" << endl;
        return -1;
    }
    // Read who am i register as a test
    int me = wiringPiI2CReadReg8(fd, WHO_AM_I);
    cout << "I am: " << me << endl;
    cout << "I should be: " <<  0x71 << endl;

    cout << "Terminating..." << endl;
}
