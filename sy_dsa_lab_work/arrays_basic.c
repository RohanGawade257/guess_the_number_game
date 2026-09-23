#include<stdio.h>

void insertion(int arr[],int n ){

    int pos;
    int val;
    printf("\nenter the position out of %d elements you want to insert: ",n);
    scanf("%d",&pos);

    printf("enter the new value for new element: ");
    scanf("%d",&val);

    for(int i=n-1; i>=pos-15; i--){
        arr[i+1] = arr[i];
    }

    arr[pos-1] = val;
    n++;

    printf("your updated array is :");
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
}

int main(){

    int arr[50];
    int n;

    printf("enter the size of array: ");
    scanf("%d",&n);

    printf("enter the %d element of array: ",n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("the %d elements you entered are: ",n);
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }

    insertion(arr,n);
    return 0;
}