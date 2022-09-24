#include <popx2.h>  // POP-X2 Board
void setup() {
  OK();
  setTextSize(2);
  glcdClear();
  glcd(1, 1, "Peemai 2");
  glcd(2, 1, "Mean 11");
  glcd(3, 1, "Niji 30");
}

void loop() {
  fd(100);
  if(in(29) == 0) {
    sound(1000, 300);
    glcdFillScreen(GLCD_GREEN);
    bk(80);
    sleep(900);
    sr(80);
    sleep(300);
  }
  if(in(30) == 0) {
    sound(1000, 300);
    glcdFillScreen(GLCD_YELLOW);
    bk(80);
    sleep(500);
    sl(80);
    sleep(500);
  }
}
