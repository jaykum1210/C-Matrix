#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j<b-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                char temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("String = %s\n",a);
    return 0;
}