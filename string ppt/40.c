#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    printf("String = ");
    fgets(b,sizeof(b),stdin);
    int c = strlen(a);
    int d = strlen(b);
    int found = 0,x=-1;
    for (int i = 0; i < d; i++)
    {
        found=0;
        for (int j = x+1; j < c; j++)
        {
            if (b[i]==a[j])
            {
                found=1;
                x=j;
                break;
            }
        }
        if (found==0)
        {
            printf("Not Subsequence");
            return 0;
        }
    }
    printf("Subsequence");
    return 0;
}