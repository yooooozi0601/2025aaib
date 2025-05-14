//week13-5
//播放音樂
//找sound下載sound的函式 點install
//播放音樂
import processing.sound.*;
SoundFile mySound;
void setup(){
  size(400,400);
  mySound= new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();
}
void draw(){
  
}
