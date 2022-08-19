/*
MIGUEL ANGEL MARQUEZ HERNANDEZ
DATA STRUCTURES
LESSON 1: ARRAY BASICS
*/



#include<stdio.h>
#include<iostream>

using namespace std;

int main (){
    int array[5];
    array[0] = 2; 
    array[1] = 4; 
    array[2] = 6; 

    /*
    Int data type uses 4 bytes in memory. 
    Array has 5 elements
    4 bytes * 5 elements = 20 bytes in memory. 
    Therefore sizeof(array) = 20
    */
    printf("%d\n", sizeof(array));

    printf("%d\n", array[1]);


    /*
    It is possible to declare an array
    without specifying its size so it 
    will accept any number of elements. 
    */
    int array2[]={2,4,6,8,10,12,14};

    /*
    Divide the memory occupied by an array
    by the memory occupied by its data type 
    to know the element number of the array
    */
    printf("%d\n", sizeof(array2)/sizeof(int));


    /*
    (C++ ONLY)
    Foreach loop is used to iterate over the elements of a containers (array, vectors etc) 
    quickly without performing initialization, testing and increment/decrement.
    */
   cout << "Array2 elements:" <<endl;
   for (int x:array2){
        cout << x << endl;
        
   }

   /*
   Variable sized array
   note: Variable sized arrays cannot be
   initialized at compilation time, they are
   filled during runtime
   */
    int array_size; 
    printf("Input array size: ");
    scanf("%d", &array_size); 
    int array3[array_size] = {2,4,6};
    printf("Array size is: %d\n", sizeof(array3)/sizeof(int)); 
    return 0; 
}