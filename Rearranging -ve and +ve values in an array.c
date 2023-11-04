#include<stdio.h>
int main ()
{
    int array[100] , i , n , j , temp;
    printf("enter the no.of elements in an array :");
    scanf("%d" , &n);
        for (i = 0 ; i < n ; i++){
    printf("enter the element %d :", i + 1);
    scanf("%d" , &array[i]);
    }
    i = 0;
    j = n - 1;
    while (i <= j) {
        if (array[i] < 0) {
            i++;
        } else if (array[j] >= 0) {
            j--;
        } else {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    printf("Rearranged array negative elements before positive elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}