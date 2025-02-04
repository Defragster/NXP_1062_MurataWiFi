#include <SD.h>
#include <MTP_Teensy.h>

#define CS_SD BUILTIN_SDCARD  // Works on T_3.6 and T_4.1
//#define CS_SD 10  // Works on SPI with this CS pin

SDClass sd_io2;

void setup()
{
  // mandatory to begin the MTP session.
  MTP.begin();

  // Add SD Card
  SD.begin(CS_SD);
  MTP.addFilesystem(SD, "SD Card");

  sd_io2.sdfs.begin(SdioConfig(FIFO_SDIO | USE_SDIO2));
  MTP.addFilesystem(sd_io2, "2nd SDIO card");

}

void loop() {
  MTP.loop();  //This is mandatory to be placed in the loop code.
}
