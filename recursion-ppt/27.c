#include <stdio.h>

int cou(int a,int i){
    if (a==0)
    {
        return i;
    }
    if ((a%10)==0)
    {
        i++;
    }
    return cou(a/10,i);
}

int main(){
    int a;
    printf("Enter number = ");
    scanf("%d",&a);
    int i = 0;
    int num = cou(a,i);
    printf("Number of zero = %d\n",num);
}