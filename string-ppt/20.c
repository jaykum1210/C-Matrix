#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    if (a[0]=='\n')
    {
        printf("Empty\n");
    }
    else{
        printf("Not empty\n");
    }
    return 0;
}