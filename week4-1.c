#include <stdio.h>
//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข4จำนวน แล้วหาว่ามีเลขคู่กี่จำนวน
int main(){
    int a,b,c,d,r;
    printf("Enter 4 numbers : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    a=a%2;
    b=b%2;
    c=c%2;
    d=d%2;
    r= a+b+c+d;
    if (r==0)
    {
        printf("4");
    }
    else if (r==1)
    {
        printf("3");
    }
    else if (r==2)
    {
        printf("2");
    }
    else if (r==3)
    {
        printf("1");
    }
    else if (r==4)
    {
        printf("0");
    }
}