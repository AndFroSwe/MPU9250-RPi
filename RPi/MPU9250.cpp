/* Source file for MPU-9250 IMU
 * Author: Andreas Froderberg
 */
#include "MPU9250.h"

uint16_t MPU9250::readByte(uint16_t address, uint16_t subAddress)
{
    // Address is device file handle
    // subAddress is register address
    uint16_t data; // `data` will store the register data   
    data = wiringPiI2CReadReg8(address, subAddress);

    return data; // Return data read from slave register
}
