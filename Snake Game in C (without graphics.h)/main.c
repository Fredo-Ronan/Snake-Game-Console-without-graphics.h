#include "header.h"

void main() {
	char map[Y][X];
	char tail[sizeTail];
	char head = '^';
	char directions = 'w';
	char tempDirect;
	char confirm;
	char exit;
	int x, y, maxTail, i;
	int xTail[sizeTail];
	int yTail[sizeTail];
	int xEat, yEat, score;
	int menu, choice, dataCount;
	bool crash, makeFood, aktif, updateData, space;
	string name;
	History history[sizeHistory];
	srand(time(NULL));
	
	dataCount = 0;
	
	FILE *createData;
	FILE *transferData;
	FILE *storeData;
	
	initHistory(history);
	
	transferData = fopen("history.txt", "r");
	
	if(transferData==NULL)
	{
		//create history file
		createData = fopen("history.txt", "w");
		fclose(createData);
	}
	else
	{
		//copy file to system
		copyDataToSystem(history, transferData, &dataCount);
	}
	
	fclose(transferData);
	
	system("color 0A");
	
	updateData = false;
	
	do
	{
		if(updateData==true)
		{
			transferData = fopen("history.txt", "r");
			copyDataToSystem(history, transferData, &dataCount);
			fclose(transferData);
			updateData = false;
		}
		
		space = false;
		
		system("cls");
		printf("\n\n\t\t\tWELCOME TO SNAKE GAME");
		
		printf("\n\t[1] Start Game");
		printf("\n\t[2] See History");
		printf("\n\t[0] Exit");
		printf("\n\t>> ");scanf("%d", &menu);
		
		switch(menu)
		{
			case 1:
				//start game
				system("cls");
				directions = 'w';
				printf("\t\t\tGame About to start!");
				printf("\n\n\tUse W A S D to control the snake");
				printf("\n\tPress P to pause the game");
				printf("\n\n\t[TIP] >>> Maximize this window to make the game visual better");
				
				printf("\n\n\n\t\tPress Any key to start or press (esc) to cancel.....");
				
				confirm = getch();
				
				do
				{
					space = false;
					printf("\n\n\tEnter Your Name : ");fflush(stdin);gets(name);
					
					for(i=0;name[i]!='\0';i++)
					{
						if(name[i]==' ')
						{
							space = true;
							
							printf("\n\tName cannot contain spaces [!]");
							
							getch();
						}
					}
				}while(space==true);
				
				
				if(confirm!=esc)
				{
					x = X/2;
					y = Y/2;
					
					maxTail = 1;
					score = 0;
					
					initTail(tail);
					
					aktif = true;
					crash = false;
					makeFood = true;
					
					xTail[0] = x;
					yTail[0] = y;
				
					while(aktif==true)
					{
						while(aktif==true && !kbhit())
						{
							tempDirect = directions;
							createMap(map, &x, &y, &head, tail, xTail, yTail, &maxTail, &makeFood, &xEat, &yEat);
							
							system("cls");
							
							printf("\n\tx = %d\n", x);
							printf("\ty = %d\n\n", y);
							
							printf("\tScore = %d\n\n", score);
							
							renderMap(map);
							
							storeCoordinate(xTail, yTail);
							
							xTail[0] = x;
							yTail[0] = y;
							
							switch(directions)
							{
								case 'a':
									moveLeft(&head, &y, &x, &crash, &maxTail, &yEat, &xEat, &makeFood, &score);
								break;
								
								case 'd':
									moveRight(&head, &y, &x, &crash, &maxTail, &yEat, &xEat, &makeFood, &score);
								break;
								
								case 's':
									moveDown(&head, &y, &x, &crash, &maxTail, &yEat, &xEat, &makeFood, &score);
								break;
								
								case 'w':
									moveUp(&head, &y, &x, &crash, &maxTail, &yEat, &xEat, &makeFood, &score);
								break;
							}
							
							
							if(crash==true)
							{
								aktif = false;
								
								time_t waktu = time(NULL);
								
								struct tm tm = *localtime(&waktu);
								
								printf("\n\n\t\t\tOh no!!!");
								printf("\n\n\t\tYour score is : %d", score);
								
//								printf("\n\n\tAchieved on (Date and Time) : %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min, tm.tm_sec);
								
								storeData = fopen("history.txt", "a");
								
								fprintf(storeData, "Name : %s\n", name);
								fprintf(storeData, "Score : %d\n", score);
								fprintf(storeData, "Achieved on (Date and Time) : %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, 
																												  tm.tm_hour, tm.tm_min, tm.tm_sec);
//								fprintf(storeData, "----------------------------------------------------------------------------------\n");
								
								fclose(storeData);
								
								updateData = true;
								
								do
								{
									printf("\n\n\t\tPress ENTER key to go back to menu....");
									exit = getch();
								}while(exit!=13);
							}
							
				//			usleep(10000);
				//			sleep(1);
						}
						
						if(aktif==true)
						{
							directions = getch();
						}
						
						if(directions=='p')
						{
							system("pause");
							directions = tempDirect;
						}
					}
				}
				else
				{
					printf("\n\n\tCanceled....(Wait about 5 seconds to go back to main menu)");
					sleep(5);
				}
			break;
			
			case 2:
				//see history
				
				if(dataCount==0)
				{
					printf("\n\nThere was nobody played this game yet before :(");
					getch();
				}
				else
				{
					do
					{
						system("cls");
					
						printf("\n\t\t+++ HISTORY +++\n\n");
						
						printf("[1] Show All\n");
						printf("[2] Find certain player name\n");
						printf("[0] Back\n");
						printf(">> ");scanf("%d", &choice);
						
						printf("\n\n");
						
						switch(choice)
						{
							case 1:
								//show all history
								showHistory(history, &dataCount);
								getch();
							break;
							
							case 2:
								//find certain player name
								printf("\tEnter Player Name : ");fflush(stdin);gets(name);
								
								printf("\n");
								
								showHistoryFind(history, &name, &dataCount);
								getch();
							break;
							
							case 0:
								//back
							break;
						}
						
					}while(choice!=0);
				}
			break;
			
			case 0:
				//exit
			break;
		}
	}while(menu!=0);
}
