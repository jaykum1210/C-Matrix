#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    int found = 1;
    if (a[b-1]=='\n')
    {
        a[b-1]='\0';
        b--;
    }
    
    for (int i = 0; i < b/2; i++)
    {
        if (a[i]!=a[b-i-1])
        {
            printf("Not a Palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}