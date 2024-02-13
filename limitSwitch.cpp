#include <iostream>
#include <unistd.h> 
#include <jetgpio.h> //Library for jpio

int main() {

    gpioInitialise(); //Initialises Library
    gpioSetMode(7, JET_INPUT); //sets Input for pin # 7
    gpioSetMode(8, JET_OUTPUT); //sets Output for pin # 8

    while (true) {
        int x = gpioRead(7); //Reads pin # 7
        if ( x == 1) {
            gpioWrite(8, 1); //Writes a 1 to pin # 8 
        } else {
            gpioWrite(8, 0); //Writes a 0 to pin # 8 
        };
    };
    return 0;
}