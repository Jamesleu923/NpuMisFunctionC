// CTest001.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define pi 3.14159265359
//回傳值型態不同,無傳入值的函式 樣態
void countsum01(void) {

}
int  countsum02(void) {

    return pi;
}
double  countsum03(void) {
    double r = 3;  //半徑為3
    return  pi *r*r;
}
//}
//回傳值型態不同,有傳入值的函式 樣態
void countsum04(int a) {
    //假設a為圓的半徑
    //本函式求圓的直徑
    printf("countsum04 你的圓半徑為%d,直徑為%d\n", a, 2*a);
}
int  countsum05(float b) {

    return 2*b;
}
double  countsum06(float a, int b, char k) {
    // 回傳a-b
    printf("字元為%c\n", k);
    double c = (double)a - (double)b;
    return c;
}
double countsum07(double m, double n) {
    return m + n;
}

//傳入指標..
double cuntsum08(double* ptr1, double* ptr2, int k) {

    return 0.14;
}
int main()
{

    //叫用第一個
    countsum01();
    //叫用第二個 ,無傳入值,有回傳值,回傳值型別為整數(int)
    int rtnValue = countsum02();
    printf("叫用countsum02() 回傳pi, %d\n", rtnValue );
    //叫用第3個 ,無傳入值,有回傳值,回傳值型別為倍精確數 (double)
    double rtnValue3 = countsum03();
    printf("叫用countsum03() r=3 回傳圓面積, %.4f\n", rtnValue3);
    //叫用第4個 ,有傳入值(int),沒有回傳值
    countsum04(3);
    //叫用第5個 ,有傳入值(float),回傳值(int)
   int rtnValue5=countsum05(pi);
   printf("叫用countsum05(PI)  回傳PI*2,整數, %d\n", rtnValue5);
   //叫用第6個 ,有傳入值(float,int ,char),回傳值(double)
   double rtnValue6 = countsum06(pi, 5, 'H');
   printf("叫用countsum06(pi, 5, 'H')  回傳, %.4f\n", rtnValue6);
    //叫用第7個,回傳a+b
    double a = 5, b = 7;
    double c = countsum07(a, b);
    printf("\n叫用最後一個 C is %.4f\n", c);
    return 0;
}
