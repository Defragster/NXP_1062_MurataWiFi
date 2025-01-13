1DX uses the CYW4343W :: Same as in Arduino GIGA

https://www.murata.com/en-us/products/connectivitymodule/wi-fi-bluetooth/overview/lineup/type1dx

while 1YN uses CYW43439 > This is the other chip on hand for the post GIGA recommended chip

NXP SDK Sources have these 5 'chips' called out for function
#if defined(SD8978) || defined(SD8987) || defined(SD8801)
#if !defined(SD8801)
#ifndef RW610

Need to find one that is closest workalike to the 1DX

Murata NXP i.MX Eval Platforms

https://www.murata.com/products/connectivitymodule/wi-fi-bluetooth/overview/nxp-imx

https://community.murata.com/s/question/0D55F00009FlcXhSAJ/murata-wifibluetooth-for-imx-documentation-release-december-2024

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

From NXP Community - 'current' SDK has support for these OTHER WiFi chips:

   the following examples from the MCUXpresso 2.10.0 SDK for i.MX RT 1060 are supported by Murata modules Type 1XK, Type 1ZM and Type 2DS.
   evkmimxrt1060_wifi_cert: Provides CLI access to common and advanced Wi-Fi certification test operations.
   evkmimxrt1060_wifi_cli: Provides CLI access to common Wi-Fi operations, including throughput measurements.

So that doesn't include the above noted 'older' SDK 2.7.0 that has the 1DX : 2.7 and 2.8 SDK found and built

MCU-Link Debug Probe https://www.nxp.com/design/design-center/software/development-software/mcuxpresso-software-and-tools-/mcu-link-debug-probe:MCU-LINK


Wi-Fi®/Bluetooth®    The GIGA R1 WiFi comes with a Murata LBEE5KL1DX-883 radio module for Wi-Fi/Bluetooth® communication.

Wi-Fi® on the GIGA R1 WiFi is supported via the WiFi library. This library is included in the core, so it is automatically installed when installing the Board Package.

To use the Wi-Fi® features on this board, please refer to the GIGA R1 WiFi Network Examples guide.


Wi-Fi Host Driver (WHD) https://github.com/Infineon/wifi-host-driver 
