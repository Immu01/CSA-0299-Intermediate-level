#include<stdio.h>
int main ()
{
    int array[100] , n , i , j , count , current , found = 0 ;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    for(i= 0; i < n ; i++) {
    printf("Element %d = ", i + 1 );
    scanf ("%d", &array [i]);
    }
    for (i = 0 ; i < n ; i++){
        current = array[i];
        count = 0;
    for (j = 0 ; j < n ; j++){
        if (array[i] = current){
        count++;
        }
    }
    if ( count > n/2){
        found = 1;
        printf("\nThe elements repeated more than n/2 times is : %d" ,current);
        break;
        }
    }
}
