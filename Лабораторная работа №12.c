#include <stdio.h>
#include <time.h>
int main()
{
    struct tm *d;
    time_t t = time(NULL);
    d = localtime(&t);
    FILE*output = fopen("dates.txt", "w");
    int day;
    for (int i = 0; i < 10; i++){
        day = i;
        fprintf(output, "%d/%d/%d \n",d -> tm_mday + day, d -> tm_mon + 1, d -> tm_year + 1900); }
    fclose(output);
    return 0;
}