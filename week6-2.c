#include <stdio.h>
//วิธีที่2
void drawstar(int n)
{
    if (n == 0)
    {
        return;
    };
    printf("* ");  
    drawstar(n - 1);
}
int main(){
    int n,a;
    printf("Enter numbers: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        drawstar(n);
        printf("\n");
    }
}
//check git