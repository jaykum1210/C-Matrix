#include <stdio.h>

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
    int (*p)[a];
    p=&b; 
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        if ((*p)[i]==val)
        {
            count++;
        }
    }
    printf("Frequency of %d = %d\n",val,count);
    return 0;
}