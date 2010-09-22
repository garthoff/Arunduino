/**
 * SevenSegDisp.cpp 
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


 

 #include "WProgram.h"      //Include all the constants & datatypes w.r.t arduino enviroment. 
 #include "Print.h"         //Include all the print related funtcions like print and println.

 #include "SevenSegDisp.h"

 #include <avr/pgmspace.h>     //Include library to Store data in flash (program) memory instead of SRAM.
 #include "SevenSegDispFont.h" //Seven Segment display font library. 
 
    /**
     * Constructor
     * Intialize the Shift Register Pins.
     * Register count is the total no of shift registers/displays used.
     */
    SevenSegDisp::SevenSegDisp( uint8_t dataPin
                      , uint8_t latchPin
                      , uint8_t clockPin
                      , uint8_t registerCount
                      , uint8_t maxDispLen
                      ){

        this->_dataPin=dataPin;
        this->_latchPin=latchPin;
        this->_clockPin=clockPin;
        this->_regsCount=registerCount;
        this->_maxDispLen=maxDispLen;
        char strBuf[this->_maxDispLen+1];
        int i;
        for(i=0;i<this->_maxDispLen;i+=1)
        {
           strBuf[i]=' ';
        };


        strBuf[this->_maxDispLen]='\0';
      
        this->setDispStr(strBuf);
        begin();
    };

    /**
     * Intialize arduino in/out pins.
     *
     */
    void SevenSegDisp::begin(){
     
      //Set Out Pins.
      pinMode(_dataPin,OUTPUT);
      pinMode(_clockPin,OUTPUT);
      pinMode(_latchPin,OUTPUT);
      clear();
    };


    void SevenSegDisp::clear(){
      int i;
      for(i=0;i < this->_maxDispLen ; i+=1){
        _dispStr[i]=' ';
      }

    };
     
     void SevenSegDisp::setDispStr(char* dispStr){    //Setter for dispString variable
         this->_dispStr=dispStr; 
     };

     char* SevenSegDisp::getDispStr(){     //Getter for dispString variable
       return this->_dispStr; 
     };


     void SevenSegDisp::pushDispStr(){     //Push the data to Shift registers.
      
       int displayInt;     
       int i;
 
       digitalWrite (_latchPin, LOW);
     
       for(i=0;i<5;i++){

          displayInt=pgm_read_word_near( SevSegFont + _dispStr[i] - 0x20 );
    
          shiftOut(_dataPin, _clockPin, MSBFIRST, displayInt );
       
       }; 
       
       digitalWrite (_latchPin, HIGH);

     };


