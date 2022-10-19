#include <stdio.h>
#include <string.h>
//จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3)
//วิธีที่ 1 
int main()
{
    char    str[100];

    scanf("%s", str);
    for (int i = strlen(str) - 1;i >= 0;i--)
        printf("%c",str[i]);
    printf("\n");
}
