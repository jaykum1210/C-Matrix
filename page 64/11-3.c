#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("Enter word = ");
    fgets(b,sizeof(b),stdin);
    int c = strlen(a);
    if (a[c-1]=='\n')
    {
        a[c-1] = '\0';
        c--;
    }
    int d = strlen(b);
    if (b[d-1]=='\n')
    {
        b[d-1] = '\0';
        d--;
    }
    int found = 0,j,k,word=1;
    for (int i = 0; i < a; i++)
    {
        if (a[i]==b[0])
        {
            
        }
        
    }
    
}