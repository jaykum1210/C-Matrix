#include <stdio.h>

int first(int b[], int a){
    return b[0];
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
    int c = first(b,a);
    printf("First element = %d\n",c);
    return 0;
}