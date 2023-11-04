#include<stdio.h>
int main ()
{
    int a , b , temp , *ptr1 , *ptr2 ;
    printf("\nenter two numbers : \n ---> ");
    scanf("%d %d" , &a , &b);
    ptr1 = &a;
    ptr2 =&b;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2=temp;
    printf("\nthe numbers after swapping a = %d , b = %d", *ptr1 , *ptr2);
}