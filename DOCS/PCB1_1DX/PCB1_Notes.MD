1DX uses the CYW4343W :: Same as in Arduino GIGA


while 1YN uses CYW43439 > This is the other chip on hand for the post GIGA recommended chip

NXP SDK Sources have these 5 'chips' called out for function
#if defined(SD8978) || defined(SD8987) || defined(SD8801)
#if !defined(SD8801)
#ifndef RW610

Need to find one that is closest workalike to the 1DX

Murata NXP i.MX Eval Platforms

https://www.mouser.com/new/murata/ea-nxp-wifi-bluetooth-i-mx/

There is a evkmimxrt1060_wiced_ble_4343W demo in RT1060 SDK2.7.0. The demo configures the wifi driver to use STA mode and
advertises via BLE. Please take a look.

https://www.embeddedartists.com/wp-content/uploads/2019/01/Getting-Started-with-M2-modules-and-iMX-RT.pdf

iMX RT1062 
Note that as of January 2020 the NXP SDK (2.7.0) includes Wi-Fi support for the 1DX and 1LV M.2 
modules and Bluetooth support only for the 1DX M.2 module. Additional Bluetooth support is 
scheduled for a coming release as well as support for the 1MW and 1LV M.2 modules. Exact 
release date is TBD. 

KurtE documents and details on T_4.x, T_MM and SDRAM DevBoards

https://github.com/KurtE/TeensyDocuments
