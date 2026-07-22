//aerospace (autopilot)
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

     checkHorizontal = (gyroZ > 0.5f)
    checkVertical = (gyroX < 0.2f)


 }wsw

 