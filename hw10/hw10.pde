jhg [] aa;
kirby bb;
void setup(){
  size(600,400);
  aa = new jhg[3];
  aa[0] = new jhg(200, 300);
  aa[1] = new jhg(300, 200);
  aa[2] = new jhg(100,100);
  bb = new kirby(400, 150);
}

void draw(){
  background(0,255,255);
  for (int i=0; i<3; i++){
    aa[i].move(); aa[i].display();
  }
  bb.move(); bb.display();
  for (int i=0; i<3; i++){
    if((abs(aa[i].x-bb.x)<(38*bb.d)) && (abs(aa[i].y-bb.y)<(38*bb.d))){
      aa[i].vx = - aa[i].vx;
      aa[i].vy = - aa[i].vy;
      bb.vx = - bb.vx;
      bb.vy = - bb.vy;
      }
    }
}
