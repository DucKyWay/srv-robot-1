#include <popx2.h>	// POP-X2 Board
void setup() {
  /** OK;
  setTextSize(2);
  glcdClear();
  glcd(1, 1, "Eddy");
  glcd(2, 1, "Ngaw"); **/

  OK;
  setTextSize(2);
  glcd(1, 1, "Moving...");
  glcd(2, 1, "");
  glcd(1, 1, "");
  fd(60);
  while(
    analog(1)<500
  );
  glcd(1, 1, "Stop  ");
  ao();
}

void loop() {
  
}
