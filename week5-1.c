#include <stdio.h>
//ข้อ 20 จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นจำนวนเท่ากับตัวเลขที่รับเข้ามา
//วิธีที่ 1
int main(){
    int n,i;
    printf("Enter numbers: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    return 0;
}