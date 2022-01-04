#include <stdio.h>
void printArray();
void delArray();
void insertArr();
int main()
{
    int n = 10;
    int position,element,pos;
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printArray(arr, n);
    printf("\nEnter Which element to be delete(1,2,3...) :");
    scanf("%d", &position);

    delArray(arr, position, n);
    printf("\nArray after Deletion :");
    printArray(arr, n);
    printf("\nEnter element to be stored :");
    scanf("%d", &element);
    printf("\nEnter Position of Element :");
    scanf("%d",&pos);
    insertArr(arr,pos,n,element);
    printArray(arr, n);



    return 0;
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

void delArray(int arr[], int pos, int size)
{
    int c;
    if (pos >= size + 1)
        printf("\nDeletion Not Possible !!");
    else
    {
        for (c = pos - 1; c < size - 1; c++)
            arr[c] = arr[c + 1];
    }
}
void insertArr(int arr[], int pos , int size, int data)
{
    int i;
    if(pos > size)
    printf("Invalid Input !!");
    else{
        for(i = size -1 ;i >= pos - 1;i++)
        arr[i + 1] = arr[i];
        arr[pos -1] = data;
    }
}
