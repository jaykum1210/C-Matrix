#include <stdio.h>
#include <string.h>

void le(char a[]){
    int len = strlen(a);
    printf("Length = %d\n",len);
}

void rev(char a[]){
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    for (int i = 0; i < len/2; i++)
    {
        char temp = a[i];
        a[i] = a[len-i-1];
        a[len-i-1] = temp;
    }
    printf("String = %s",a);
}

void pal(char a[]){
    int len = strlen(a);
    if (a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    int flag = 0;
    for (int i = 0; i < len/2; i++)
    {
        if (a[i]!=a[len-i-1])
        {
            printf("Not a Palindrome\n");
            return;
        }
    }
    printf("Palindrome\n");
}

int main(){
    char a[100];
    printf("Enter string = ");
    fgets(a,sizeof(a),stdin);
    int option = 0;
    void (*fp)(char *);
    while (option!=4)
    {
        printf("1. Length\n");
        printf("2. Reverse String\n");
        printf("3. Palindrome\n");
        printf("4. Exit\n");
        printf("Enter option = ");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            fp = le;
            break;
        case 2:
            fp = rev;
            break;
        case 3:
            fp = pal;
            break;
        case 4:
            printf("Exit....\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
        fp(a);
    }
    return 0;
}