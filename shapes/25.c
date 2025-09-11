#include <stdio.h>

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {   
        int b = 0, c =1;
        int sum = 0;
        for(int j = 1;j<=i;j++){
            printf("%d ",sum);
            sum = b+c;
            b = c;
            c = sum;
        }
        printf("\n");
    }
    return 0;
}