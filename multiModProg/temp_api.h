#include <inttypes.h>
#include <stdio.h>
#include <stdint.h>

struct data {
    uint8_t hour;
    uint8_t day;
    uint8_t month;
    uint16_t year;
    int8_t temperature;
};

int averageMonthTemp(struct data [], int );

int minCurrentMonthTemp(struct data [], int );

int maxCurrentMonthTemp(struct data [], int);

int averageTempYear(struct data []);

int minTempYear(struct data []);

int maxTempYear(struct data []);