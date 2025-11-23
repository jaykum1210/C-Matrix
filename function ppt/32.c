#include <stdio.h>

int uni(int b[], int a){
    int len = 0;
    for (int i = 0; i < a; i++)
    {
        int found = 0;
        for (int j = i-1; j >=0; j--)
        {
            if (b[i]==b[j])
            {
                found=1;
                break;
            }
        }
        if (found==0)
        {
            b[len++] = b[i];
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
    int len = uni(b,a);
    printf("List = ");
    for (int i = 0; i < len; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}