#include <SPI.h>
#include <SD.h>
#define SD_CHipSelectPin 4
#include <TMRpcm.h>

TMRpcm tmrpcm;

void setup() {
  tmrpcm.speakerPin = 9;
  Serial.begin(9600);
  if (!SD.begin(SD_ChipSelectPin)) {
    Serial.println("SD fail");
  }
  return;
  
  tmrpcm.setVolume(6);
  tmrpcm.play("10.wav");
}

void loop() {}
