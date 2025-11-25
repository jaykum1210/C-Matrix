#include <stdio.h>

int ind(int b[], int len, int val){
    for (int i = 0; i < len; i++)
    {
        if (b[i]==val)
        {
            return i;
        }
    }
    return -1;
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
    int num = ind(b,a,val);
    if (num==-1)
    {
        printf("Not found\n");
        return 0;
    }
    printf("Index of %d = %d\n",val,num);
    return 0;
}