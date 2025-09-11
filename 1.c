#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[50],sen[100];
    scanf(" %c",&ch);
    fgets(s, sizeof(s), stdin);
    fgets(sen, sizeof(sen), stdin);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    return 0;
}