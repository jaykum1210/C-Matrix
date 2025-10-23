#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int letter=0,digit=0,space=0,count=0;
    while (a[count]!='\n' && a[count]!='\0')
    {
        if (a[count]>='a' && a[count]<='z' || a[count]>='A' && a[count]<='Z')
        {
            letter++;
        }
        if (a[count]>='0' && a[count]<='9')
        {
            digit++;
        }
        if (a[count] == ' ')
        {
            space++;
        }
        count++;
    }
    printf("Letter = %d\n",letter);
    printf("Digit = %d\n",digit);
    printf("Space = %d\n",space);
    return 0;
}