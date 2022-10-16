
#define BLYNK_TEMPLATE_ID "TMPLRc95_y0F"
#define BLYNK_DEVICE_NAME "ESP32 Drip Control"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial

#define APP_DEBUG

#include "BlynkEdgent.h"

BLYNK_WRITE(V0){
    int pinValue = param.asInt(); //assigns incoming value of V0 from server to var
    digitalWrite(13, pinValue);
  
  
  }

BLYNK_CONNECTED(){
Blynk.syncAll();
}
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(115200);
  delay(100);
  BlynkEdgent.begin();
  
}

void loop() {
  BlynkEdgent.run();
}
