/**
 *  SevenSegDisp.h
 * SevenSegDisp.h
 *
 * Library for driving 7 Segement display's using 74HC595- 8-bit serial-in,
 * serial or parallel-out shift register with output latches.
 *
 *
 *
 *
 *
 * Copyright (C) 2010  arunreddy
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


 #ifndef SevenSegDisp_h     //To make sure header file is included only once.
 #define SevenSegDisp_h


 #include "WProgram.h"      //Include all the constants & datatypes w.r.t arduino enviroment. 
 #incldue "Print.h"         //Include all the print related funtcions like print and println.

 #include <avr/pgmspace.h>     //Include library to Store data in flash (program) memory instead of SRAM.
 #include "SevenSegDispFont.h" //Seven Segment display font library. 
 
 class SevenSegDispClass
 {
   private:
     
     uint8_t _dataPin;      //Pins to push data to 74HC595
     uint8_t _latchPin;
     uint8_t _clockPin;
    
 
     uint8_t _redLedPin;    //Led output pins.
     uint8_t _greenLedPin;

     uint8_t _buzzerPin;    //Buzzer output pin.

     uint8_t timeValue;         //Clock related variables.
     uint8_t currMenuMode;
 
     uint32_t millisFromReset;
     uint32_t timeValueInMillis;

     uint32_t alarmValueInMillis;  //Alarm related variables.

     uint32_t pomodoroValueInMillis;  //Pomodoro related variables.
     uint32_t pomodoroCount;


   public:
     SevenSegDispClass( uint8_t dataPin
                      , uint8_t latchPin
                      , uint8_t clockPin
                      , uint8_t _redLedPin
                      , uint8_t _greenLedPin
                      , uint8_t _buzzerPin 
                      );

     void begin();
     void clear();
     void setMenu();
     void getMenuString();
     void splashMessage(); 
 };

 extern SevenSedDispClass sevenSegDisp;

 #endif
      
