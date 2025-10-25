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
    int max=count2,found = 0;
    if (count1>count2)
    {
        max = count1;
    }
    for (int i = 0; i < max; i++)
    {
        if (a[i]>b[i])
        {
            found=1;
            printf("%s",a);
            break;
        }
        else if (a[i]<b[i])
        {
            found=1;
            printf("%s",b);
            break;
        }
    }
    if (found==0)
    {
        printf("Both are same");
    }
    
    return 0;
}