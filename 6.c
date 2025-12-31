#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter two string = ");
    scanf("%s%s",&a,&b);
    char temp[100];
    strcpy(temp,a);
    printf("Copied: %s\n",temp);
    if ((strcmp(a,b)!=0))
    {
        printf("Comparison: Not Equale\n");
    }
    else{
        printf("Comparison: Equale\n");
    }
    strcat(a,b);
    printf("Concatenated: %s\n",a);
    return 0;
}