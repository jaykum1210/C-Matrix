#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int A=0,e=0,i=0,o=0,u=0;
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    for (int i = 0; i < len; i++)
    {
        if (a[i]=='a' || a[i]=='A')
        {
            A++;
        }
        else if (a[i]=='e' || a[i]=='E')
        {
            e++;
        }
        else if (a[i]=='i' || a[i]=='I')
        {
            i++;
        }
        else if (a[i]=='o' || a[i]=='O')
        {
            o++;
        }
        else if (a[i]=='u' || a[i]=='U')
        {
            u++;
        }
    }
    printf("Number of a = %d\n",A);
    printf("Number of e = %d\n",e);
    printf("Number of i = %d\n",i);
    printf("Number of o = %d\n",o);
    printf("Number of u = %d\n",u);
    return 0;
}