#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>
#include<windows.h>

FILE *login;
//list of global variable
char findBook;
char password[10];

struct BOOK
{
    int id;
    char name[20];
    char Author[20];
    int quantity;
    float Price;
    int rackno;
    char *cat;
};
struct BOOK book;

COORD coord = {0, 0};

