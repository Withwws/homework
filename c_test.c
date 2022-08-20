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
        printf("%d",c);
    }
    
    return 0;
}
//วิธีที่ 2
int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    int num[] = {a,b,c};
    int n = sizeof(num);
    int min = num[0];
    for (int i = 1; i < n; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }
    printf("Min: %d\n", min);
}