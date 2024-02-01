#include<stdio.h>

void teller1(char* msg){
    printf("teller1 : %s\n",msg);
}


void teller2(char* msg){
    printf("teller1 : %s\n",msg);
}


void teller3(char* msg){
    printf("teller1 : %s\n",msg);
}

 typedef  void (*F_PTR)(char *);
 void caller(char * msg,F_PTR fp){
    fp(msg);
 }

int main(){
    caller("Hello",&teller1);
}