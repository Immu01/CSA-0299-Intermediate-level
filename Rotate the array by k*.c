#include <stdio.h>
int main() 
{
    int array[100], rotatedArray[100];
    int n, k, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the number of positions to rotate to the right: ");
    scanf("%d", &k);
    for (i = 0; i < n; i++) {
        rotatedArray[(i + k) % n] = array[i];
    }
    for (i = 0; i < n; i++) {
        array[i] = rotatedArray[i];
    }
    printf("Rotated Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}