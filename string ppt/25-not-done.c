#include <stdio.h>

int main(){
    char a[100],b[100];
    printf("Enter first string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter second string = ");
    fgets(b,sizeof(b),stdin);
    int count1 = 0, count2=0;
    while (a[count1]!='\0' && a[count1]!='\n')
    {
        count1++;
    }
    while (b[count2]!='\0' && b[count2]!='\n')
    {
        count2++;
    }
    int c[100],d[100];
    if (count1!=count2)
    {
        printf("Not an Anagram");
        return 0;
    }
    
}