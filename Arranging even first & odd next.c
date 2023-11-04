#include<stdio.h>
int main ()
{
    int a[100] , n , i , even_count = 0 , odd_count = 0 , even_a[100] , odd_a[100] , even_index=0 , odd_index = 0;
    printf("\nenter the no.of elements in the array :");
    scanf("%d" , &n);
    for(i = 0 ; i < n ; i++)
    {
        printf("\n");
    printf("enter the element %d = " , i + 1);
    scanf("%d" , &a[i]);
    }
   {
    if (a[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
   }
        for(i = 0 ; i < n ; i++){
            if(a[i] % 2 == 0 ){
                even_a[even_count++] = a[i];
            } else 
            {
                odd_a[odd_count++] = a[i];
            }
        }
        for (i = 0 ; i < even_count ; i++){
            a[i] = even_a[i];
        }
        for(i = 0 ; i < odd_count ; i++){
            a[even_count + i] = odd_a[i];
        }
        for(i = 0 ; i < n ; i++)
        {
        printf("\nthe sorted array is : %d" , a[i]);
        }
}