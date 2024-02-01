#include<stdio.h>

enum Covid_prevention{
    Sanitizer = 1,
    Wear_mask = 2,
    Soc_distance =4
};

int main(){
    int myCovidPrevention = Wear_mask | Soc_distance;

    printf("%d",myCovidPrevention);

    //output is 6 
    /*
        Wear_mask = 2
        Soc_distance = 4

        converting 2 into binary = 10 
    

    4%2 = 0 remainder
    2%2=  0 remainder
    1%2 =  1  remainder
    now reverse it 001 =>  100

    010
    100   |
    ====
    1 1 0   => in decimal it is 6 
    | binary operator return 1 if opposite bit present


    */
}
