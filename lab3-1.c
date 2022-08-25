#include <stdio.h>
//จงเขียนโปรแกรมเพื่อรับตัวเลข 3 ตัว แล้วหาตัวเลขที่มีค่ามากที่สุด
//วิธีที่1
int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("%d",a);
    }
    else if (b>c && b>a)
    {
        printf("%d",b);
    }
    else if (c>a && c>b)
    {
        printf("Min :%d",c);
    }
    
    return 0;
}