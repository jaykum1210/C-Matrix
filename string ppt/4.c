#include <stdio.h>

int main(){
    char a[100],b[100];
    printf("Enter 1st string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter 2nd string = ");
    fgets(b,sizeof(b),stdin);
    int count1=0,count2=0;
    while (a[count1]!='\n' && a[count1]!='\0')
    {
        count1++;
    }
    while (b[count2]!='\n' && b[count2]!='\0')
    {
        count2++;
    }
    int d = count1+count2;
    char c[d+1];
    for (int i = 0; i < d; i++)
    {
        if (i<count1)
        {
            c[i]=a[i];
        }
        else{
            c[i]=b[i-count1];
        }
    }
    c[d]='\0';
    printf("String = %s",c);
    return 0;
}