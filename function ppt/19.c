#include <stdio.h>
#include <string.h>

int num(char a[],int len){
    int num = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
            num++;
        }
        
    }
    return num;
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    int b = num(a,len);
    printf("Number of vowels = %d\n",b);
    return 0;
}