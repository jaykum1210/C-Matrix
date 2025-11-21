#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    int aplha=0,digit=0,spe=0;
    for (int i = 0; i < len; i++)
    {
        if ((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
        {
            aplha++;
        }
        else if (a[i]>='0' && a[i]<='9')
        {
            digit++;
        }
        else if (a[i]!=' ')
        {
            spe++;
        }   
    }
    printf("Number of Alphabet = %d\n",aplha);
    printf("Number of digit = %d\n",digit);
    printf("Number of Special Character = %d\n",spe);
    return 0;
}