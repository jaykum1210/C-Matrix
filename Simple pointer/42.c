#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    printf("Enter String = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    char *p = a;
    char *p1 = &a[len-1];
    while (p<p1)
    {
        if ((*p)!=(*p1))
        {
            printf("Not a Palindrome\n");
            return 0;
        }
        p++;
        p1--;
    }
    printf("Palindrome\n");
    return 0;
}