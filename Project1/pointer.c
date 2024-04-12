#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a; // 포인터 변수 p가 a의 값인 10을 가리킴.

    // *p = 20;

    printf("%d", *p);
    //printf("%d", a);


}