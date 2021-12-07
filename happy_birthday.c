#include <stdio.h>
#include <string.h>

typedef struct _person {
    char name[50];
    int age;
} person_t;

void happy_birthday(person_t *person) {
    person->age = person->age + 1;
    
}

int main() {
    person_t jade;
    char firstname[10];
    char lastname[10];

    printf("What is your firstname? ");
    scanf("%s", &firstname);
    strcpy(&(jade.name), firstname);

    printf("What is your lastname? ");
    scanf("%s", &lastname);
    strcat(&(jade.name), " ");
    strcat(&(jade.name), lastname);

    printf("What is your age? ");
    scanf("%i", &jade.age);

    printf("Your name is %s and you are %i years old \n", jade.name, jade.age);

    happy_birthday(&jade);

    printf("Happy Birthday %s! You are now %i years old \n", jade.name, jade.age);

}