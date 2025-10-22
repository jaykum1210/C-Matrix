#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count=0;
    while (a[count]!='\0' && a[count]!='\n')
    {
        count++;
    }
    int found = 0;
    for (int i = 0; i < count/2; i++)
    {
        if (a[i]!=a[count-i-1])
        {
            found=1;
            break;
        }
    }
    if (found!=1)
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not a Palindrome\n");
    }
    return 0;
}