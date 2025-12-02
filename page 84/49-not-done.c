#include <stdio.h>

void rec(char b[][], int a){
    
}

int main(){
    int a;
    printf("Enter Size = ");
    scanf("%d",&a);
    char b[a][100];
    printf("Enter %d elements = ");
    for (int i = 0; i < a; i++)
    {
        scanf("%s",&b[i]);
    }
    getchar();
    rec(b,a);
    printf("Array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%s ",b[i]);
    }
    return 0;
}