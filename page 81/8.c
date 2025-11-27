#include <stdio.h>
#include <ctype.h>

int main(){
    char a;
    printf("Enter Character = ");
    scanf("%c",&a);
    if (isupper(a))
    {
        printf("%d\n",1);
    }
    else{
        printf("%d\n",0);
    }
    return 0;
}