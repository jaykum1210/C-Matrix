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
    while (a[count2]!='\0' && a[count2]!='\n')
    {
        count2++;
    }
    int tar;
    printf("Enter position = ");
    scanf("%d",&tar);
    char c[200];
    for (int i = 0; i < count1+count2; i++)
    {
        if (i<tar)
        {
            c[i] = a[i];
        }
        else if (i>=tar && i<count2+tar)
        {
            c[i] = b[i-tar];
        }
        else{
            c[i] = a[i-tar-count2+1];
        }
    }
    c[count1+count2] = '\0';
    printf("String = %s",c);
    return 0;
}