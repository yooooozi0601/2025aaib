//week08-4
void setup(){
  size(400, 400);//大小
}
int []x= new int[100];
int []y= new int[100];
int []s= new int[100];
int N=0;
void draw(){
  background(255);//白色背景
  for(int i=0;i<N;i++){
    ellipse(x[i],y[i]-s[i]/2,s[i]*0.7,s[i]);
    if((mousePressed==false || i<N-1) && y[i]>s[i]+1) y[i] -=2;
  }
   if(mousePressed) s[N-1]++;
}
void mousePressed(){//按下mouse改變位置大小
  x[N]= mouseX;
  y[N]= mouseY;
  s[N]= 1;
  N++;
}
