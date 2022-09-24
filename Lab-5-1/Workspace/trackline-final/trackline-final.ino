#include <popx2.h>
int L, R;
 
void setup() {
  OK();
  setTextSize(2);
  glcd(1, 1, "Moving...");
}
 
void loop() {
  fd(20);
  L = analog(0);
  R = analog(1);
  glcd(2, 1, "L=%d", L);
  glcd(3, 1, "R=%d", R);
 
  if (L<400){
    fd2(0,80);  sleep(0);
  }
  else if(R<400){
    fd2(80,0);  sleep(0);
  }
}
