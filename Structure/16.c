#include <stdio.h>

struct name
{
    char first[100];
    char last[100];
};

int main(){
    struct name f;
    printf("Enter first name = ");
    scanf("%s",f.first);
    printf("Enter last name = ");
    scanf("%s",f.last);
    printf("Name = %s %s",f.first,f.last);
    return 0;
}