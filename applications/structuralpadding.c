#include <stdio.h>

#pragma pack(1)

typedef struct structa_tag
{
    char c;
    int s;
} structa_t;

typedef struct structb_tag
{
    int s;
    double c;
} structb_t;

int main()
{
    printf("sizeof(structa_t) = %lu \n", sizeof(structa_t));
    printf("sizeof(structb_t) = %lu \n", sizeof(structb_t));

    return 0;
}
