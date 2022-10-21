#include <stdio.h>
#include <string.h>
//จงเขียนโปรแกรมเพื่อรับข้อความ 1 ข้อความแล้วให้โปรแกรมแสดงผลลัพธ์ว่ามีตัวอักษรตัวพิมพ์ใหญ่กี่ตัว ตัวพิมพ์เล็กกี่ตัว (Level 3)  

int main ()
{
    int a=0,b=0;
    char word[100];
    scanf("%s",word);
       for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            a++;
        }
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            b++;
        }
    }
    printf("%s\n",word);
    printf("%d\n%d",a,b);   
}