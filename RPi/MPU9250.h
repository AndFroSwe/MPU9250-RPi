/* Header file for MPU-9250 IMU
 * Author: Andreas Froderberg
 * Description: This is a port of the SparkFun library for Arduino to Raspberry
 * Pi and C++. It uses I2C to talk to IMU.
 */

#ifndef MPU9250_H_
#define MPU9250_H_ 

// Includes
#include <cstdint> // For fixed width ints
#include <wiringPi.h> // For I2C access. Must compile with -lwiringPi
#include <wiringPiI2C.h> // For I2C access. Must compile with -lwiringPi

// ******* Register addresses **********
#define MPU9250_ADDRESS 0x68  // Device address when ADO = 0
#define AK8963_ADDRESS  0x0C   // Address of magnetometer

// IMU class
class MPU9250
{
  public:
    uint16_t readByte(uint16_t, uint16_t);
};

#endif /* ifndef MPU9250_H_ */
