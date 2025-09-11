#include <stdio.h>

int main(){
    char a;
    printf("Enter character = ");
    scanf(" %c",&a);
    if ( a =='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        printf("Vowel\n");
    }
    else if (a>=65 && a<=90 || a>=97 && a<=122)
    {
        printf("Consonant");
    }
    else{
        printf("Not a Character");
    }
    return 0;
}