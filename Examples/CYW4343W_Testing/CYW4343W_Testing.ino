// CYW4343W Testing.ino

#include <SD.h>

SDClass sd_io2;

void setup() {
  
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
   while (!Serial) {
    ; // wait for serial port to connect.
  }

  pinMode(33,OUTPUT);  // WL_ON: Pull high to activate wlan (wl_reg_on).

  pinMode(34,OUTPUT);  // SPI usage: pull D2 low before pulling
                       // WL_ON high.
  // Did not get SPI working at all. Maybe did not have it wired right!!
}

void loop()
{
  waitforInput();

  Serial.print("\n\nCYW4343W Testing...");
//  if (!SD.sdfs.begin(SdioConfig(FIFO_SDIO | USE_SDIO2))) { // USe SDIO2
  if(!sd_io2.sdfs.begin(SdioConfig(FIFO_SDIO | USE_SDIO2))) {
  Serial.println("initialization failed! ");
  } else {
  Serial.println("initialization done.");
 }

}

void waitforInput()
{
  Serial.println("Press anykey to continue");
  while (Serial.read() == -1) ;
  while (Serial.read() != -1) ;
}
