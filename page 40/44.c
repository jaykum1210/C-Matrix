#include <stdio.h>

int main(){
    int a,vol =0,con=0,num=0,space=0,spe=0;
    printf("Enter number of elements = ");
    scanf("%d",&a);
    char arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf(" %c",&arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i]=='a' || arr[i] == 'e' || arr[i]== 'i' ||arr[i]== 'o' ||arr[i]== 'u' ||arr[i]== 'A' ||arr[i]== 'E' ||arr[i]== 'I' ||arr[i]== 'O' ||arr[i]== 'U')
        {
            vol++;
        }
        else if ((arr[i]>=65 && arr[i]<=90) || (arr[i]>=97 && arr[i]<=122))
        {
            con++;
        }
        else if (arr[i]>=48 && arr[i]<=57)
        {
            num++;
        }
        else if (arr[i] == ' ')
        {
            space++;
        }
        else{
            spe++;
        }
    }
    printf("Number of Vowels = %d\n",vol);
    printf("Number of Consonants = %d\n",con);
    printf("Number of digits = %d\n",num);
    printf("Number of Space = %d\n",space);
    printf("Number of Special Character = %d\n",spe);
    return 0;
}