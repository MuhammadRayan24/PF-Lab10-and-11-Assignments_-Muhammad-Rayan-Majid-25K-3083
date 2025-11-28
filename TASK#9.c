#include<stdio.h>
int linear_search(int arr[], int size, int target, int index)
{
    if(index==size)
    {
        return -1;
    }
    if(arr[index]==target)
    {
        return index;
    }
    return linear_search(arr, size, target, index+1);
}
int main()
{
    int arr[100], size=0, target=0;
    printf("\n Enter The Size Of Array: ");
    scanf("%d",&size);

    printf("\n Enter the %d Elements For Array: ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n Enter The TARGET Element: ");
    scanf("%d",&target);

    int result=linear_search(arr, size, target, 0);
    if (result == -1)
        printf("Element not found.\n");
    else
        printf("Element found at index %d.\n", result);

    return 0;

}