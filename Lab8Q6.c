// Write a program to check whether an array is sorted or not.
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
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        if (array[i] > array[i + 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("The array is not sorted. \n");
    else
        printf("The array is sorted.");
    return 0;
}
