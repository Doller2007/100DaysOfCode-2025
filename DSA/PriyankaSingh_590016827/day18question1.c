#include <stdio.h>

// Function to perform selection sort
void selectionSort(int arr[], int n) 
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++) 
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++) 
        {
            if (arr[j] < arr[min_idx]) 
            {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        if (min_idx != i) {
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) 
{
    int i;
    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int n, i;
    
    printf("Enter the number of elements to sort: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: \n");
    printArray(arr, n);
    
    selectionSort(arr, n);
    
    printf("Sorted array in ascending order: \n");
    printArray(arr, n);
    
    return 0;
}