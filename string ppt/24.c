#include <stdio.h>

int main(){
    char a[100],b[100];
    printf("Enter first string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter second string = ");
    fgets(b,sizeof(b),stdin);
    int count1=0,count2=0;
    while (a[count1]!='\0' && a[count1]!='\n')
    {
        count1++;
    }
    while (b[count2]!='\0' && b[count2]!='\n')
    {
        count2++;
    }
    int min = count1,found = 0;
    if (count2>count1)
    {
        min = count2;
    }
    for (int i = 0; i < min; i++)
    {
        if (a[i]>b[i])
        {
            found = 1;
            printf("%s",b);
            break;
        }
        else if (a[i]<b[i])
        {
            found=1;
            printf("%s",a);
            break;
        }
    }
    if (found = 0)
    {
        printf("Both are same\n");
    }
    return 0;
}