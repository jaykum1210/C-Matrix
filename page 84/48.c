#include <stdio.h>
#include <string.h>

int rec(char a[][100], char b[], int l, int r){
    while (l<=r)
    {
        int mid = l + (r-l)/2;
        int num = strcmp(a[mid],b);
        if (num<0)
        {
            return rec(a,b,mid+1,r);
        }
        else if (num>0)
        {
            return rec(a,b,l,mid-1);
        }
        else{
            return 0;
        }
    }
    return -1;
}

int main(){
    int size;
    printf("Enter size = ");
    scanf("%d",&size);
    char a[size][100];
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d word = ",i+1);
        scanf("%s",a[i]);
    }
    getchar();
    char b[100];
    printf("Enter word = ");
    fgets(b,sizeof(b),stdin);
    int len = strlen(b);
    if (b[len-1]=='\n')
    {
        b[len-1]='\0';
        len--;
    }
    int l = 0, r = size-1;
    int num = rec(a,b,l,r);
    if (num==0)
    {
        printf("Found\n");
    }
    else{
        printf("Not found\n");
    }
    return 0;
}