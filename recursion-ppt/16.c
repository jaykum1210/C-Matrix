#include <stdio.h>

int asd(int b[], int a){
    if (a==0)
    {
        return 1;
    }
    if (b[a]<b[a-1])
    {
        return 0;
    }
    return asd(b,a-1);
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
    int num = asd(b,a-1);
    if (num==1)
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}