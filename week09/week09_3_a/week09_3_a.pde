// week09-3 好玩的程式設計(氣球會變大)
//修改自 week09-2 好玩的程式設計(互動氣球)
PImage img;// 選告變數(圖)
void setup(){//設定的函式(做1次)
  size(600, 500);//設定視窗大小
  img = loadImage("balloon.png");//讀入圖片
}

float x, y, s=0.01; //一開始的氣球比較小
void draw(){//畫圖的函示(每秒60次)
  background(#FFFFF2);//背景:淡黃色
  //image(img, mouseX, mouseY, 96, 132);//這裡的座標，有稍微改一下，讓手拿氣球下面綁起來的地方
  if(mousePressed){//如果mouse壓下去
  s = s * 1.02; //氣球變大
  image(img, mouseX-96/2*s, mouseY-132*s, 96*s, 132*s);
  }else s =0.1; //放開mouse時，氣球就會變小
}//座標，有稍微修改，讓手拿氣球下面綁的地方
