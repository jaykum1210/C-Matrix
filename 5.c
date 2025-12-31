#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count =0;
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    int newlen = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
            count++;
        }
        else{
            a[newlen++] = a[i];
        }
    }
    a[newlen] = '\0';
    printf("Number of vowels: %d\n",count);
    printf("String after removing vowels: %s",a);
    return 0;
}