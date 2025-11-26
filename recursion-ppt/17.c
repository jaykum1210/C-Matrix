#include <stdio.h>

int rec(int b[], int a, int val){
    static int num = 0;
    if (a==-1)
    {
        return -1;
    }
    if (b[a]==val)
    {
        return a;
    }
    return rec(b,a-1,val);
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
    int val;
    printf("Enter value = ");
    scanf("%d",&val);
    int num = rec(b,a-1,val);
    if (num==-1)
    {
        printf("Not found\n");
    }
    else{
        printf("Index of %d = %d\n",val,num);
    }
    return 0;
}