#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    char *arr[len];
    for (int i = 0; i < len; i++)
    {
        arr[i] = &a[i];
    }
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (*arr[i]=='a' || *arr[i]=='e' ||*arr[i]=='i' ||*arr[i]=='o' ||*arr[i]=='u' ||*arr[i]=='A' ||*arr[i]=='E' ||*arr[i]=='I' ||*arr[i]=='O' ||*arr[i]=='U')
        {
            count++;
        }
    }
    printf("Number of vowels = %d\n",count);
    return 0;
}