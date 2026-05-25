///week14-2.cpp  了解函式函數function
#include <stdio.h>

int f1(int x, int y)
{
    printf("F1()函式吃到參數 x:%d y:%d\n", x, y);
    x = x + 10; ///在函式裡,加10
    printf("F1()函式修改參數 x:%d y:%d\n", x, y);
}

int main()///定義main() 函式 (函式的定義)
{
    printf("Hello World");///函式的呼叫
    int x = 100, y =200;
    printf("main()函式裡, 原本 x:%d y:%d\n", x, y);
    f1(x, y); ///呼叫 fi()函式, 裡面動的, 跟外面沒關系
    printf("main()函式裡, 現在 x:%d y:%d\n", x, y);
    return 0; ///以前沒寫, 但是應該要寫。main()會幫你加
}
