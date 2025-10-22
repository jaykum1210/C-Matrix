#include <stdio.h>

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int count=0;
    while (a[count]!='\0' && a[count]!='\n')
    {
        count++;
    }
    int vow=0,cons=0;
    for (int i = 0; i < count; i++)
    {
        if (a[i]=='a' || a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            vow++;
        }
        else if(a[i]>='a' && a[i]<='z' || a[i]>='A' && a[i]<='Z'){
            cons++;
        }
    }
    printf("Vowels = %d\n",vow);
    printf("Consonent = %d\n",cons);
    return 0;
}