#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,d,r,s=0,w,x,y,z,i=0;
    printf("Enter 4 numbers : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    a=abs(a);
    b=abs(b);
    c=abs(c);
    d=abs(d);
    while (i>=0)
    {
        if (i==a)
        {
            w=1;
        }
        else{
            w=0;
        }
        if (i==b)
        {
            x=1;
        }
        else{
            x=0;
        }
        if (i==c)
        {
            y=1;
        }
        else{
            y=0;
        }
        if (i==d)
        {
            z=1;
        }
        else{
            z=0;
        }
        i=i+2; 
        r=w+x+y+z;
        s=s+r;
    }
  
   printf("%d",s); 
}