#include <stdio.h>
#include <string.h>

int main(){
    char a[50],c[50];
    printf("Enter string = ");
    scanf("%s",a);
    int flag = 1;
    int b = strlen(a);
    for (int i = 0; i < b; i++)
    {
        c[i] = a[b-i-1];
    }
    c[b] = '\0';
    for (int i = 0; i < b; i++)
    {
        if (a[i] != c[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not a Palindrome\n");
    }
    return 0;
}