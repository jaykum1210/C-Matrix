#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count=0;
    while (a[count]!='\0' && a[count]!='\n')
    {
        count++;
    }
    int val=0;
    for (int i = 0; i < count; i++)
    {
        if (!((a[i]>='0'&&a[i]<='9')|| (a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z')))
        {
            val++;
        }
    }
    printf("Number of special characters = %d\n",val);
    return 0;
}