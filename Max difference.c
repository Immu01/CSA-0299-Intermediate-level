#include <stdio.h>
int maximum_difference(int array[], int arr_size)
{
    int max_diff = array[1] - array[0];
    int i, j;
    for (i = 0; i < arr_size; i++){
        for (j = i + 1; j < arr_size; j++){
            if (array[j] - array[i] > max_diff)
                max_diff = array[j] - array[i];
        }
    }
    return max_diff;
}
int main()
{
    int n , array[100] , i;
    printf("enter the no.of elements :");
    scanf("%d" , &n);
    printf("enter the elements :");
    for (i = 0 ; i < n ; i++)
    scanf("%d" , &array[i]);
    printf("Maximum difference is %d",  maximum_difference(array, n));
    getchar();
    return 0;
}