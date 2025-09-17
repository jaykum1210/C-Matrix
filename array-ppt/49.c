#include <stdio.h>

int main(){
    int a;
    printf("Enter number of element = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d element = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int mid = a/2+1;
    int found = 1;
    for (int i = 0; i < mid; i++)
    {
        if (b[i]!=b[a-i-1])
        {
            found = 0;
        }
    }
    if (found == 1)
    {
        printf("Palindrome\n");
    }
    else{
        printf("Not a Palindrome\n");
    }
    return 0;
}