#include <stdio.h>
#include <string.h>

int main(){
    char a[100],temp[100],min[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int b = strlen(a);
    int i,j=0,minlen=100;
    for (int i = 0; i < b; i++)
    {
        if (a[i] != ' ' && a[i] != '\0' && a[i] != '\n')
        {
            temp[j] = a[i];
            j++;
        }
        else{
            temp[j] = '\0';
            if (minlen>j)
            {
                minlen = j;
                strcpy(min,temp);
            }
            j=0;
        }
    }
    printf("Smallest string = %s\n",min);
    return 0;
}