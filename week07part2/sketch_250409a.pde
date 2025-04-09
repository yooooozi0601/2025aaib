//week08-4 part2
void setup(){
  size(400, 400);//大小
}
int x, y, s;//氣球座標
void draw(){
  background(255);//白色背景
  ellipse(x,y-s/2,s*0.7,s);//瘦瘦氣球
  if(mousePressed) s++;
  else{//沒有壓者就會往上飄
    if(y>s+1) y-=2;
  }
}
void mousePressed(){//按下mouse改變位置大小
  x= mouseX;
  y= mouseY;
  s= 1;
}
