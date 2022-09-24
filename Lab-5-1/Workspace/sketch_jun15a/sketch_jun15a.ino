#include <popx2.h>	// POP-X2 Board
void setup() {
  OK();
}

void loop() {
  fd2(50, 90);
  sw_OK_press();
  ao();//STOP
  OK();
}
