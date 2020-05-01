/*
 *  Auther: Abdullah Faraedoon
 *  https://www.facebook.com/abdullahfaraedoon
 */
#define MODEL_NUMBER "D58X9Y"

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(SerialNumber());
}


String SerialNumber() {
  String tmp = MODEL_NUMBER;
  tmp += __DATE__;
  tmp += __TIME__;
  tmp.replace(" ", "");
  tmp.replace(":", "");
  tmp.toUpperCase();
  tmp.trim();
  return tmp;
}
