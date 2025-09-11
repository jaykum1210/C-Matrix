#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    int count=0;
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    for (int i = 0; i < b-1; i++)
    {
        if (a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122)
        {
            if (a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='A' && a[i]!='E' && a[i]!='I' && a[i]!='O' && a[i]!='U')
            {
                count++;
            }
        }
        
    }
    printf("Consonant = %d\n",count);
    return 0;
}