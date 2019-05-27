#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

const char* ssid = "unknown";
const char* password = "1234hahb";


const int udpPort = 3333;

char incomingPacket[255];
WiFiUDP udp;
void setup(){

Serial.begin(115200);
Serial.println();
Serial.printf("Connecting to %s ", ssid);

WiFi.begin(ssid, password);
while (WiFi.status() != WL_CONNECTED) { 
delay(500);
Serial.print(".");
}
Serial.println(" connected"); 
udp.begin(udpPort);
Serial.printf("Listening at %s:&s", WiFi.localIP().toString().c_str(),udpPort);
}

void loop(){
int packetSize = udp.parsePacket();
if (packetSize)
{
  //Serial.printf("Received %d bytes from %s, port %d\n", packetSize, Udp.remoteIP().toString().c_str(), Udp.remotePort());
  int len = udp.read(incomingPacket, 255);  
  if (len > 0)
  {
    incomingPacket[len] = 0;
  }
  Serial.println(incomingPacket);

  //(...)
}
}
