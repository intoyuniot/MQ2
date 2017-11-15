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
#ifndef MQ2_H_
#define MQ2_H_

#include "Arduino.h"


class MQ2
{
    public:
        MQ2(uint16_t pin);
        void begin(void);
        uint32_t Read(void);

    private:
        uint16_t _pin;
};


#endif
