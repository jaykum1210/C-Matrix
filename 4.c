#include <stdio.h>
#include <string.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    char b[a][100];
    printf("Enter string = ");
    for (int i = 0; i < a; i++)
    {
        scanf("%s",b[i]);
    }
    char temp[100];
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a-i-1; j++)
        {
            if (b[j][0]>b[j+1][0])
            {
                strcpy(temp,b[j]);
                strcpy(b[j],b[j+1]);
                strcpy(b[j+1],temp);
            }
        }
    }
    printf("String = ");
    for (int i = 0; i < a; i++)
    {
        printf("%s ",b[i]);
    }
    return 0;
}