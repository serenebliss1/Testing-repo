void setup() {
    Serial.begin(9600);
    while (!Serial) {
      ;  // wait for serial port to connect. Needed for native USB port only
    }
  
    Serial.println("ASCII Table!!!!!!!!!!!!!1");
  }
  
  // first visible ASCIIcharacter '!' is number 33:
  int thisByte = 33;

  
  void loop() {

    Serial.write(thisByte);
  
    Serial.print(", dec: ");
    // prints value as string as an ASCII-encoded decimal (base 10).

    Serial.print(thisByte);
    Serial.print(thisByte, DEC);
  
  
    Serial.print(", hex: ");
    // prints value as string in hexadecimal (base 16):
    Serial.print(thisByte, HEX);
  
    Serial.print(", oct: ");
    // prints value as string in octal (base 8);
    Serial.print(thisByte, OCT);
  
    Serial.print(", bin: ");
    // prints value as string in binary (base 2) also prints ending line break:
    Serial.println(thisByte, BIN);
  

    if (thisByte == 126) {  // you could also use if (thisByte == '~') {
      while (true) 
      {
        continue;
      }
    }

    thisByte++;
  }
  