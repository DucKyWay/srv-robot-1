#include <popx2.h>	// POP-X2 Board

int L, R;

void setup() {
  OK();
  setTextSize(2);
  glcd(1, 1, "Ngaw");
}

void loop() {
  fd2(0,100);
  sleep(1750);
  fd2(50, 50);
  sleep(1750);
  fd2(0, 50);
  sleep(1000);
  fd2(75, 50);
  sleep(2000);
  ao();
  OK();
}
