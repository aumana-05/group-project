//
// Created by stpar on 24/11/2026.
//

#ifndef UNTITLED2_HEADER2_H
#define UNTITLED2_HEADER2_H

#include <stdbool.h>
void SearchFlat(char name[], Flat flats[], int num) {
    int i;
    int found = 0;

    for (i = 0; i < num; i++) {
        if (strcmp(flats[i].name, name) == 0) {
            printf("Found flat: %s, Number: %d, Rooms: %d, Rent: %.2f, %s\n",
                   flats[i].name, flats[i].number, flats[i].rooms,
                   flats[i].rent, flats[i].booked ? "Booked" : "Available");
            found = 1;
        }
    }

    if (!found)
        printf("No flat with that name was found.\n");
}

void BookFlat(Flat flats[], int num) {
    int i;
    int number;

    printf("Enter flat number to book: ");
    if (scanf("%d", &number) != 1)
        return;

    for (i = 0; i < num; i++) {
        if (flats[i].number == number) {
            if (flats[i].booked)
                printf("That flat is already booked.\n");
            else {
                flats[i].booked = 1;
                printf("Flat %d has been booked.\n", number);
            }
            return;
        }
    }

    printf("Flat not found.\n");
}

float CalculateRent(Flat *flat, int month) {
    if (month < 0)
        return 0;

    return flat->rent * month;
}

#endif

