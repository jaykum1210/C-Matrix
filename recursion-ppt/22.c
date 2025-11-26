#include <stdio.h>

int rec(char a[], int i){
    static int num = 0;
    if (a[i]=='\n' || a[i]=='\0')
    {
        return num;
    }
    if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='U' || a[i]=='O')
    {
        num++;
    }
    return rec(a,i+1);
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int i = 0;
    int num = rec(a,i);
    printf("Number of vowels = %d\n",num);
    return 0;
}