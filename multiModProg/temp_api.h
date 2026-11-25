#include <inttypes.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 30

struct data {
    uint8_t hour;
    uint8_t minute;
    uint8_t day;
    uint8_t month;
    uint16_t year;
    int8_t t;
};

float averageMonthTemp(struct data info[], int, int);

int minCurrentMonthTemp(struct data info[], int, int);

int maxCurrentMonthTemp(struct data info[], int, int);

float averageTempYear(struct data info[], int);

int minTempYear(struct data info[], int);

int maxTempYear(struct data info[], int);

void AddRecord(struct data info[], int,  uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, int8_t);

int AddInfo(struct data info[]);

void print(struct data info[], int);

void changeIJ(struct data info[], int, int);

int CompareDate(struct data a[], struct data b[]);

void SortByT(struct data info[], int);

void SortByDate(struct data info[], int);

void printMonth(struct data info[], int, int);
