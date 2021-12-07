#include <stdio.h>

void update_total(int x) {
/* get user input and add it to total */
    int user_input;
    x = x + user_input;
}

int main() {
/* Keep counting numbers a user added until the sum total is */
    int total = 0;
    while (total <= 15) {
// Print the current value, and update it with user input
        printf("\n\nYour current total is %d. \nWhat will you add? >", total);
        
        update_total(total);
        total +=1;
    }
// A little goodbye message
    printf("\n\nYou made it to %d, which is above 15! Stopping now.\n", total);
}