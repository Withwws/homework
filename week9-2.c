#include <stdio.h>
#include <string.h>
//วิธีที่2

int main ()
{
    int a=0,b=0,j=0,k=0;
    char word[100];
    char up[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char low[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    scanf("%s",word);
       for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            up[j]=word[i];
            j++;
        }
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            low[k]=word[i];
            k++;
        }
    }
    printf("%s\n",word);
    printf("uppercase :%d\nlowercase :%d",strlen(up),strlen(low));   
}