String incoming;

void setup()
{
  Serial.begin(115200);
}

void loop()
{ 

  while(Serial.available()){
  incoming = Serial.readString();
  Serial.println(incoming);
}}
