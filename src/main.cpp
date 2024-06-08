#include <Arduino.h>
#include "nvs_data_handle.h"

global_Parameter global_Para;
void setup()
{
//eraserData();
global_Para.reqUserKey="填写自己的心知密钥";

savemyData(global_Para);
global_Para.reqUserKey="";


readlastdata(&global_Para);
Serial.println("Key:");
Serial.println(global_Para.reqUserKey);
}
void loop()
{
Serial.println("Key:");
Serial.println(global_Para.reqUserKey);
}