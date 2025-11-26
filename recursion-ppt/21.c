#include <stdio.h>

int rec(char a[],int i){
    if (a[i]=='\n' || a[i]=='\0')
    {
        return i;
    }
    return rec(a,i+1);
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int i = 0;
    int len = rec(a,i);
    printf("Length = %d\n",len);
    return 0;
}