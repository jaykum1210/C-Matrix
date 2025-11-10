#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    int c=0,sum=0;
    for (int i = 0; i < b; i++)
    {
        if (a[i]>=48 && a[i]<=57)
        {
            sum = sum*10 + (a[i]-48);
        }
        
    }
    printf("Number = %d\n",sum);
    return 0;
}