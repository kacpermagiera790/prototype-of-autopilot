# prototype-of-autopilot
An prototype of an autopilot (for airplanes) its an procedural C++ code but with funtions and security system.

bool engineOn = false;
bool SetButton = true;
bool StartAutoPilote = false
// musi czytac zyroskop oraz polozenie samolotu
float gyroX = 0.0f
float gyroZ = 0.0f
float gyroY = 0.0f
bool checkHorizontal = true;
bool checkVertical = true;
 
  void scan()
 if(StartAutoPilote)
 {
    SetButton = readButton();
     gyroX  = readGyroX();
     gyroZ = readGyroZ();
     gyroY = readGyro();

     checkHorizontal = (gyroZ > 0.55f)
    checkVertical = (gyroX < 0.45f)


 }wsw

 //security system
 bool readHands = false;
 bool safetySound = false;
 bool StopAutoPilote = false;
 bool readHandsSensor = false;
 

 
  void security()
 {
   readHands = readHandsSensor;
 
   if(StopAutoPilote)
   {
      safetySound = true;
      StartAutoPilote = false;

   }
}
