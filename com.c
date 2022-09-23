#include <stdio.h>

int main ()
{
    int a=0,i=3;
    while (i<34)
    {
        printf("%d",i);
        if (i<33)
        {
            printf(" + ");
        }
        else
        {
            printf(" = ");
        }            
        a = a+i;
        i= i+3;
        
        
    }
    printf("%d",a);
}
//egw3ferfqgfq3f13f