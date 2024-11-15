#include <stdio.h>

int main() {
    int num = 10;         // 通常の整数変数
    int *ptr = &num;      // num を指し示すポインター

    printf("変数 num の値: %d\n", num);               // 変数の値
    printf("変数 num のアドレス: %p\n", (void*)&num); // 変数のアドレス（ポインター形式で表示）
    printf("ポインター ptr の値: %p\n", (void*)ptr);  // ポインターが指し示すアドレス
    printf("ポインター ptr が指し示す値: %d\n", *ptr); // ポインターを通じてアクセスした値
    printf("ポインター ptr のアドレス: %p\n", (void*)&ptr); // ポインター自体のアドレス

    return 0;
}