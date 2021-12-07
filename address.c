#include <stdio.h>
#include <string.h>

typedef struct _address {
    char streetname[50];
    char postcode[8];
    char name[50];
} Address;

void moveHouse(char newStreet[], char newPostcode[], Address *addr) {
// The errors aren't anything to do with strings --- that would be mean.
// Safely sets new string values for the street name and postcode.
    strcpy(addr->streetname, newStreet);
    strcpy(addr->postcode, newPostcode);
}

int main() {
// Pretty noisy at Bob's place!
    Address bobs_flat = {"1 Byres Road", "G12 3YZ", "Bob Jones"};
// Bob moves up a couple doors, and now lives at 7 byres road.
    moveHouse("7 byres road", "G11 1AB", &bobs_flat);
    printf("%s now lives at %s %s.\n",
    bobs_flat.name,
    bobs_flat.streetname,
    bobs_flat.postcode);
}