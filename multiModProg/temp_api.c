#include "temp_api.h"
#define SIZE 30

float averageMonthTemp(struct data info[], int number, int month)
{
    int sumTempMonth = 0;
	int count=0;
	for(int i = 0; i<number;i++)
		if(info[i].month == month)
		{
			count++;
			sumTempMonth += info[i].t;
		}
	return (float)sumTempMonth / count;
}

int minCurrentMonthTemp(struct data info[], int number,int month)
{
   int minTemp = info[0].t;
   for(int i = 0; i<number;i++)
		if(info[i].month == month && info[i].t < minTemp)
			minTemp = info[i].t;
	return minTemp;
}

int maxCurrentMonthTemp(struct data info[],int number, int month)
{
	int maxTemp = info[0].t;
	for(int i = 0; i<number;i++)
		if(info[i].month == month && info[i].t > maxTemp)
			maxTemp = info[i].t;
	return maxTemp;
}

float averageTempYear(struct data info[], int number)
{
   int sumTemp = 0;
   for (int i=0; i<number;i++)
		sumTemp += info[i].t;
	return (float)sumTemp / number;
}

int minTempYear(struct data info[],int number)
{
    int min_temp = info[0].t;
	for(int i = 0; i< SIZE; i++)
		if(info[i].t < min_temp)
			min_temp = info[i].t;
	return min_temp;
}

int maxTempYear(struct data info[],int number)
{
    int max_temp = info[0].t;
	for(int i = 0; i< SIZE; i++)
		if(info[i].t > max_temp)
			max_temp = info[i].t;
	return max_temp;

}

void AddRecord(struct data info[], int number, uint16_t year, uint8_t month, uint8_t day,uint8_t hour,uint8_t minute, int8_t t)
{
	info[number].year = year;
	info[number].month = month;
	info[number].day = day;
    info[number].hour = hour;
    info[number].minute = minute;
	info[number].t = t;
}

int AddInfo(struct data info[])
{
	int counter = 0;
	AddRecord(info,counter++,2024,9,16,14,10,9);
	AddRecord(info,counter++,2024,3,2,14,11,-9);
	AddRecord(info,counter++,2024,4,7,14,12,8);
	AddRecord(info,counter++,2024,9,5,1,14,13);
    AddRecord(info,counter++,2024,9,16,14,15,50);
	AddRecord(info,counter++,2024,7,2,14,16,-9);
	AddRecord(info,counter++,2024,12,7,14,17,8);
	AddRecord(info,counter++,2024,1,5,1,18,13);
	return counter;
}

void print(struct data info[], int number)
{
	printf("===================================\n");
	for(int i = 0; i<number;i++)
		printf("%04d-%02d-%02d-%2d-%2d t = %3d\n", info[i].year, info[i].month, info[i].day,info[i].hour,info[i].minute, info[i].t);
}

void changeIJ(struct data info[], int i, int j)
{
	struct data temp;
	temp = info[i];
	info[i] = info[j];
	info[j] = temp;
}

int CompareDate(struct data a[], struct data b[])
{
	if(a->year != b->year)
		return a->year - b->year;
	else if(a->month != b->month)
		return a->month - b->month;
	else
		return a->day - b->day;
}

void SortByT(struct data info[], int n)
{
	for(int i = 0; i<n;++i)
		for(int j=i; j<n; ++j)
			if(info[i].t  >= info[j].t)
				changeIJ(info,i,j);
}

void SortByDate(struct data info[], int n)
{
	for(int i = 0; i<n;++i)
		for(int j=i; j<n; ++j)
			if(CompareDate(info+i,info+j)>0)
				changeIJ(info,i,j);
}

void printMonth(struct data info[], int number, int month)
{
	printf("===================================\n");
	for(int i = 0; i<number;i++)
		if(info[i].month == month)	
			printf("%04d-%02d-%02d-%2d-%2d t = %3d\n", info[i].year, info[i].month, info[i].day,info[i].hour,info[i].minute, info[i].t);
}