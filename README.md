# PlatformIO / Sonoff / Blink

Small sample that shows how to setup and program a basic Sonoff-Device

<p align="center">
    <img src="https://raw.githubusercontent.com/MikeMitterer/cpp-sonoff/master/doc/images/sonoff.jpg" alt="Sonoff" />
</p>

You can go into programming-mode by:

   - Turn off VCC
   - Hold Sonoff-Button
   - Turn back on VCC
   - Release Sonoff-Button
   
## What I figured out
   
In my case uploading the firmware to the device worked fine but the LED did not start blinking.

I had to switch the `board_flash_mode` to **dout**! (`platformio.ini`)     
   
### License 

    Copyright 2017 Michael Mitterer (office@mikemitterer.at),
    IT-Consulting and Development Limited, Austrian Branch

       _____                    __  __ 
      / ____|                  / _|/ _|
     | (___   ___  _ __   ___ | |_| |_ 
      \___ \ / _ \| '_ \ / _ \|  _|  _|
      ____) | (_) | | | | (_) | | | |  
     |_____/ \___/|_| |_|\___/|_| |_|  
                                                            
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing,
    software distributed under the License is distributed on an
    "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
    either express or implied. See the License for the specific language
    governing permissions and limitations under the License.


If this plugin is helpful for you - please [(Circle)](http://gplus.mikemitterer.at/) me
or **star** this repo here on GitHub