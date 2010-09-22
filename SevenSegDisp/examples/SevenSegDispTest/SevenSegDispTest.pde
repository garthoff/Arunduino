/**
 * This example demonstrates the usage of Seven Segment Display library. 
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

#include <SevenSegDispFont.h>
#include <SevenSegDisp.h>

//Shift Register pins.
int dataPin=4;
int latchPin=5;
int clockPin=6;
int regsCount=5;
int maxDispString=10;

SevenSegDisp sevenSegDisp(dataPin,latchPin,clockPin,regsCount,maxDispString);

char numStr[]={'0','1','2','3','4','5'};

void setup(){

 Serial.begin(9600);
 sevenSegDisp.setDispStr(numStr);

}

void loop(){
 sevenSegDisp.pushDispStr();
 delay(1000);
}
