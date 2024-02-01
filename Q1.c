#include<stdio.h>
int main(){
    typedef double num[3];
    num array[5] = {1,2,3,4,5,6};
    printf("%u",sizeof(array));
    printf("\n");
    printf("%.2f",array[1][1]);
}

/*
array[5] stores 5 values 1 2 3 4 5 6 but in num data type it is represented as following, 
    num[0]              num[1]             num[2]
    double               double              double
    size 8                 size 8                    size 8
     1                            2                             3
     4                            5                             6
    
    size of the num type is 24 and array[5] means 24*5 = 120
    at position array[1][1] 5 is present .
    
*/