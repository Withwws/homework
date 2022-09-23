#include <stdio.h>
//วิธีที่2
void drawstar(int n)
{
    int j;
    if (n == 0)
    {
        return;
    }
    j=5-n;
    for (int i = 0; i >=n; i--)
    {
        printf("*");
       
    }
    printf("\n");
    drawstar(n - 1);
    
}
int main(){
    int n,i=0;
    printf("Enter numbers: ");
    scanf("%d",&n);
    drawstar(n);
}
