#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count = 0,num=0;
    while (a[count]!='\n' && a[count]!='\0')
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (!((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9')))
        {
            num++;
        }
    }
    printf("Special Character = %d\n",num);
    return 0;
}