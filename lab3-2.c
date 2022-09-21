#include <stdio.h>
//วิธีที่ 2
int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    int num[] = {a,b,c};
    int n = sizeof(int);
    int max = num[0];
    for (int i = 1; i < n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    printf("Max: %d", max);
}