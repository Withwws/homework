#include <stdio.h>
#include <string.h>
//วิธีที่ 2
int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    int num[] = {a,b,c};
    int n = sizeof(num)/ sizeof(num[0]);
    int min = num[0];
    for (int i = 1; i < 3; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }
    printf("Min: %d", min);
    return 0;
}