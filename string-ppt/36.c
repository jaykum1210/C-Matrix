#include <stdio.h>
#include <string.h>

int main(){
    char a[100],temp[100],max[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    int i,j=0,maxlen = 0;
    for (int i = 0; i < b; i++)
    {
        if (a[i] != ' ' && a[i] != '\0' && a[i] != '\n')
        {
            temp[j] = a[i];
            j++;
        }
        else{
            temp[j] = '\0';
            if (j>maxlen)
            {
                maxlen = j;
                strcpy(max,temp);
            }
            j = 0;
        }
    }
    printf("Largest String = %s\n",max);
    return 0;
}