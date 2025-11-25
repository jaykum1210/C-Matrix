#include <stdio.h>

int list(int b[], int len,int val){
    int num;
    for (int i = 0; i < len; i++)
    {
        int found = 0;
        if (b[i]==val)
        {
            for (int j = i; j < len-1; j++)
            {
                b[j] = b[j+1];
            }
            len--;
            i--;
        }
    }
    return len;
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
    int num = list(b,a,val);
    printf("List = ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}