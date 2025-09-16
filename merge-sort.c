#include <stdio.h>

void merge(int arr[],int left,int mid,int right){
    int n1 = mid-left+1;  
    int n2 = right-mid;
    int l[n1],r[n2];
    for (int i = 0; i < n1; i++)
    {
        l[i] = arr[left+i];
    }
    for (int j = 0; j < n2; j++)
    {
        r[j] = arr[mid + 1 +j];
    }
    int i = 0,j=0,k = left;
    while (i<n1 && j<n2)
    {
        if (l[i]<=r[j])
        {
            arr[k] = l[i];
            i++;
        }
        else{
            arr[k] = r[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = l[i];
        i++;
        k++;
    }

    while (j<n2)
    {
        arr[k] = r[j];
        j++;
        k++;
    }
    
}

void mergesort(int arr[],int l,int r){
    if (l<r)
    {
        int mid = l + (r-l)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
    
}

int main(){
    int a;
    printf("Enter number of element = ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter %d elements = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int l = 0;
    int r = a-1;
    mergesort(arr,l,r);
    printf("Sorted array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}