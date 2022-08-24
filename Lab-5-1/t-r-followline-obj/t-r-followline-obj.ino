#include <popx2.h>  // POP-X2 Board

int R;
int L;
int LB;
int RB;
int ds = 250;
int dt = 500;

void setup() {

  OK();
  setTextSize(2);
  glcd(1, 1, "Movingggggg");
}

void loop() {

  L = analog(0);
  R = analog(1);

  glcd(2, 1, "R=%d", R);
  glcd(3, 1, "L=%d", L);

  fd(30);
  
  if (in(29) == 0) {
    ao();     sleep(100);
    bk(50);   sleep(100);
    ao();     sleep(500);
    sl(75);   sleep(ds);
    ao();     sleep(500);
    fd(75);   sleep(dt);
    ao();     sleep(500);
    sr(75);   sleep(ds);
    ao();     sleep(500);
    fd(100);  sleep(dt);
    ao();     sleep(500);
    sr(75);   sleep(ds);
    ao();     sleep(500);
    fd(75);   sleep(600);
    ao();     sleep(500);
    sl(75);   sleep(200);
  }
  else if (in(30) == 0) {
    ao();     sleep(100);
    bk(50);   sleep(100);
    ao();     sleep(500);
    sr(75);   sleep(ds);
    ao();     sleep(750);
    fd(75);   sleep(dt);
    ao();     sleep(750);
    sl(75);   sleep(ds);
    ao();     sleep(750);
    fd(100);  sleep(dt);
    ao();     sleep(750);
    sl(75);   sleep(ds);
    ao();     sleep(750);
    fd(75);   sleep(600);
    ao();     sleep(750);
    sr(75);   sleep(200);
  }
  else if (R <= 400) {
    sl(30);   sleep(0);
  }
  else if (L <= 400) {
    sr(30);   sleep(0);
  }


}