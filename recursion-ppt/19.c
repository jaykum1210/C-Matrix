#include <stdio.h>

void rev(char a[], int i){
    if (a[i]=='\n' || a[i]=='\0')
    {
        return;
    }
    printf("%c ",a[i]);
    rev(a,i+1);
    return;
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int i = 0;
    rev(a,i);
    return 0;
}