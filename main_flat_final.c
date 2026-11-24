#ifndef HEADER1_H
#define HEADER1_H
#ifndef HEADER2_H
#define HEADER2_H   
#ifndef HEADER3_H
#define HEADER3_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FLATS 100
#define NAME_SIZE 50
#define STREET_SIZE 50

typedef struct {
    int number;
    int rooms;
    char name[NAME_SIZE];
    char owner[NAME_SIZE];
    int booked;
    char street[STREET_SIZE];
    float rent;
} Flat;

#endif
#endif
#endif