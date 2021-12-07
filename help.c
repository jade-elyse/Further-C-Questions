#include <stdio.h>
#include <string.h>

typedef struct _person{
    char name[50];
    int age;
} person_t;

int main(){

    person_t chris;
    person_t chris = {"chris", 23};
    printf("%s is %i years old!", chris.name, chris.age);
    return 0;
}