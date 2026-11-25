#include "temp_api.h"
#include <unistd.h>
#define NAMELEN 30


int main(int argc, char **argv)
{
	int rez = 0;
    while((rez = getopt(argc,argv,"hf:m:")) != -1){
        switch (rez){
            case 'h':
                printf("Help file:\n -h - help file\n -f - input csv-file\n -m X - month number X statistics");
                break;
            case 'f':
                char filename[NAMELEN] = "";
                strcpy(filename,optarg);
                printf("Filename is %s\n", filename);
                break;
            case 'm':
                 struct data d[SIZE];
                 int number = AddInfo(d);
                 printf("%s month statistics: %.2f\n", optarg, averageMonthTemp(d,number,atoi(optarg)));
                 
                 //printMonth(d,number,*optarg-'0');
                 //printf("%s\n", optarg);
                 break;
        }
    }
   
    //print(d,number);
    //printf("\n%d\n", maxTempYear(d,number));
    //printf("\n%d\n", minTempYear(d,number));
    //printf("\n%.2f\n",averageTempYear(d,number));
    //printf("\n%.2f\n",averageMonthTemp(d,number,9));
    //SortByT(d, number);
    //print(d,number);
    //printf("\n%d\n",maxCurrentMonthTemp(d,number,9));
    return 0;
}