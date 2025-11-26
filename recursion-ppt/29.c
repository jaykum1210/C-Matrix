#include <stdio.h>

int rec(int a){
    if (a==0)
    {
        return 1;
    }
    else if (a==1)
    {
        return 1;
    }
    return rec(a-1) + rec(a-2);
}

int main(){
    int a;
    printf("Enter stairs = ");
    scanf("%d",&a);
    int num = rec(a);
    printf("Number of steps = %d\n",num);
    return 0;
}