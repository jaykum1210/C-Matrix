#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count=0,word=1;
    while (a[count]!='\n' && a[count]!='\0')
    {
        while (a[count]==' ' || a[count]=='\0')
        {
            word++;
            break;
        }
        count++;
    }
    printf("Number of words = %d\n",word);
    return 0;
}