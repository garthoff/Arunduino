/**
 * ArduClock.h
 *
 * Digital clock using Arduino and Seven Segment Led's 
 
 * Features :
 *  -- Digital Clock with AM/PM
 *  -- Alarm
 *  -- Pomodoro timer.
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

 #include "../SevenSegDisp/SevenSegDisp.h"
 #include "ArduClock.h" 

 /* 
     
     uint8_t _dataPin;      //Pins to push data to 74HC595
     uint8_t _latchPin;
     uint8_t _clockPin;
    
     uint8_t _btnMenu;
     uint8_t _btnOk;
     uint8_t _btnUp;
     uint8_t _btnDown;
 
     uint8_t _redLedPin;    //Led output pins.
     uint8_t _greenLedPin;

     uint8_t _buzzerPin;    //Buzzer output pin.

     uint8_t _timeValue;         //Clock related variables.
     uint8_t _currMenuMode;
 
     uint32_t _millisFromReset;
     uint32_t _timeValueInMillis;

     uint32_t _alarmValueInMillis;  //Alarm related variables.

     uint32_t _pomodoroValueInMillis;  //Pomodoro related variables.
     uint32_t _pomodoroCount;
   
     friend class SevenSegDisp;

   public:
     ArduinoClock();           //Default constructor

     void begin();
     void clear();

     //Set Pins.
   //  void setLedPins(uint8_t redLedPin,uint8_t greenLedPin);                 
     void setRegisterPins(uint8_t dataPin,uint8_t latchPin,uint8_t clockPin);
   //  void setBuzzerPin(uint8_t buzzerPin);

     //Display related functions.
     void setMenu();
     void getMenuString();
     void splashMessage(); 
    
     //Alarm Clock related. 
   //    void setAlarm(char* alarmValueTimeStr);
   //    uint32_t getAlarmvalueInMillis();
   //  char* getAlarmTimeStr();       
   
     //Pomodoro timer related functions.
    // void setPomodoros(uint8_t pomodoroCount);
    // uint32_t getPomodoroTimeInMillis();
    // char* getPomodoroTimeStr();

  */

     ArduClock::ArduClock(){

     };           //Default constructor
      
     
     void ArduClock::setMenu(){
       SevenSegDisp disp(_dataPin,_latchPin,_clockPin,_regsCount,_maxDispStrLen);
       char abc[]="-1-2-3-";
       disp.setDispStr(abc);
       disp.pushDispStr();  
     };


     void ArduClock::setRegisterPins(uint8_t dataPin,uint8_t latchPin,uint8_t clockPin,uint8_t regsCount,uint8_t maxDispStrLen){
        this->_dataPin=dataPin;
        this->_latchPin=latchPin;
        this->_clockPin=clockPin;
        this->_regsCount=regsCount;
        this->_maxDispStrLen=maxDispStrLen;
     };
