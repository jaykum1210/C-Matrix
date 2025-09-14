#include <stdio.h>

int main(){
    int n,a;
    printf("Enter number of elements = ");
    scanf("%d",&n);
    int b[n];
    printf("Enter %d elements = ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter number you want to search = ");
    scanf("%d",&a);
    for (int i = 0; i < n; i++)
    {
        if (b[i]==a)
        {
            printf("%d is present at position %d",a,i+1);
            break;
        }
    }
    return 0;
}