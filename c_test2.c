#include <stdio.h>
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
    printf("Min: %d", min);
}