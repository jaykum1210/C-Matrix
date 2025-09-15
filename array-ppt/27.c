#include <stdio.h>

int main(){
    int a,tar;
    printf("Enter number = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter Index = ");
    scanf("%d",&tar);
    printf("Element at index %d = %d\n",tar,b[tar]);
    return 0;
}