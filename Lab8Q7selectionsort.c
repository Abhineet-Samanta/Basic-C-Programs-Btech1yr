// Write a program to arrange the elements of an array in ascending
// order by a simple sorting method. (Selection sort)

// Selection Sort is a comparison-based sorting algorithm. It sorts an array by
// repeatedly selecting the smallest (or largest) element from the unsorted portion
// and swapping it with the first unsorted element. This process continues until
// the entire array is sorted.

// First we find the smallest element and swap it with the first element. This
// way we get the smallest element at its correct position. Then we find the
// smallest among remaining elements (or second smallest) and swap it with the
// second element. We keep doing this until we get all elements moved to correct position.

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        { // loop to check for the minimum element in the array
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
        { // swap the elements
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of the array;\n");
    int i;
    for (i = 0; i < n; i++) // loop to take input of the parent array
        scanf("%d", &array[i]);
    selectionSort(array, n);

    for (i = 0; i < n; i++) // loop to print the array
        printf("%d \t", array[i]);
    return 0;
}