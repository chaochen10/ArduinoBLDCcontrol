/* 
	Editor: http://www.visualmicro.com
	        arduino debugger, visual micro +, free forum and wiki
	
	Hardware: Arduino Uno, Platform=avr, Package=arduino
*/

#define __AVR_ATmega328p__
#define __AVR_ATmega328P__
#define _VMDEBUG 1
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}

//
//
void readSensorHall();
void bldcControl();

#include "C:\Archivos de programa\Arduino\hardware\arduino\variants\standard\pins_arduino.h" 
#include "C:\Archivos de programa\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "\\vmware-host\Shared Folders\Documents\Arduino\Smart EBike\arduinoBLDC\arduinoBLDC.ino"
