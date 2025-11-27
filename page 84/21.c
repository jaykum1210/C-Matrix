#include <stdio.h>

int rec(int b[], int a,int len){
    if (a==-1)
    {
        return len;
    }
    if (b[a]>len)
    {
        len = b[a];
    }
    rec(b,a-1,len);
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
    int len = 0;
    int num = rec(b,a-1,len);
    printf("Largest number = %d\n",num);
    return 0;
}