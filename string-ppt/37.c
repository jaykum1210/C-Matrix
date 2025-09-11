#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100],min[50];
    printf("Enter String = ");
    fgets(a,sizeof(a),stdin);
    int j = 0,minlen = 0;
    int c = strlen(a);
    for (int i = 0; i < a; i++)
    {
        if (a[i]==' ' || a[i]=='\0' || a[i]=='\n')
        {
            b[j++]=a[i];
        }
        else{
            
        }
    }
    
}