#include <stdio.h>

int last(int a[],int len){
    return a[len-1];
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    int c = last(b,a);
    printf("Last element = %d\n",c);
    return 0;
}