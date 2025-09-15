#include <stdio.h>

int main(){
    int a,tar,found = 0,index;
    printf("Enter number of element = ");
    scanf("%d",&a);
    int b[a];
    printf("Enter the number want to search = ");
    scanf("%d",&tar);
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b[i]);
        if (tar == b[i])
        {
            found = 1;
            index = i;
            break;
        }
    }
    if (found ==1)
    {
        printf("%d is present at index %d\n",tar,index);
    }
    else{
        printf("%d is not present\n",tar);
    }
    return 0;
}