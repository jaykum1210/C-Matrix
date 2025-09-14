#include <stdio.h>

int main(){
    int a,tar,found = 0;;
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
        }
    }
    if (found ==1)
    {
        printf("%d is present\n",tar);
    }
    else{
        printf("%d is not present\n",tar);
    }
    return 0;
}