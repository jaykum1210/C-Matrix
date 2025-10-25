#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    int c=0,d=0;
    for (int i = 0; i < b; i++)
    {
        if (a[i]>='a'&& a[i]<='z')
        {
            c++;
        }
        else if (a[i]>='A' && a[i]<='Z')
        {
            d++;
        }
    }
    printf("Upper = %d\n",d);
    printf("Lower = %d\n",c);
    return 0;
}