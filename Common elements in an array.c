#include<stdio.h>
int main ()
{
    int array1[100] , array2[100] , newarray[100] , i , j , n1 , n2 , count=0 ;
    printf("Enter the size of first Array : ");
    scanf("%d",&n1);
    for(i= 0; i < n1 ; i++) {
        printf("Element %d = ", i + 1 );
        scanf ("%d", &array1 [i]);
        }
     printf("\nEnter the size of second Array : ");
    scanf("%d",&n2);
    for(i= 0; i < n2 ; ++i) {
        printf("Element %d = ",i+1 );
        scanf ("%d", &array2 [i]);
        }
       for (i = 0; i < n1; i++) {
    for (j = 0; j < n2; j++) {
        if (array1[i] == array2[j]) { 
            newarray[count++] = array1[i];
            break;
        }
    }
}
        printf("The common elements are: \n" );
        for( i = 0 ; i < count ; i++){
            printf("%d\t",newarray[i]);
        }
}