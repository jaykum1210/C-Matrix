#include <stdio.h>

int sum(int a){
    int temp = 0;
    for (int i =1; i <=a; i++)
    {
        temp+=i;
    }
    return temp;
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int num = sum(a);
    printf("Sum = %d\n",num);
    return 0;
}