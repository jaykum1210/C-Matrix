#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    int i=0,found=0;
    for (int i = 0; i < b; i++)
    {
        if (a[i]>='A'&&a[i]<='Z')
        {
            a[i] = a[i]+32;
        }
    }
    
    for (int i = 0; i < 26; i++)
    {
        found = 0;
        for (int j = 0; j < b; j++)
        {
            if(('a'+i)==a[j]){
                found=1;
                break;
            }
        }
        if (found==0)
        {
            printf("Not an Pangram");
            return 0;
        }
    }
    printf("Pangram");
    return 0;
}