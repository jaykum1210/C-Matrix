#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a],c[a];
    printf("Enetr %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
        c[i] = b[i];
    }
    int found = 0;
    for (int i = 0; i < a/2; i++)
    {
        int temp = c[i];
        c[i] = c[a-i-1];
        c[a-i-1] = temp;
    }
    for (int i = 0; i < a; i++)
    {
        if (b[i]!=c[i])
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("Not a palindrome\n");
    }
    else{
        printf("Palindrome\n");
    }
    return 0;
}