#include <popx2.h>	// POP-X2 Board

int L, R;
void setup() {
  OK();
  setTextSize(2);
  glcdClear();
  glcd(1, 1, "Eddy");
}

void loop() {

  fd(50);
  L = analog(1);
  R = analog(2);
  glcd(2,1,"L=%d",analog(1));
  glcd(3,1,"R=%d",analog(2));

  if(L<600 || R<600) {
    bk(50);
    sound(1000, 100);
    sleep(500);
    sr(50);
    sleep(300);
  }
}
