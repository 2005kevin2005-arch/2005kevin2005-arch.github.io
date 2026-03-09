//week03-2好玩的程式設計
//Ctrl-N開新視窗
void setup(){//設定的函式
  size(400, 300);//視窗大小
}
void draw(){//畫圖的函式
//今天主題if(判斷)如果mouse按下去,就用紫色
if(mousePressed)background(255, 128, 255);
else background(0, 255, 0);//否則,就綠色
}
