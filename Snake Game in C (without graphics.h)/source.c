#include "header.h"

void clearMap(char map[Y][X])
{
	int i, j;
	
	for(i=0;i<Y;i++)
	{
		for(j=0;j<X;j++)
		{
			map[i][j] = ' ';
		}
	}
}

//INITIALIZE AND UPDATE GAME MAP =============================================================================================================================

void createMap(char map[Y][X], int *x, int *y, char *head, char tail[], int xTail[], int yTail[], int *maxTail, bool *makeFood, int *xEat, int *yEat)
{
	int i, j;
	int tempX, tempY;
	
	int xFood, yFood;
	
	for(i=0;i<Y;i++)
	{
		for(j=0;j<X;j++)
		{
			if(i==0 || i==Y-1)
			{
				map[i][j] = '-';
			}
			else if(i>0 && i<Y-1)
			{
				if(j==0 || j==X-1)
				{
					map[i][j] = '|';
				}
				else
				{
					if(i==*y && j==*x)
					{
						map[i][j] = *head;
					}
					else
					{
						if(map[i][j]=='F')
						{
							
						}
						else
						{
							map[i][j] = ' ';
						}
					}
				}
			}
		}
	}
	
	for(i=0;i<*maxTail;i++)
	{
		map[yTail[i]][xTail[i]] = tail[i];
	}
	
	if(*makeFood==true)
	{
		do
		{
			locateFood(&xFood, &yFood);	
		}while(xFood==*x && yFood==*y);
		
		map[yFood][xFood] = 'F';
		
		*xEat = xFood;
		*yEat = yFood;
		
		*makeFood = false;
	}
}

void locateFood(int *xFood, int *yFood)
{
	int generateX, generateY;
	int tempX = X-2;
	int tempY = Y-2;
	
	generateX = (rand () % (tempX-1+1))+1;
	generateY = (rand () % (tempY-1+1))+1;
	
	*xFood = generateX;
	*yFood = generateY;
}

void renderMap(char map[Y][X])
{
	int i, j;
	
	for(i=0;i<Y;i++)
	{
		for(j=0;j<X;j++)
		{
			printf("%c", map[i][j]);
		}
		printf("\n");
	}
}

//INITIALIZE SNAKE ANATOMY =============================================================================================================================

void initTail(char tail[])
{
	int i;
	
	for(i=0;i<sizeTail;i++)
	{
		tail[i] = 254;
	}
}

void storeCoordinate(int xTail[], int yTail[])
{
	int i;
	
	for(i=sizeTail;i>0;i--)
	{
		xTail[i] = xTail[i-1];
		yTail[i] = yTail[i-1];
	}
}

//SNAKE MOVEMENT SIDE =============================================================================================================================

void moveUp(char *head, int *y, int *x, bool *crash, int *maxTail, int *yEat, int *xEat, bool *makeFood, int *score)
{
	*head = '^';
	
	if(*y==1)
	{
		*crash = true;
	}
	else
	{
		*y = *y - 1;
		
		if(*y==*yEat && *x==*xEat)
		{
			*makeFood = true;
			*maxTail = *maxTail + 1;
			*score = *score + 1;
		}
	}
}

void moveDown(char *head, int *y, int *x, bool *crash, int *maxTail, int *yEat, int *xEat, bool *makeFood, int *score)
{
	*head = 'v';
	
	if(*y==Y-2)
	{
		*crash = true;
	}
	else
	{
		*y = *y + 1;
		
		if(*y==*yEat && *x==*xEat)
		{
			*makeFood = true;
			*maxTail = *maxTail + 1;
			*score = *score + 1;
		}
	}
}

void moveRight(char *head, int *y, int *x, bool *crash, int *maxTail, int *yEat, int *xEat, bool *makeFood, int *score)
{
	*head = '>';
	
	if(*x==X-2)
	{
		*crash = true;
	}
	else
	{
		*x = *x + 1;
		
		if(*y==*yEat && *x==*xEat)
		{
			*makeFood = true;
			*maxTail = *maxTail + 1;
			*score = *score + 1;
		}
	}
}

void moveLeft(char *head, int *y, int *x, bool *crash, int *maxTail, int *yEat, int *xEat, bool *makeFood, int *score)
{
	*head = '<';
	
	if(*x==1)
	{
		*crash = true;
	}
	else
	{
		*x = *x - 1;
		
		if(*y==*yEat && *x==*xEat)
		{
			*makeFood = true;
			*maxTail = *maxTail + 1;
			*score = *score + 1;
		}
	}
}


//HISTORY SIDE =============================================================================================================================

void initHistory(History history[])
{
	int i, j;
	
	for(i=0;i<sizeHistory;i++)
	{
		for(j=0;j<sizeHistory;j++)
		{
			history[i].name[j] = ' ';
			history[i].dateTime[j] = ' ';
			history[i].highScore[j] = ' ';
		}
	}
}

void showHistory(History history[], int *dataCount)
{
	int i, j;
	
	for(i=0;i<*dataCount;i++)
	{
		for(j=0;j<sizeHistory;j++)
		{
			printf("%c", history[i].name[j]);
		}
		
		printf("\n");
		
		for(j=0;j<sizeHistory;j++)
		{
			printf("%c", history[i].highScore[j]);
		}
		
		printf("\n");
		
		for(j=0;j<sizeHistory;j++)
		{
			printf("%c", history[i].dateTime[j]);
		}
		
		printf("\n=========================================================================\n");
	}
}

void showHistoryFind(History history[], string *name, int *dataCount)
{
	char tempName[sizeHistory];
	int i, j, k;
	
	for(i=0;i<*dataCount;i++)
	{
		k = 0;
		
		for(j=7;history[i].name[j]!=' ';j++)
		{
			tempName[k] = history[i].name[j];
			k++;
		}
		
		tempName[k] = '\0';
		
		if(strcmp(tempName, *name)==0)
		{
			for(j=0;j<sizeHistory;j++)
			{
				printf("%c", history[i].name[j]);
			}
			
			printf("\n");
		
			for(j=0;j<sizeHistory;j++)
			{
				printf("%c", history[i].highScore[j]);
			}
			
			printf("\n");
			
			for(j=0;j<sizeHistory;j++)
			{
				printf("%c", history[i].dateTime[j]);
			}
			
			printf("\n=========================================================================\n");
		}
	}
}

//WORKING WITH FILE SIDE =============================================================================================================================

void copyDataToSystem(History history[], FILE *transferData, int *dataCount)
{
	int i, j;
	int count;
	char tempCh;
	
	count = 1;
	
	i = 0;
	j = 0;
	
	while((tempCh = getc(transferData))!=EOF)
	{
		if(tempCh=='\n')
		{
			if(count==3)
			{
				count = 1;
				i++;
				j = 0;
				*dataCount = *dataCount + 1;
			}
			else
			{
				count++;
				j = 0;
			}
		}
		else
		{
			if(count==1)
			{
				history[i].name[j] = tempCh;
				j++;
			}
			else if(count==2)
			{
				history[i].highScore[j] = tempCh;
				j++;
			}
			else if(count==3)
			{
				history[i].dateTime[j] = tempCh;
				j++;
			}
		}
	}
}
