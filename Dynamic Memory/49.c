#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char a[100],b[100];
    printf("Enter string 1 = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter string 2 = ");
    fgets(b,sizeof(b),stdin);
    int len1 = strlen(a);
    int len2 = strlen(b);
    if (a[len1-1]=='\n')
    {
        a[len1-1]='\0';
        len1--;
    }
    if (b[len2-1]=='\n')
    {
        b[len2-1]='\0';
        len2--;
    }
    char *p1 = (char *)malloc((len1+1)*sizeof(char));
    char *p2 = (char *)malloc((len2+1)*sizeof(char));
    if (p1==NULL || p2==NULL)
    {
        printf("Memory Allocation Failed\n");
        return 0;
    }
    strcpy(p1,a);
    strcpy(p2,b);
    p1 = (char *)realloc(p1,(len1+len2+1)*sizeof(char));
    if (p1==NULL)
    {
        printf("Memory Reallocation Failed\n");
        return 0;
    }
    for (int i = 0; i < len2; i++)
    {
        p1[i+len1] = p2[i];
    }
    p1[len1+len2] = '\0';
    printf("String = %s\n",p1);
    free(p1);
    free(p2);
    return 0;
}