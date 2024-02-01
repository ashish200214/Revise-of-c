#include<stdio.h>

struct result{
    char subject[20];
    int mark;
};

int main(){
    struct result r[]={
        {"Math",95},{"Science",93},{"English",80}
    };

    printf("%s",r[1].subject);
    printf("\n");
    printf("%d",(*(r+2)).mark);
}
