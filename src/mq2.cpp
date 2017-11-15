/*
 ******************************************************************************

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation, either
 version 3 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, see <http://www.gnu.org/licenses/>.

 This library is MQ2 smoke density modules

 ******************************************************************************
 */

#include "mq2.h"


//Specifications Pin
MQ2::MQ2(uint16_t pin)
{
    _pin = pin;
}

//Call this function before using this module
void MQ2::begin(void)
{
    pinMode(_pin,AN_INPUT);
}

//Read the AD value, get the smoke density
uint32_t MQ2::Read(void)
{
    return analogRead(_pin);
}
