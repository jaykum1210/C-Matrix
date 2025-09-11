#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[50],max[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int c = strlen(a);
    int j = 0, maxlen = 0;
    for (int i = 0; i < c; i++)
    {
        if (a[i] != ' ' && a[i]!= '\0' && a[i]!= '\n')
        {
            b[j] = a[i];
            j++;
        }
        else{
            b[j] = '\0';
            if (j>maxlen)
            {
                maxlen = j;
                strcpy(max,b);
            }
            j = 0;
        }
    }
    printf("Largest character = %s\n",max);
    return 0;
}