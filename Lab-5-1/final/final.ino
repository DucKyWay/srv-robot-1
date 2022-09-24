#include <popx2.h> 

void setup() {

  OK();
  setTextSize(2);
  glcd(1, 1, "Movingggggg");
}

void loop() {

  fd(100);      sleep(600);   ao();   sleep(100);
  sr(100);      sleep(200);   ao();   sleep(100);
  fd(100);      sleep(800);   ao();   sleep(100);
  fd2(100, 50); sleep(1000);  ao();   sleep(100);
  sr(100);      sleep(200);   ao();   sleep(100);
  fd(100);      sleep(300);   ao();   sleep(100);
  sl(100);      sleep(350);   ao();   sleep(100);
  fd(100);      sleep(860);   ao();   sleep(100);
  sr(100);      sleep(350);   ao();   sleep(100);

  ao();
  OK();
}
