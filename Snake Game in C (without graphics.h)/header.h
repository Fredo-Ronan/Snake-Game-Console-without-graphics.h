#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#define esc 27
#define X 50
#define Y 30
#define sizeTail 50
#define sizeHistory 50

typedef char string[100];

typedef struct History {
	char name[sizeHistory];
	char highScore[sizeHistory];
	char dateTime[sizeHistory];
}History;

void initTail(char tail[]);
void createMap(char map[Y][X], int *x, int *y, char *head, char tail[], int xTail[], int yTail[], int *maxTail, bool *makeFood, int *xEat, int *yEat);
void renderMap(char map[Y][X]);
void storeCoordinate(int xTail[], int yTail[]);
void locateFood(int *xFood, int *yFood);
void moveUp(char *head, int *y, int *x, bool *crash, int *maxTail, int *yEat, int *xEat, bool *makeFood, int *score);
void moveDown(char *head, int *y, int *x, bool *crash, int *maxTail, int *yEat, int *xEat, bool *makeFood, int *score);
void moveRight(char *head, int *y, int *x, bool *crash, int *maxTail, int *yEat, int *xEat, bool *makeFood, int *score);
void moveLeft(char *head, int *y, int *x, bool *crash, int *maxTail, int *yEat, int *xEat, bool *makeFood, int *score);
void initHistory(History history[]);
void showHistory(History history[], int *dataCount);
void showHistoryFind(History history[], string *name, int *dataCount);

//working with file

void copyDataToSystem(History history[], FILE *transferData, int *dataCount);
