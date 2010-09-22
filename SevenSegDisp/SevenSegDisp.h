/**
 * SevenSegDisp.h
 *
 * Library for driving 7 Segement display's using 74HC595- 8-bit serial-in,
 * serial or parallel-out shift register with output latches.
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
 #include "Print.h"         //Include all the print related funtcions like print and println.

 #include <avr/pgmspace.h>     //Include library to Store data in flash (program) memory instead of SRAM.
 #include "SevenSegDispFont.h" //Seven Segment display font library. 


 class SevenSegDisp
 {
   private:
     
     uint8_t _dataPin;      //Pins to push data to 74HC595
     uint8_t _latchPin;
     uint8_t _clockPin;
    
     uint8_t _regsCount;  //Display length == total no of registers.
     char*   _dispStr;    //String representation of data to be displayed on Seven Segment display.'
     uint8_t _maxDispLen;

   public:
     SevenSegDisp( uint8_t dataPin
                   , uint8_t latchPin
                   , uint8_t clockPin
                   , uint8_t registerCount
                   , uint8_t maxDispLen
                   );

     void begin();            //Intialize arduino in/out pins.
     void clear();            //Clear dispString and reset it to blank.
     void setDispStr(char* dispStr);    //Setter for dispString variable
     char* getDispStr();     //Getter for dispString variable
     void pushDispStr();     //Push the data to Shift registers.
 };

 //extern SevenSedDispClass sevenSegDisp;

 #endif
      
