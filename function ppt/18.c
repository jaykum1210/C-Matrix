#include <stdio.h>

void check(char a){
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U') 
    {
        printf("Vowel\n");
    }
    else if ((a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
        printf("Consonent\n");
    }
    
}

int main(){
    char a;
    printf("Enter character = ");
    scanf("%c",&a);
    check(a);
    return 0;
}