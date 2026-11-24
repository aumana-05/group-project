//
// Created by ASUS on 11/24/2026.
//

#ifndef UNTITLED_HEADER1_H
#define UNTITLED_HEADER1_H
#include "flat.h"

void Menu(void) {
    printf("\n----- MENU -----\n");
    printf("1. Display flats by rooms\n");
    printf("2. Display all flats\n");
    printf("3. Search flat by name\n");
    printf("4. Book flat\n");
    printf("5. Calculate rent\n");
    printf("6. Write flats to file\n");
    printf("7. Read flats from file\n");
    printf("0. Exit\n");
}

void DisplayFlats(int rooms, Flat flats[], int num) {
    int i;
    int found = 0;

    for (i = 0; i < num; i++) {
        if (flats[i].rooms == rooms) {
            printf("%d. %s, %d rooms, Owner: %s, Street: %s, Rent: %.2f, %s\n",
                   flats[i].number,
                   flats[i].name,
                   flats[i].rooms,
                   flats[i].owner,
                   flats[i].street,
                   flats[i].rent,
                   flats[i].booked ? "Booked" : "Available");

            found = 1;
        }
    }

    if (!found) {
        printf("No flats found with %d rooms.\n", rooms);
    }
}

void DisplayAll(Flat flats[], int num) {
    int i;

    if (num == 0) {
        printf("No flats available.\n");
        return;
    }

    for (i = 0; i < num; i++) {
        printf("\nFlat %d\n", i + 1);
        printf("Number: %d\n", flats[i].number);
        printf("Rooms: %d\n", flats[i].rooms);
        printf("Name: %s\n", flats[i].name);
        printf("Owner: %s\n", flats[i].owner);
        printf("Street: %s\n", flats[i].street);
        printf("Rent: %.2f\n", flats[i].rent);
        printf("Status: %s\n",
               flats[i].booked ? "Booked" : "Available");
    }
}
#endif //UNTITLED_HEADER1_H
