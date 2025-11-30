#include <stdio.h>
#include <string.h>

int con=0,vo=0,di=0,sp=0,ch=0;

void rec(char a[], int len){
    for (int i = 0; i < len-1; i++)
    {
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='u' || a[i]=='o' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
            vo++;
        }
        else if ((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
            con++;
        }
        else if (a[i]>='0' && a[i]<='9')
        {
            di++;
        }
        else if (a[i]==' ')
        {
            sp++;
        }
        else{
            ch++;
        }
    }
    
}

int main(){
    char a[1000];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
    }
    rec(a,len);
    printf("Number of Vowels = %d\n",vo);
    printf("Number of Consonents = %d\n",con);
    printf("Number of Digits = %d\n",di);
    printf("Number of Spaces = %d\n",sp);
    printf("Number of Special Character = %d\n",ch);
    return 0;
}