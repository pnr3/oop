class jhg extends Cha{
  jhg(float xx, float yy) {
    super(xx, yy);
  }
void display() {
  fill(255, 255, 255);
  stroke(0, 240, 255);
  arc(x, y, d*24, d*35, PI, 2*PI);
  fill(0);
  stroke(0);
  arc(x-5*d, y-9*d, d*2, d*5, PI, 4*PI);
  fill(0);
  stroke(0);
  arc(x+5*d, y-9*d, d*2, d*5, PI, 4*PI);
  fill(0, 240, 255);
  stroke(0, 240, 255);
  arc(x-9*d, y+1, d*6, d*4, PI, 2*PI);
  fill(0, 240, 255);
  stroke(0, 240, 255);
  arc(x-3*d, y+1, d*6, d*4, PI, 2*PI);
  fill(0, 240, 255);
  stroke(0, 240, 255);
  arc(x+3*d, y+1, d*6, d*4, PI, 2*PI);
  fill(0, 240, 255);
  stroke(0, 240, 255);
  arc(x+9*d, y+1, d*6, d*4, PI, 2*PI);
}
  }
