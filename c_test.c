#include <stdio.h>
// ข้อที่ 8 จงเขียนโปรแกรมรับตัวเลข3ตัวแล้วหาตัวเลขที่มีค่าน้อยสุด
// วิธีที่ 1
int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b && a<c)
    {
        printf("%d",a);
    }
    else if (b<c && b<a)
    {
        printf("%d",b);
    }
    else if (c<a && c<b)
    {
        printf("Min :%d",c);
    }
    
    return 0;
}
