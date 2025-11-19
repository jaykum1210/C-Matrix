#include <stdio.h>

int main(){
    char a[100];
    printf("Enter String = ");
    fgets(a,sizeof(a),stdin);
    int count = 0;
    while (a[count]!='\n' && a[count]!='\0')
    {
        count++;
    }
    int num1=0,num2=0;
    for (int i = 0; i < count; i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            num1++;
        }
        else if (a[i]>='A' && a[i]<='Z')
        {
            num2++;
        }
    }
    printf("Number of Lowercase = %d\n",num1);
    printf("Number of Uppercase = %d\n",num2);
    return 0;
}