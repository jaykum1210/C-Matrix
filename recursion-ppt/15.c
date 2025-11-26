#include <stdio.h>

int count(int b[], int a, int val){
    static int num = 0;
    if (a==-1)
    {
        return num;
    }
    if (val==b[a])
    {
        num++;
    }
    return (b,a-1,val);
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
    int num = count(b,a,val);
    printf("Number of %d = %d\n",val,num);
    return 0;
}