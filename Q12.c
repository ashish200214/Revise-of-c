#include<stdio.h>

int main(){
    int arr[]={10,20,30,40,50};
    int *ip,i;

    for(ip=arr+4,i=0;i<5;i++){
        printf("%d",(-i)[ip]);
    }
}