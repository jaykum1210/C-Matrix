#include <stdio.h>

void asc(int b[], int a){
    if (a==1)
    {
        return;
    }
    for (int i = 0; i < a-1; i++)
    {
        if (b[i]>b[i+1])
        {
            int temp = b[i];
            b[i] = b[i+1];
            b[i+1] = temp;
        }
        
    }
    
    asc(b,a-1);
}

int main(){
    int a;
    printf("Enter size = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter %d  elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
    }
    asc(b,a);
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}