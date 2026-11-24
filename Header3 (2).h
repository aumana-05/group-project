//
// Created by Andre on 24/11/2026.
//

#ifndef GROUP_PROYECT_READFILE_H
#define GROUP_PROYECT_READFILE_H


#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int number;
    int rooms;
    char name[50];
    char owner[50];
    bool booked;
    char street[50];
    float rent;
}flat;

flat room[50];

int ReadFromFile(flat room[], int size) {
    int readFile(flat* room);
    FILE *readonly= fopen("flats.txt","r");
    if (!readonly) {
        printf("couldn´t open flats.txt");
        return 1;
    }
    char line[256];
    int amorooms;

    for(int i=0;i<size;i++) {
        if (sscanf(line,"%d %d %49s %49s %d %s %1f",&room[i].number,&room[i].rooms,&room[i].name,&room[i].owner,
            &room[i].booked,&room[i].street,&room[i].rent)==7) {
            printf("#%d  rooms: %d Building: %s Owner: %s Availability: %s Street: %s Monthly cost: %1f",room[i].number,room[i].rooms,room[i].name,room[i].owner,room[i].booked?"Booked":"Available",room[i].street,room[i].rent);
            amorooms++;
    }
    }
    printf("Shown: ",amorooms);
    fclose(readonly);
    return 1;
}



int WriteToFile(flat room[],int size) {
    FILE *file = fopen("flats.txt","w");
    if (!file) {
        printf("File not found\n");
    }
    for (int i=0;i<size;i++) {
    printf("Enter the Number: ");
    scanf("%d",&room[i].number);
    printf("Enter the Room Name: ");
    scanf("%s",room[i].name);
    printf("Enter the Owner: ");
    scanf("%s",room[i].owner);
    printf("Enter the amount of rooms: ");
    scanf("%d",&room[i].rooms);
    printf("Enter the Booked Street: ");
    scanf("%s",room[i].street);
    printf("Enter the Availability: ");
    scanf("%s",room[i].booked);
    printf("Enter the Monthly Cost: ");
    scanf("%f",&room[i].rent);
}
    for (int i=0;i<size;i++) {
        fprintf(file,"%d ", room[i].number);
        fprintf(file,"%d ", room[i].rooms);
        fprintf(file,"%s ", room[i].name);
        fprintf(file,"%s ", room[i].owner);
        fprintf(file,"%d ", room[i].booked);
        fprintf(file,"%s ", room[i].street);
        fprintf(file,"%1f \n", room[i].rent);
    }
    fclose(file);
}

#endif //GROUP_PROYECT_READFILE_H
