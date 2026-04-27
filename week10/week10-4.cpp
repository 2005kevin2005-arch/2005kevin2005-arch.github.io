/// week10-4.cpp 交換2瓶水
#include <stdio.h>
int main()
{
    int a =9, b=100; ///黑色的酒 vs . 100%白開水
    printf("a:%d b:%d\n", a, b);///印出來

    ///交換一下 兩瓶做交換
    int temp = a;///臨時拿個瓶子
    a = b;    ///有點押韻(頭尾押韻)
    b = temp;




    printf("a:%d b:%d\n", a, b);///印出來
}
