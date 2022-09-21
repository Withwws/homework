#include <stdio.h>
//วิธีที่2
void drawstar(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("*");
    drawstar(n - 1);
}
int main(){
    int n,i=0;
    printf("Enter numbers: ");
    scanf("%d",&n);
    drawstar(n);
}
