#include <conio.h> 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <Windows.h>

int highscore_easy = 0;
int highscore_hard = 0;
char name1 [15];
char name2 [15];


int menu();
int welcome_screen();
void play_game();
void hard_mode();
void high_scores();
void help();
int exit_screen();
void main(void)
{
   int 
		select = 0,
		go = 1;

	welcome_screen();
	while (go == 1)
	{
		select = menu();
		switch (select)
		{
		case 1 :
			welcome_screen();
			break;
		case 2 :
			play_game();
			break;
		case 3 :
			hard_mode();
			break;
		case 4 :
			high_scores();
			break;
		case 5 :
			help();			
			break;
		case 6 :
			go = exit_screen();
			break;
		}
	}
}



//************************* MENU ************************************

int menu()
{
	int choice;
	 
	system ("COLOR 02");

	do
	{
	system("cls");

printf("\t\t\t ______   __  __     ______        ______     ______   __  __        ______     ______     __    __     ______   \n");    
printf("\t\t\t/\\__  _\\ /\\ \\_\\ \\   /\\  ___\\      /\\  ___\\   /\\  == \\ /\\ \\_\\ \\      /\\  ___\\   /\\  __ \\   /\\ \"-./  \\   /\\  ___\\  \n");    
printf("\t\t\t\\/_/\\ \\/ \\ \\  __ \\  \\ \\  __\\      \\ \\___  \\  \\ \\  _-/ \\ \\____ \\     \\ \\ \\__ \\  \\ \\  __ \\  \\ \\ \\-./\\ \\  \\ \\  __\\  \n");    
printf("\t\t\t   \\ \\_\\  \\ \\_\\ \\_\\  \\ \\_____\\     \\/\\_____\\  \\ \\_\\    \\/\\_____\\     \\ \\_____\\  \\ \\_\\ \\_\\  \\ \\_\\ \\ \\_\\  \\ \\_____\\\n");    
printf("\t\t\t    \\/_/   \\/_/\\/_/   \\/_____/      \\/_____/   \\/_/     \\/_____/      \\/_____/   \\/_/\\/_/   \\/_/  \\/_/   \\/_____/\n");    

	printf("\t\t\t*******************************************************************************************************************\n\n");

	
	                                                                                                      
printf("\t\t\t   ___        ____  _         _             _ _ _     _                       _____                      \n");
printf("\t\t\t  |_  |      |    \\|_|___ ___| |___ _ _    | | | |___| |___ ___ _____ ___    |   __|___ ___ ___ ___ ___ \n ");
printf("\t\t\t   _| |_ _   |  |  | |_ -| . | | .'| | |   | | | | -_| |  _| . |     | -_|   |__   |  _|  _| -_| -_|   | \n");
printf("\t\t\t  |_____|_|  |____/|_|___|  _|_|__,|_  |   |_____|___|_|___|___|_|_|_|___|   |_____|___|_| |___|___|_|_| \n");
printf("\t\t\t                         |_|       |___|                                                                 \n");


                                                  
printf("\t\t\t   ___       _____                _____       _      \n");
printf("\t\t\t  |_  |     |   __|___ ___ _ _   |     |___ _| |___  \n");
printf("\t\t\t  |  _|_    |   __| .'|_ -| | |  | | | | . | . | -_| \n");
printf("\t\t\t  |___|_|   |_____|__,|___|_  |  |_|_|_|___|___|___| \n");
printf("\t\t\t                          |___|                      \n");


                                                  
printf("\t\t\t   ___       _____           _    _____       _     \n");
printf("\t\t\t  |_  |     |  |  |___ ___ _| |  |     |___ _| |___ \n");
printf("\t\t\t  |_  |_    |     | .'|  _| . |  | | | | . | . | -_|\n");
printf("\t\t\t  |___|_|   |__|__|__,|_| |___|  |_|_|_|___|___|___|\n");

                                                        
printf("\t\t\t   ___       _____ _     _      _____                     \n");
printf("\t\t\t  | | |     |  |  |_|___| |_   |   __|___ ___ ___ ___ ___ \n");
printf("\t\t\t  |_  |_    |     | | . |   |  |__   |  _| . |  _| -_|_ -|\n");
printf("\t\t\t    |_|_|   |__|__|_|_  |_|_|  |_____|___|___|_| |___|___|\n");
printf("\t\t\t                    |___|                                 \n");


                                 
printf("\t\t\t   ___      _____     _     \n");
printf("\t\t\t  |  _|    |  |  |___| |___ \n");
printf("\t\t\t  |_  |_   |     | -_| | . |\n");
printf("\t\t\t  |___|_|  |__|__|___|_|  _|\n");
printf("\t\t\t                       |_|  \n");


                                 
printf("\t\t\t   ___      _____     _ _    \n");
printf("\t\t\t  |  _|    |   __|_ _|_| |_  \n");
printf("\t\t\t  | . |_   |   __|_'_| |  _| \n");
printf("\t\t\t  |___|_|  |_____|_,_|_|_|   \n\n");
                    
	

	printf("Select one of the above options...> ");
	scanf("%d",&choice);

	if (choice < 1 || choice > 6)
	{
		printf("?Incorrect input. Press any key to continue..\n?");
		getch();
	}
}
	while(choice < 1 || choice > 6);

	return choice;
}



//************************* WELCOME SCREEN ************************

int welcome_screen()
{

	system("cls");

system ("COLOR 02");

printf("\t\t\t _______ _               _____                 _    _             _____        __ _ _ _             _           _   _ 	  \n");
printf("\t\t\t|__   __| |             / ____|               | |  | |           |_   _|      / _(_) | |           | |         | | | |	  \n");
printf("\t\t\t   | |  | |__   ___    | (___  _ __  _   _    | |__| | __ _ ___    | |  _ __ | |_ _| | |_ _ __ __ _| |_ ___  __| | | |	  \n");
printf("\t\t\t   | |  | '_ \\ / _ \\    \\___ \\| '_ \\| | | |   |  __  |/ _` / __|   | | | '_ \\|  _| | | __| '__/ _` | __/ _ \\/ _` | | |	  \n");
printf("\t\t\t   | |  | | | |  __/    ____) | |_) | |_| |   | |  | | (_| \\__ \\  _| |_| | | | | | | | |_| | | (_| | ||  __/ (_| | |_|	  \n");
printf("\t\t\t   |_|  |_| |_|\\___|   |_____/| .__/ \\__, |   |_|  |_|\\__,_|___/ |_____|_| |_|_| |_|_|\\__|_|  \\__,_|\\__\\___|\\__,_| (_)	  \n");
printf("\t\t\t                              | |     __/ |                                                                           	  \n");
printf("\t\t\t                              |_|    |___/																				  \n\n");



cprintf("                                                                  _       ______             _______ _               _____ _____              _____ _       \n");
cprintf("        /\\               /\\                 /\\                   | |     |  ____|           |__   __| |             / ____|_   _|   /\\       |_   _| |      \n");
cprintf("       /  \\   ___       /  \\   _ __        /  \\   __ _  ___ _ __ | |_    | |__ ___  _ __       | |  | |__   ___    | |      | |    /  \\        | | | |_ ___ \n");
cprintf("      / /\\ \\ / __|     / /\\ \\ | '_ \\      / /\\ \\ / _` |/ _ \\ '_ \\| __|   |  __/ _ \\| '__|      | |  | '_ \\ / _ \\   | |      | |   / /\\ \\       | | | __/ __|\n");
cprintf("     / ____ \\\\__ \\    / ____ \\| | | |    / ____ \\ (_| |  __/ | | | |_    | | | (_) | |         | |  | | | |  __/   | |____ _| |_ / ____ \\     _| |_| |_\\__ \\\n");
cprintf("    /_/    \\_\\___/   /_/    \\_\\_| |_|   /_/    \\_\\__, |\\___|_| |_|\\__|   |_|  \\___/|_|         |_|  |_| |_|\\___|    \\_____|_____/_/    \\_\\   |_____|\\__|___/\n");
cprintf("                                                  __/ |                                                                                                     \n");
cprintf("                                                 |___/                                                                                                     \n\n");


cprintf("\t\t  _____       __     __                      _       _       _______       _____           _            _      _______ _             \n");
cprintf("\t\t |_   _|      \\ \\   / /                     | |     | |     |__   __|     |  __ \\         | |          | |    |__   __| |            \n");
cprintf("\t\t   | |  ___    \\ \\_/ /__  _   _ _ __        | | ___ | |__      | | ___    | |__) | __ ___ | |_ ___  ___| |_      | |  | |__   ___    \n");
cprintf("\t\t   | | / __|    \\   / _ \\| | | | '__|   _   | |/ _ \\| '_ \\     | |/ _ \\   |  ___/ '__/ _ \\| __/ _ \\/ __| __|     | |  | '_ \\ / _ \\   \n");
cprintf("\t\t  _| |_\\__ \\     | | (_) | |_| | |     | |__| | (_) | |_) |    | | (_) |  | |   | | | (_) | ||  __/ (__| |_      | |  | | | |  __/   \n");
cprintf("\t\t |_____|___/     |_|\\___/ \\__,_|_|      \\____/ \\___/|_.__/     |_|\\___/   |_|   |_|  \\___/ \\__\\___|\\___|\\__|     |_|  |_| |_|\\___|   \n\n");
     

cprintf("\t\t\t\t\t\t\t  _____               _     _            _     _   \n");
cprintf("\t\t\t\t\t\t\t |  __ \\             (_)   | |          | |   | |  \n");
cprintf("\t\t\t\t\t\t\t | |__) | __ ___  ___ _  __| | ___ _ __ | |_  | |  \n");
cprintf("\t\t\t\t\t\t\t |  ___/ '__/ _ \\/ __| |/ _` |/ _ \\ '_ \\| __| | |  \n");
cprintf("\t\t\t\t\t\t\t | |   | | |  __/\\__ \\ | (_| |  __/ | | | |_  |_|  \n");
cprintf("\t\t\t\t\t\t\t |_|   |_|  \\___||___/_|\\__,_|\\___|_| |_|\\__| (_)  \n\n");
 
Sleep(5000);
system ("cls");


                                                                                                                                                                                   
printf("\t     _______ _                       _    _               ____                                   _____                     _       _______ _          \n");
printf("\t    |__   __| |                     | |  | |             |  _ \\                        /\\       |  __ \\                   | |     |__   __(_)         \n");
printf("\t       | |  | |__   ___ _ __ ___    | |__| | __ _ ___    | |_) | ___  ___ _ __        /  \\      | |__) |___  ___ ___ _ __ | |_       | |   _ _ __     \n");
printf("\t       | |  | '_ \\ / _ \\ '__/ _ \\   |  __  |/ _` / __|   |  _ < / _ \\/ _ \\ '_ \\      / /\\ \\     |  _  // _ \\/ __/ _ \\ '_ \\| __|      | |  | | '_ \\    \n");
printf("\t       | |  | | | |  __/ | |  __/   | |  | | (_| \\__ \\   | |_) |  __/  __/ | | |    / ____ \\    | | \\ \\  __/ (_|  __/ | | | |_       | |  | | |_) |   \n");
printf("\t       |_|  |_| |_|\\___|_|  \\___|   |_|  |_|\\__,_|___/   |____/ \\___|\\___|_| |_|   /_/    \\_\\   |_|  \\_\\___|\\___\\___|_| |_|\\__|      |_|  |_| .__/    \n");
printf("\t                                                                                                                                            | |       \n");
printf("\t                                                                                                                                            |_|       \n\n");                                                                                                                                
    

printf("   ____   __  __    _______ _           _                 _____               _                _____                _    _              ____                  	\n");
printf("  / __ \\ / _|/ _|  |__   __| |         | |        /\\     |  __ \\             (_)              / ____|              | |  | |            |  _ \\                 	\n");
printf(" | |  | | |_| |_      | |  | |__   __ _| |_      /  \\    | |__) |   _ ___ ___ _  __ _ _ __   | (___  _ __  _   _   | |__| | __ _ ___   | |_) | ___  ___ _ __  	\n");
printf(" | |  | |  _|  _|     | |  | '_ \\ / _` | __|    / /\\ \\   |  _  / | | / __/ __| |/ _` | '_ \\   \\___ \\| '_ \\| | | |  |  __  |/ _` / __|  |  _ < / _ \\/ _ \\ '_ \\ 	\n");
printf(" | |__| | | | |       | |  | | | | (_| | |_    / ____ \\  | | \\ \\ |_| \\__ \\__ \\ | (_| | | | |  ____) | |_) | |_| |  | |  | | (_| \\__ \\  | |_) |  __/  __/ | | |	\n");
printf("  \\____/|_| |_|       |_|  |_| |_|\\__,_|\\__|  /_/    \\_\\ |_|  \\_\\__,_|___/___/_|\\__,_|_| |_| |_____/| .__/ \\__, |  |_|  |_|\\__,_|___/  |____/ \\___|\\___|_| |_|	\n");
printf("                                                                                                    | |     __/ |                                             	\n");
printf("                                                                                                    |_|    |___/                                              	\n\n");

printf("\t   _____ _       _                      __  __ _         _               _______                                      _             _        \n");
printf("\t  / ____(_)     (_)            /\\      |  \\/  (_)       (_)             |__   __|         /\\                         (_)           | |       \n");
printf("\t | |  __ ___   ___ _ __       /  \\     | \\  / |_ ___ ___ _  ___  _ __      | | ___       /  \\   ___ ___  __ _ ___ ___ _ _ __   __ _| |_ ___  \n");
printf("\t | | |_ | \\ \\ / / | '_ \\     / /\\ \\    | |\\/| | / __/ __| |/ _ \\| '_ \\     | |/ _ \\     / /\\ \\ / __/ __|/ _` / __/ __| | '_ \\ / _` | __/ _ \\ \n");
printf("\t | |__| | |\\ V /| | | | |   / ____ \\   | |  | | \\__ \\__ \\ | (_) | | | |    | | (_) |   / ____ \\\\__ \\__ \\ (_| \\__ \\__ \\ | | | | (_| | ||  __/ \n");
printf("\t  \\_____|_| \\_/ |_|_| |_|  /_/    \\_\\  |_|  |_|_|___/___/_|\\___/|_| |_|    |_|\\___/   /_/    \\_\\___/___/\\__,_|___/___/_|_| |_|\\__,_|\\__\\___| \n\n");

printf("\t\t\t\t\t  ____                       _        ____  _                             _  \n");
printf("\t\t\t\t\t |  _ \\                     | |      / __ \\| |                           | | \n");
printf("\t\t\t\t\t | |_) | __ _ _ __ __ _  ___| | __  | |  | | |__   __ _ _ __ ___   __ _  | | \n");
printf("\t\t\t\t\t |  _ < / _` | '__/ _` |/ __| |/ /  | |  | | '_ \\ / _` | '_ ` _ \\ / _` | | | \n");
printf("\t\t\t\t\t | |_) | (_| | | | (_| | (__|   <   | |__| | |_) | (_| | | | | | | (_| | |_| \n");
printf("\t\t\t\t\t |____/ \\__,_|_|  \\__,_|\\___|_|\\_\\   \\____/|_.__/ \\__,_|_| |_| |_|\\__,_| (_) \n\n");

Sleep(5000);
system("cls");


printf("\t  _____ _      _       __     __                 _____        _           _______       _____           _            _      _______ _           \n"); 
printf("\t |_   _| |    (_)      \\ \\   / /                |  __ \\      | |         |__   __|     |  __ \\         | |          | |    |__   __| |          \n"); 
printf("\t   | | | |_    _ ___    \\ \\_/ /__  _   _ _ __   | |  | |_   _| |_ _   _     | | ___    | |__) | __ ___ | |_ ___  ___| |_      | |  | |__   ___  \n"); 
printf("\t   | | | __|  | / __|    \\   / _ \\| | | | '__|  | |  | | | | | __| | | |    | |/ _ \\   |  ___/ '__/ _ \\| __/ _ \\/ __| __|     | |  | '_ \\ / _ \\ \n"); 
printf("\t  _| |_| |_   | \\__ \\     | | (_) | |_| | |     | |__| | |_| | |_| |_| |    | | (_) |  | |   | | | (_) | ||  __/ (__| |_      | |  | | | |  __/ \n"); 
printf("\t |_____|\\__|  |_|___/     |_|\\___/ \\__,_|_|     |_____/ \\__,_|\\__|\\__, |    |_|\\___/   |_|   |_|  \\___/ \\__\\___|\\___|\\__|     |_|  |_| |_|\\___| \n"); 
printf("\t                                                                   __/ |                                                                        \n"); 
printf("\t                                                                  |___/                                                                         \n\n"); 

printf("\t\t  _____               _     _            _                         _    _    _ _        ______              _ _         _ \n");
printf("\t\t |  __ \\             (_)   | |          | |        /\\             | |  | |  | (_)      |  ____|            (_) |       | |\n");
printf("\t\t | |__) | __ ___  ___ _  __| | ___ _ __ | |_      /  \\   _ __   __| |  | |__| |_ ___   | |__ __ _ _ __ ___  _| |_   _  | |\n");
printf("\t\t |  ___/ '__/ _ \\/ __| |/ _` |/ _ \\ '_ \\| __|    / /\\ \\ | '_ \\ / _` |  |  __  | / __|  |  __/ _` | '_ ` _ \\| | | | | | | |\n");
printf("\t\t | |   | | |  __/\\__ \\ | (_| |  __/ | | | |_    / ____ \\| | | | (_| |  | |  | | \\__ \\  | | | (_| | | | | | | | | |_| | |_|\n");
printf("\t\t |_|   |_|  \\___||___/_|\\__,_|\\___|_| |_|\\__|  /_/    \\_\\_| |_|\\__,_|  |_|  |_|_|___/  |_|  \\__,_|_| |_| |_|_|_|\\__, | (_)\n");
printf("\t\t                                                                                                                 __/ |    \n");
printf("\t\t                                                                                                                |___/     \n\n");

Sleep(5000);
system("cls");


printf("\t  _                     _          _______ _                                            _                             _   __     __               \n");
printf("\t | |                   | |        |__   __| |               /\\                         (_)            /\\             | |  \\ \\   / /               \n");
printf("\t | |     ___   ___ __ _| |_ ___      | |  | |__   ___      /  \\   ___ ___  __ _ ___ ___ _ _ __       /  \\   _ __   __| |   \\ \\_/ /__  _   _ _ __  \n");
printf("\t | |    / _ \\ / __/ _` | __/ _ \\     | |  | '_ \\ / _ \\    / /\\ \\ / __/ __|/ _` / __/ __| | '_ \\     / /\\ \\ | '_ \\ / _` |    \\   / _ \\| | | | '__| \n");
printf("\t | |___| (_) | (_| (_| | ||  __/     | |  | | | |  __/   / ____ \\\\__ \\__ \\ (_| \\__ \\__ \\ | | | |   / ____ \\| | | | (_| |     | | (_) | |_| | |    \n");
printf("\t |______\\___/ \\___\\__,_|\\__\\___|     |_|  |_| |_|\\___|  /_/    \\_\\___/___/\\__,_|___/___/_|_| |_|  /_/    \\_\\_| |_|\\__,_|     |_|\\___/ \\__,_|_|    \n\n");
                                                                                                                                                 
                                                                                                                                                 
                                                                            
printf("\t\t\t\t\t  _____        _   _                                    _____                      _      _         \n");           
printf("\t\t\t\t\t |  __ \\      | | (_)                /\\                / ____|                    | |    | |      	\n");
printf("\t\t\t\t\t | |  | |_   _| |_ _  ___  ___      /  \\   _ __ ___   | |     ___  _ __ ___  _ __ | | ___| |_ ___ 	\n");
printf("\t\t\t\t\t | |  | | | | | __| |/ _ \\/ __|    / /\\ \\ | '__/ _ \\  | |    / _ \\| '_ ` _ \\| '_ \\| |/ _ \\ __/ _ \\	\n");
printf("\t\t\t\t\t | |__| | |_| | |_| |  __/\\__ \\   / ____ \\| | |  __/  | |___| (_) | | | | | | |_) | |  __/ ||  __/	\n");
printf("\t\t\t\t\t |_____/ \\__,_|\\__|_|\\___||___/  /_/    \\_\\_|  \\___|   \\_____\\___/|_| |_| |_| .__/|_|\\___|\\__\\___|	\n");
printf("\t\t\t\t\t                                                                            | |                   	\n");
printf("\t\t\t\t\t                                                                            |_|                     \n");                                                                  
 
                                                                                                                                   
Sleep(3000);

system("cls");
printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t88888888888      888    888      8888888888\n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          8888888888      8888888   \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      8888888888\n"); 
                                            
Sleep(300);
system("COLOR 1");
system("cls");

printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t88888888888      888    888      8888888888\n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          8888888888      8888888   \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      8888888888\n"); 

Sleep(300);
system("COLOR 2");
system("cls");

printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t88888888888      888    888      8888888888\n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          8888888888      8888888   \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      8888888888\n"); 

Sleep(300);
system("COLOR 3");
system("cls");

printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t88888888888      888    888      8888888888\n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          8888888888      8888888   \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      8888888888\n"); 

Sleep(300);
system("COLOR 4");
system("cls");

printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t88888888888      888    888      8888888888\n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          8888888888      8888888   \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      8888888888\n"); 

Sleep(300);
system("COLOR 5");
system("cls");


printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t88888888888      888    888      8888888888\n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          8888888888      8888888   \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      8888888888\n"); 


Sleep(300);
system("COLOR 1");
system("cls");


printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t .d8888b.       8888888b.       Y88b   d88P \n");
printf("\t\t\t\t\t\t\td88P  Y88b      888   Y88b       Y88b d88P  \n");
printf("\t\t\t\t\t\t\tY88b.           888    888        Y88o88P   \n");
printf("\t\t\t\t\t\t\t \"Y888b.        888   d88P         Y888P   \n ");
printf("\t\t\t\t\t\t\t    \"Y88b.      8888888P\"           888   \n  ");
printf("\t\t\t\t\t\t\t      \"888      888                 888    \n ");
printf("\t\t\t\t\t\t\tY88b  d88P      888                 888     \n");
printf("\t\t\t\t\t\t\t \"Y8888P\"       888                 888   \n  ");
                                            
 Sleep(300);
system("COLOR 2");
system("cls");                                   
                                            
printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t .d8888b.       8888888b.       Y88b   d88P \n");
printf("\t\t\t\t\t\t\td88P  Y88b      888   Y88b       Y88b d88P  \n");
printf("\t\t\t\t\t\t\tY88b.           888    888        Y88o88P   \n");
printf("\t\t\t\t\t\t\t \"Y888b.        888   d88P         Y888P   \n ");
printf("\t\t\t\t\t\t\t    \"Y88b.      8888888P\"           888   \n  ");
printf("\t\t\t\t\t\t\t      \"888      888                 888    \n ");
printf("\t\t\t\t\t\t\tY88b  d88P      888                 888     \n");
printf("\t\t\t\t\t\t\t \"Y8888P\"       888                 888   \n  ");
                                            
Sleep(300);
system("COLOR 3");
system("cls");

printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t .d8888b.       8888888b.       Y88b   d88P \n");
printf("\t\t\t\t\t\t\td88P  Y88b      888   Y88b       Y88b d88P  \n");
printf("\t\t\t\t\t\t\tY88b.           888    888        Y88o88P   \n");
printf("\t\t\t\t\t\t\t \"Y888b.        888   d88P         Y888P   \n ");
printf("\t\t\t\t\t\t\t    \"Y88b.      8888888P\"           888   \n  ");
printf("\t\t\t\t\t\t\t      \"888      888                 888    \n ");
printf("\t\t\t\t\t\t\tY88b  d88P      888                 888     \n");
printf("\t\t\t\t\t\t\t \"Y8888P\"       888                 888   \n  ");


Sleep(300);
system("COLOR 7");
system("cls");



printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t .d8888b.       8888888b.       Y88b   d88P \n");
printf("\t\t\t\t\t\t\td88P  Y88b      888   Y88b       Y88b d88P  \n");
printf("\t\t\t\t\t\t\tY88b.           888    888        Y88o88P   \n");
printf("\t\t\t\t\t\t\t \"Y888b.        888   d88P         Y888P   \n ");
printf("\t\t\t\t\t\t\t    \"Y88b.      8888888P\"           888   \n  ");
printf("\t\t\t\t\t\t\t      \"888      888                 888    \n ");
printf("\t\t\t\t\t\t\tY88b  d88P      888                 888     \n");
printf("\t\t\t\t\t\t\t \"Y8888P\"       888                 888   \n  ");



Sleep(300);
system("COLOR 1");
system("cls");



printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t .d8888b.       8888888b.       Y88b   d88P \n");
printf("\t\t\t\t\t\t\td88P  Y88b      888   Y88b       Y88b d88P  \n");
printf("\t\t\t\t\t\t\tY88b.           888    888        Y88o88P   \n");
printf("\t\t\t\t\t\t\t \"Y888b.        888   d88P         Y888P   \n ");
printf("\t\t\t\t\t\t\t    \"Y88b.      8888888P\"           888   \n  ");
printf("\t\t\t\t\t\t\t      \"888      888                 888    \n ");
printf("\t\t\t\t\t\t\tY88b  d88P      888                 888     \n");
printf("\t\t\t\t\t\t\t \"Y8888P\"       888                 888   \n  ");



Sleep(300);
system("COLOR 6");
system("cls");




printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t .d8888b.       8888888b.       Y88b   d88P \n");
printf("\t\t\t\t\t\t\td88P  Y88b      888   Y88b       Y88b d88P  \n");
printf("\t\t\t\t\t\t\tY88b.           888    888        Y88o88P   \n");
printf("\t\t\t\t\t\t\t \"Y888b.        888   d88P         Y888P   \n ");
printf("\t\t\t\t\t\t\t    \"Y88b.      8888888P\"           888   \n  ");
printf("\t\t\t\t\t\t\t      \"888      888                 888    \n ");
printf("\t\t\t\t\t\t\tY88b  d88P      888                 888     \n");
printf("\t\t\t\t\t\t\t \"Y8888P\"       888                 888   \n  ");


Sleep(300);
system("COLOR 1");
system("cls");


printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t        .d8888b.              d8888      888b     d888      8888888888 \n");
printf("\t\t\t\t\t       d88P  Y88b            d88888      8888b   d8888      888        \n");
printf("\t\t\t\t\t       888    888           d88P888      88888b.d88888      888        \n");
printf("\t\t\t\t\t       888                 d88P 888      888Y88888P888      8888888    \n");
printf("\t\t\t\t\t       888  88888         d88P  888      888 Y888P 888      888        \n");
printf("\t\t\t\t\t       888    888        d88P   888      888  Y8P  888      888        \n");
printf("\t\t\t\t\t       Y88b  d88P       d8888888888      888   \"   888      888        \n");
printf("\t\t\t\t\t        \"Y8888P88      d88P     888      888       888      8888888888 \n");
                                                                
                
Sleep(300);
system("COLOR 2");
system("cls");
                                                                
printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t        .d8888b.              d8888      888b     d888      8888888888 \n");
printf("\t\t\t\t\t       d88P  Y88b            d88888      8888b   d8888      888        \n");
printf("\t\t\t\t\t       888    888           d88P888      88888b.d88888      888        \n");
printf("\t\t\t\t\t       888                 d88P 888      888Y88888P888      8888888    \n");
printf("\t\t\t\t\t       888  88888         d88P  888      888 Y888P 888      888        \n");
printf("\t\t\t\t\t       888    888        d88P   888      888  Y8P  888      888        \n");
printf("\t\t\t\t\t       Y88b  d88P       d8888888888      888   \"   888      888        \n");
printf("\t\t\t\t\t        \"Y8888P88      d88P     888      888       888      8888888888 \n");


Sleep(300);
system("COLOR 3");
system("cls");




printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t        .d8888b.              d8888      888b     d888      8888888888 \n");
printf("\t\t\t\t\t       d88P  Y88b            d88888      8888b   d8888      888        \n");
printf("\t\t\t\t\t       888    888           d88P888      88888b.d88888      888        \n");
printf("\t\t\t\t\t       888                 d88P 888      888Y88888P888      8888888    \n");
printf("\t\t\t\t\t       888  88888         d88P  888      888 Y888P 888      888        \n");
printf("\t\t\t\t\t       888    888        d88P   888      888  Y8P  888      888        \n");
printf("\t\t\t\t\t       Y88b  d88P       d8888888888      888   \"   888      888        \n");
printf("\t\t\t\t\t        \"Y8888P88      d88P     888      888       888      8888888888 \n");



Sleep(300);
system("COLOR 7");
system("cls");




printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t        .d8888b.              d8888      888b     d888      8888888888 \n");
printf("\t\t\t\t\t       d88P  Y88b            d88888      8888b   d8888      888        \n");
printf("\t\t\t\t\t       888    888           d88P888      88888b.d88888      888        \n");
printf("\t\t\t\t\t       888                 d88P 888      888Y88888P888      8888888    \n");
printf("\t\t\t\t\t       888  88888         d88P  888      888 Y888P 888      888        \n");
printf("\t\t\t\t\t       888    888        d88P   888      888  Y8P  888      888        \n");
printf("\t\t\t\t\t       Y88b  d88P       d8888888888      888   \"   888      888        \n");
printf("\t\t\t\t\t        \"Y8888P88      d88P     888      888       888      8888888888 \n");




Sleep(300);
system("COLOR 1");
system("cls");





printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t        .d8888b.              d8888      888b     d888      8888888888 \n");
printf("\t\t\t\t\t       d88P  Y88b            d88888      8888b   d8888      888        \n");
printf("\t\t\t\t\t       888    888           d88P888      88888b.d88888      888        \n");
printf("\t\t\t\t\t       888                 d88P 888      888Y88888P888      8888888    \n");
printf("\t\t\t\t\t       888  88888         d88P  888      888 Y888P 888      888        \n");
printf("\t\t\t\t\t       888    888        d88P   888      888  Y8P  888      888        \n");
printf("\t\t\t\t\t       Y88b  d88P       d8888888888      888   \"   888      888        \n");
printf("\t\t\t\t\t        \"Y8888P88      d88P     888      888       888      8888888888 \n");




Sleep(300);
system("COLOR 6");
system("cls");



printf ("\n\n\n\n\n\n\n");
printf("\t\t\t\t\t        .d8888b.              d8888      888b     d888      8888888888 \n");
printf("\t\t\t\t\t       d88P  Y88b            d88888      8888b   d8888      888        \n");
printf("\t\t\t\t\t       888    888           d88P888      88888b.d88888      888        \n");
printf("\t\t\t\t\t       888                 d88P 888      888Y88888P888      8888888    \n");
printf("\t\t\t\t\t       888  88888         d88P  888      888 Y888P 888      888        \n");
printf("\t\t\t\t\t       888    888        d88P   888      888  Y8P  888      888        \n");
printf("\t\t\t\t\t       Y88b  d88P       d8888888888      888   \"   888      888        \n");
printf("\t\t\t\t\t        \"Y8888P88      d88P     888      888       888      8888888888 \n");

system ("cls");

system("COLOR 2");

printf ("\n\n");
printf("\t\t\t\t\t\t\t88888888888      888    888      8888888888\n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          8888888888      8888888   \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      888       \n"); 
printf("\t\t\t\t\t\t\t    888          888    888      8888888888\n"); 


printf ("\n\n");
printf("\t\t\t\t\t\t\t .d8888b.       8888888b.       Y88b   d88P \n");
printf("\t\t\t\t\t\t\td88P  Y88b      888   Y88b       Y88b d88P  \n");
printf("\t\t\t\t\t\t\tY88b.           888    888        Y88o88P   \n");
printf("\t\t\t\t\t\t\t \"Y888b.        888   d88P         Y888P   \n ");
printf("\t\t\t\t\t\t\t    \"Y88b.      8888888P\"           888   \n  ");
printf("\t\t\t\t\t\t\t      \"888      888                 888    \n ");
printf("\t\t\t\t\t\t\tY88b  d88P      888                 888     \n");
printf("\t\t\t\t\t\t\t \"Y8888P\"       888                 888   \n  ");


printf ("\n\n");
printf("\t\t\t\t\t        .d8888b.              d8888      888b     d888      8888888888 \n");
printf("\t\t\t\t\t       d88P  Y88b            d88888      8888b   d8888      888        \n");
printf("\t\t\t\t\t       888    888           d88P888      88888b.d88888      888        \n");
printf("\t\t\t\t\t       888                 d88P 888      888Y88888P888      8888888    \n");
printf("\t\t\t\t\t       888  88888         d88P  888      888 Y888P 888      888        \n");
printf("\t\t\t\t\t       888    888        d88P   888      888  Y8P  888      888        \n");
printf("\t\t\t\t\t       Y88b  d88P       d8888888888      888   \"   888      888        \n");
printf("\t\t\t\t\t        \"Y8888P88      d88P     888      888       888      8888888888 \n");




   printf("                 _ _.-'`-._ _				  \n");
   printf("                ;.'________'.;				  \n");
   printf("     _________n.[____________].n_________	  \n");
   printf("    |\"\"_\"\"_\"\"_\"\"||==||==||==||\"\"_\"\"_\"\"_\"\"]	  \n");
   printf("    |\"\"\"\"\"\"\"\"\"\"\"||..||..||..||\"\"\"\"\"\"\"\"\"\"|	  \n");
   printf("    |LI LI LI LI||LI||LI||LI||LI LI LI LI|	  \n");
   printf("    |.. .. .. ..||..||..||..||.. .. .. ..|	  \n");
   printf("    |LI LI LI LI||LI||LI||LI||LI LI LI LI|	  \n");
   printf(" ,,;;,;;;,;;;,;;;,;;;,;;;,;;;,;;,;;;,;;;,;;,,  \n");
   printf(";;jgs;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; \n");


getch();

return 0;
}


//************************** PLAY GAME *****************************

void play_game()
{

	

		int select = 0,
			go = 1;
		int x = 0;
		int cord_x_axis_easy=0;
		int cord_y_axis_easy=0;
		char board[11][11],
			guesses[11][11];
		int y = 0;
		int i = 0;
		int guess_x = 0,
			guess_y = 0;
		int counter = 0,
			playerscore,
			xaxis = 1,
			yaxis = 1;

			//trap1 = 0,
			//trap2 = 0,
			//trap3 = 0,
			//trap4 = 0,
			//trap5 = 0,
			//trap6 = 0,
			//trap7 = 0,
			//trap8 = 0;

		unsigned int seed = (unsigned int) time (NULL);
		srand (seed);

		for (x = 0; x <=10; x++)
		{
			for (y = 0; y <=10; y++)
			{
				board[x][y]='*';
				
			}
		}


		
		cord_x_axis_easy= rand() % 10 + 1 ;
		cord_y_axis_easy= rand() % 10 + 1;
		//trap1 = rand() % 6 + 1;
		//trap2 = rand() % 6 + 1;
		//trap3 = rand() % 6 + 1;
		//trap4 = rand() % 6 + 1;
		//trap5 = rand() % 6 + 1;
		//trap6 = rand() % 6 + 1;
		//trap7 = rand() % 6 + 1;
		//trap8 = rand() % 6 + 1;
		//


		system("cls");

		board [cord_x_axis_easy][cord_y_axis_easy] = '*';
		
//		board [trap1][trap2] = '$';
//		board [trap3][trap4] = '$';
//		board [trap5][trap6] = '$';
//		board [trap7][trap8] = '$';
		


		//for (x = 1; x<=7;x++)
		//{
		//	board [x][0] = '-';
		//	board [x][7] = '-';
		//}

		//for (y = 0; y <=6; y++)
		//{
		//	board [0][y] = '-';
		//	board [7][y] = '-';
		//}

		

do
{
	system("cls");
printf("\t\t\t ______   __  __     ______        ______     ______   __  __        ______     ______     __    __     ______   \n");    
printf("\t\t\t/\\__  _\\ /\\ \\_\\ \\   /\\  ___\\      /\\  ___\\   /\\  == \\ /\\ \\_\\ \\      /\\  ___\\   /\\  __ \\   /\\ \"-./  \\   /\\  ___\\  \n");    
printf("\t\t\t\\/_/\\ \\/ \\ \\  __ \\  \\ \\  __\\      \\ \\___  \\  \\ \\  _-/ \\ \\____ \\     \\ \\ \\__ \\  \\ \\  __ \\  \\ \\ \\-./\\ \\  \\ \\  __\\  \n");    
printf("\t\t\t   \\ \\_\\  \\ \\_\\ \\_\\  \\ \\_____\\     \\/\\_____\\  \\ \\_\\    \\/\\_____\\     \\ \\_____\\  \\ \\_\\ \\_\\  \\ \\_\\ \\ \\_\\  \\ \\_____\\\n");    
printf("\t\t\t    \\/_/   \\/_/\\/_/   \\/_____/      \\/_____/   \\/_/     \\/_____/      \\/_____/   \\/_/\\/_/   \\/_/  \\/_/   \\/_____/\n");    
                                                                                                                     


		printf("\n\n\n");

		printf ("\t\t\t\t\t\t1\t2\t3\t4\t5\t6\t7\t\t8\t9\t10\n\n");



		for (y = 1; y <=10; y++)
		{
			printf ("\t\t\t\t\t%d", y);
			for (x = 1; x <=10; x++)
			{
		
				printf ("\t%c", board[x][y]);
			}
			printf("\n\n");
		}

	//printf("x=%d\n\n", cord_x_axis_easy);
	//printf("y=%d\n\n", cord_y_axis_easy);
	




	do
	{
		printf ("x-cord --->");
		scanf ("%d", & guess_x);
		
		//if (guess_x == trap1 && guess_y == trap2)
		//{
		//	printf("You have hit a trap! It has taken up an extra turn!");
		//	counter = counter + 1;
		//}
		//
		//if (guess_x == trap3 && guess_y == trap4)
		//{
		//	printf("You have hit a trap! It has taken up an extra turn!");
		//	counter = counter + 1;
		//}
		//
		//if (guess_x == trap5 && guess_y == trap6)
		//{
		//	printf("You have hit a trap! It has taken up an extra turn!");
		//	counter = counter + 1;
		//}
		//
		//if (guess_x == trap7 && guess_y == trap8)
		//{
		//	printf("You have hit a trap! It has taken up an extra turn!");
		//	counter = counter + 1;
		//}


		if (guess_x < 1 || guess_x > 10)
		{
			fflush(stdin);
			printf("Error, please enter a Valid Cordinate! (1-10) \n");
		}
	}
	
	while (guess_x < 1 || guess_x > 10);
	
	do
	{
	
		printf ("  y-cord --->");
		scanf ("%d", & guess_y);

		if (guess_y < 1 || guess_y > 10)
		{
			fflush(stdin);
			printf("Error, please enter a Valid Cordinate! (1-10) \n");
		}

	}	
			
	while (guess_y < 1 || guess_y > 10);


	if (guess_x == cord_x_axis_easy)
	{
		printf("The x-Cordinate is correct!\n");
	}

	else if (guess_x > cord_x_axis_easy)
	{
		printf("You are to high on the x-Cordinate!\n");
	}

	else if (guess_x < cord_x_axis_easy)
	{
		printf("You are to Low on the x-Cordinate!\n");
	}

	
	if (guess_y == cord_y_axis_easy)
	{
		printf("The y-Cordinate is correct!\n");
	}

	else if (guess_y > cord_y_axis_easy)
	{
		printf("You are to high on the y-Cordinate!\n");
	}

	else if (guess_y < cord_y_axis_easy)
	{
		printf("You are to Low on the y-Cordinate!\n");
	}
	counter = counter + 1;

	printf("\n");
	system ("pause");
	board[guess_x][guess_y] = '0';
}



while (guess_x != cord_x_axis_easy || guess_y != cord_y_axis_easy);



	if (guess_x == cord_x_axis_easy && guess_y == cord_y_axis_easy);
	{
		board[cord_x_axis_easy][cord_y_axis_easy] = '$';
		printf("You have located The spy!\n\n");
		printf("You Located the spy in %d Tries!\n", counter);
	}

	Sleep(5000);
	system ("cls");
	if (guess_x == cord_x_axis_easy && guess_y == cord_y_axis_easy)
	{
		
printf("       _____                            _         _       _   _                   _   __     __         _               _                     _           _ \n");
printf("      / ____|                          | |       | |     | | (_)                 | |  \\ \\   / /        ( )             | |                   | |         | |\n");
printf("     | |     ___  _ __   __ _ _ __ __ _| |_ _   _| | __ _| |_ _  ___  _ __  ___  | |   \\ \\_/ /__  _   _|/__   _____    | |     ___   ___ __ _| |_ ___  __| |\n");
printf("     | |    / _ \\| '_ \\ / _` | '__/ _` | __| | | | |/ _` | __| |/ _ \\| '_ \\/ __| | |    \\   / _ \\| | | | \\ \\ / / _ \\   | |    / _ \\ / __/ _` | __/ _ \\/ _` |\n");
printf("     | |___| (_) | | | | (_| | | | (_| | |_| |_| | | (_| | |_| | (_) | | | \\__ \\ |_|     | | (_) | |_| |  \\ V /  __/   | |___| (_) | (_| (_| | ||  __/ (_| |\n");
printf("      \\_____\\___/|_| |_|\\__, |_|  \\__,_|\\__|\\__,_|_|\\__,_|\\__|_|\\___/|_| |_|___/ (_)     |_|\\___/ \\__,_|   \\_/ \\___|   |______\\___/ \\___\\__,_|\\__\\___|\\__,_|\n");
printf("                         __/ |                                                                                                                              \n");
printf("                        |___/                                                                                                                               \n\n");

printf("\t\t\t\t  _______ _              _____                                   _     _____                     _ \n");
printf("\t\t\t\t |__   __| |            / ____|                  /\\             | |   / ____|                   | |\n");
printf("\t\t\t\t    | |  | |__   ___   | (___  _ __  _   _      /  \\   _ __   __| |  | (___   __ ___   _____  __| |\n");
printf("\t\t\t\t    | |  | '_ \\ / _ \\   \\___ \\| '_ \\| | | |    / /\\ \\ | '_ \\ / _` |   \\___ \\ / _` \\ \\ / / _ \\/ _` |\n");
printf("\t\t\t\t    | |  | | | |  __/   ____) | |_) | |_| |   / ____ \\| | | | (_| |   ____) | (_| |\\ V /  __/ (_| |\n");
printf("\t\t\t\t    |_|  |_| |_|\\___|  |_____/| .__/ \\__, |  /_/    \\_\\_| |_|\\__,_|  |_____/ \\__,_| \\_/ \\___|\\__,_|\n");
printf("\t\t\t\t                              | |     __/ |                                                        \n");
printf("\t\t\t\t                              |_|    |___/                                                         \n\n");


printf("\t\t\t\t\t\t  _______ _             _____               _     _            _     _ \n");
printf("\t\t\t\t\t\t |__   __| |           |  __ \\             (_)   | |          | |   | |\n");
printf("\t\t\t\t\t\t    | |  | |__   ___   | |__) | __ ___  ___ _  __| | ___ _ __ | |_  | |\n");
printf("\t\t\t\t\t\t    | |  | '_ \\ / _ \\  |  ___/ '__/ _ \\/ __| |/ _` |/ _ \\ '_ \\| __| | |\n");
printf("\t\t\t\t\t\t    | |  | | | |  __/  | |   | | |  __/\\__ \\ | (_| |  __/ | | | |_  |_|\n");
printf("\t\t\t\t\t\t    |_|  |_| |_|\\___|  |_|   |_|  \\___||___/_|\\__,_|\\___|_| |_|\\__| (_)\n");
                                                                       
                                                                       


printf("\t\t\t _______ _            __          ___     _ _       _                             _____         _____        __       _ \n");
printf("\t\t\t|__   __| |           \\ \\        / / |   (_) |     | |                           |_   _|       / ____|      / _|     | |\n");
printf("\t\t\t    | |  | |__   ___    \\ \\  /\\  / /| |__  _| |_ ___| |__   ___  _   _ ___  ___     | |  ___   | (___   __ _| |_ ___  | |\n");
printf("\t\t\t    | |  | '_ \\ / _ \\    \\ \\/  \\/ / | '_ \\| | __/ _ \\ '_ \\ / _ \\| | | / __|/ _ \\    | | / __|   \\___ \\ / _` |  _/ _ \\ | |\n");
printf("\t\t\t    | |  | | | |  __/     \\  /\\  /  | | | | | ||  __/ | | | (_) | |_| \\__ \\  __/   _| |_\\__ \\   ____) | (_| | ||  __/ |_|\n");
printf("\t\t\t    |_|  |_| |_|\\___|      \\/  \\/   |_| |_|_|\\__\\___|_| |_|\\___/ \\__,_|___/\\___|  |_____|___/  |_____/ \\__,_|_| \\___| (_)\n\n");
                                                                                                                                                                                         
Sleep(5000);

	}

	system("cls");


printf("\t\t\t\t\t\t __     __             _____  _     _     _____ _       _____        \n");
printf("\t\t\t\t\t\t \\ \\   / /            |  __ \\(_)   | |   |_   _| |     |_   _|       \n");
printf("\t\t\t\t\t\t  \\ \\_/ /__  _   _    | |  | |_  __| |     | | | |_      | |  _ __   \n");
printf("\t\t\t\t\t\t   \\   / _ \\| | | |   | |  | | |/ _` |     | | | __|     | | | '_ \\  \n");
printf("\t\t\t\t\t\t    | | (_) | |_| |   | |__| | | (_| |    _| |_| |_     _| |_| | | | \n");
printf("\t\t\t\t\t\t    |_|\\___/ \\__,_|   |_____/|_|\\__,_|   |_____|\\__|   |_____|_| |_| \n\n\n\n\n\n\n");

if (counter == 1)
	{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n");
printf("\t\t\t\t\t\t\t\t\t| |     __       | |\n");
printf("\t\t\t\t\t\t\t\t\t| |    /  |      | |\n");
printf("\t\t\t\t\t\t\t\t\t| |    `| |      | |\n");
printf("\t\t\t\t\t\t\t\t\t| |     | |      | |\n");
printf("\t\t\t\t\t\t\t\t\t| |    _| |_     | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   |_____|    | |\n");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n\n");
	}                          

if (counter == 2)
{
printf("\t\t\t\t\t\t\t\t\t .----------------.  \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. | \n");
printf("\t\t\t\t\t\t\t\t\t| |    _____     | | \n");
printf("\t\t\t\t\t\t\t\t\t| |   / ___ `.   | | \n");
printf("\t\t\t\t\t\t\t\t\t| |  |_/___) |   | | \n");
printf("\t\t\t\t\t\t\t\t\t| |   .'____.'   | | \n");
printf("\t\t\t\t\t\t\t\t\t| |  / /____     | | \n");
printf("\t\t\t\t\t\t\t\t\t| |  |_______|   | | \n");
printf("\t\t\t\t\t\t\t\t\t| |              | | \n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' | \n");
printf("\t\t\t\t\t\t\t\t\t '----------------'  \n");
}


if (counter == 3)
{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n");
printf("\t\t\t\t\t\t\t\t\t| |    ______    | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   / ____ `.  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   `'  __) |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   _  |__ '.  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | \\____) |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   \\______.'  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n");
}


if (counter == 4)
{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n");
printf("\t\t\t\t\t\t\t\t\t| |   _    _     | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | |  | |    | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | |__| |_   | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  |____   _|  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |      _| |_   | |\n");
printf("\t\t\t\t\t\t\t\t\t| |     |_____|  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n");
}


if (counter == 5)
{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n");
printf("\t\t\t\t\t\t\t\t\t| |   _______    | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  |  _____|   | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | |____     | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  '_.____''.  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | \\____) |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   \\______.'  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n");
}

	if (counter == 6)
{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n");
printf("\t\t\t\t\t\t\t\t\t| |    ______    | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  .' ____ \\   | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | |____\\_|  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | '____`'.  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | (____) |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  '.______.'  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n");
}


	if (counter == 7)
{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n ");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n ");
printf("\t\t\t\t\t\t\t\t\t| |   _______    | |\n ");
printf("\t\t\t\t\t\t\t\t\t| |  |  ___  |   | |\n ");
printf("\t\t\t\t\t\t\t\t\t| |  |_/  / /    | |\n ");
printf("\t\t\t\t\t\t\t\t\t| |      / /     | |\n ");
printf("\t\t\t\t\t\t\t\t\t| |     / /      | |\n ");
printf("\t\t\t\t\t\t\t\t\t| |    /_/       | |\n ");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n ");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n ");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n ");
}


	if (counter == 8)
{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n");
printf("\t\t\t\t\t\t\t\t\t| |     ____     | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   .' __ '.   | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   | (__) |   | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   .`____'.   | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | (____) |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  `.______.'  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n");
} 


	if (counter == 9)
{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n");
printf("\t\t\t\t\t\t\t\t\t| |    ______    | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  .' ____ '.  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | (____) |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  '_.____. |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | \\____| |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   \\______,'  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n");
}


	if (counter == 10)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |     ____     | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |   .'    '.   | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |  |  .--.  |  | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |  | |    | |  | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |  |  `--'  |  | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |   '.____.'   | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


	if (counter == 11)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |     __       | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |    /  |      | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |    `| |      | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |     | |      | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |    _| |_     | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |   |_____|    | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


	if (counter == 12)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |    _____     | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |   / ___ `.   | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |  |_/___) |   | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |   .'____.'   | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |  / /____     | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |  |_______|   | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


	if (counter == 13)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |    ______    | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |   / ____ `.  | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |   `'  __) |  | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |   _  |__ '.  | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |  | \\____) |  | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |   \\______.'  | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


	if (counter == 14)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |   _    _     | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |  | |  | |    | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |  | |__| |_   | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |  |____   _|  | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |      _| |_   | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |     |_____|  | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


	if (counter == 15)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |   _______    | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |  |  _____|   | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |  | |____     | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |  '_.____''.  | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |  | \\____) |  | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |   \\______.'  | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


	if (counter == 16)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |    ______    | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |  .' ____ \\   | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |  | |____\\_|  | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |  | '____`'.  | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |  | (____) |  | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |  '.______.'  | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


	if (counter == 17)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |   _______    | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |  |  ___  |   | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |  |_/  / /    | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |      / /     | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |     / /      | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |    /_/       | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}

	if (counter == 18)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |     ____     | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |   .' __ '.   | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |   | (__) |   | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |   .`____'.   | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |  | (____) |  | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |  `.______.'  | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}



	if (counter == 19)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |    ______    | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |  .' ____ '.  | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |  | (____) |  | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |  '_.____. |  | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |  | \\____| |  | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |   \\______,'  | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}

	if (counter == 20)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |    _____     | || |     ____     | |\n");
printf("\t\t\t\t\t\t\t\t| |   / ___ `.   | || |   .'    '.   | |\n");
printf("\t\t\t\t\t\t\t\t| |  |_/___) |   | || |  |  .--.  |  | |\n");
printf("\t\t\t\t\t\t\t\t| |   .'____.'   | || |  | |    | |  | |\n");
printf("\t\t\t\t\t\t\t\t| |  / /____     | || |  |  `--'  |  | |\n");
printf("\t\t\t\t\t\t\t\t| |  |_______|   | || |   '.____.'   | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


printf("\t\t\t\t\t\t\t\t  _______   _             _ \n");
printf("\t\t\t\t\t\t\t\t |__   __| (_)           | |\n");
printf("\t\t\t\t\t\t\t\t    | |_ __ _  ___  ___  | |\n");
printf("\t\t\t\t\t\t\t\t    | | '__| |/ _ \\/ __| | |\n");
printf("\t\t\t\t\t\t\t\t    | | |  | |  __/\\__ \\ |_|\n");
printf("\t\t\t\t\t\t\t\t    |_|_|  |_|\\___||___/ (_)\n");
        
system("pause");
	printf("Enter your name hero!");
	getch();

}

//************** CHANGE THE GAME PREFERENCES *************************

void hard_mode()
{
	int select = 0,
		go = 1;
	int x = 0;
	int cord_x_hard = 0,
		cord_y_hard = 0;
	char gameboard [13][13];
	int y = 0,
		guessx=0,
		guessy=0,
		counter =0,
		randomy = 0,
		yaxis=1;


	unsigned int seed = (unsigned int) time (NULL);
	srand (seed);

	for (x = 0; x <= 12; x++)
	{
		for (y = 0; y <= 12; y++)
		{
			gameboard [x][y] = '*';
		}
	}

	system("cls");

	cord_x_hard = rand() % 12 + 1;
	cord_y_hard = rand() % 12 + 1;

	gameboard [cord_x_hard][cord_y_hard] = '*';
	do
{
	system("cls");

printf("\t\t\t ______   __  __     ______        ______     ______   __  __        ______     ______     __    __     ______   \n");    
printf("\t\t\t/\\__  _\\ /\\ \\_\\ \\   /\\  ___\\      /\\  ___\\   /\\  == \\ /\\ \\_\\ \\      /\\  ___\\   /\\  __ \\   /\\ \"-./  \\   /\\  ___\\  \n");    
printf("\t\t\t\\/_/\\ \\/ \\ \\  __ \\  \\ \\  __\\      \\ \\___  \\  \\ \\  _-/ \\ \\____ \\     \\ \\ \\__ \\  \\ \\  __ \\  \\ \\ \\-./\\ \\  \\ \\  __\\  \n");    
printf("\t\t\t   \\ \\_\\  \\ \\_\\ \\_\\  \\ \\_____\\     \\/\\_____\\  \\ \\_\\    \\/\\_____\\     \\ \\_____\\  \\ \\_\\ \\_\\  \\ \\_\\ \\ \\_\\  \\ \\_____\\\n");    
printf("\t\t\t    \\/_/   \\/_/\\/_/   \\/_____/      \\/_____/   \\/_/     \\/_____/      \\/_____/   \\/_/\\/_/   \\/_/  \\/_/   \\/_____/\n");    


	printf("\n\n\n");
	printf ("\t\t\t\t\t1	2	3	4	5	6	7	8	9	10	11	12\n\n");
	
	for (y = 1; y <=12; y++)
	{
		printf("\t\t\t\t%d", yaxis);
		for (x = 1; x<=12;x++)
		{
			printf("\t%c", gameboard[x][y]);
		}
		printf("\n\n");
	}

	

	do
	{
		printf ("x-cord --->");
		scanf ("%d", & guessx);
		

		if (guessx < 1 || guessx > 12)
		{
			fflush(stdin);
			printf("Error, please enter a Valid Cordinate! (1-6) \n");
		}
	}
	
	while (guessx < 1 || guessx > 12);
	
	do
	{
	
		printf ("y-cord --->");
		scanf ("%d", & guessy);

		if (guessy < 1 || guessy > 12)
		{
			fflush(stdin);
			printf("Error, please enter a Valid Cordinate! (1-12) \n");
		}

	}	
			
	while (guessy < 1 || guessy > 12);


	if (guessx == cord_x_hard)
	{
		printf("The x-Cordinate is correct!\n");
	}

	else if (guessx > cord_x_hard)
	{
		printf("You are to high on the x-Cordinate!\n");
	}

	else if (guessx < cord_x_hard)
	{
		printf("You are to Low on the x-Cordinate!\n");
	}

	
	if (guessy == cord_y_hard)
	{
		printf("The y-Cordinate is correct!\n");
	}

	else if (guessy > cord_y_hard)
	{
		printf("You are to high on the y-Cordinate!\n");
	}

	else if (guessy < cord_y_hard)
	{
		printf("You are to Low on the y-Cordinate!\n");
	}
	counter = counter + 1;

	printf("\n");
	system("pause");
	gameboard[guessx][guessy]='0';
}

while (guessx != cord_x_hard || guessy != cord_y_hard);

	if (guessx == cord_x_hard && guessy == cord_y_hard);
	{
		printf("You have located The spy!\n\n");
		printf("You Located the spy in %d Tries!\n", counter);
	}

Sleep(5000);
	system ("cls");
	if (guessx == cord_x_hard && guessy == cord_y_hard)
	{
		
printf("       _____                            _         _       _   _                   _   __     __         _               _                     _           _ \n");
printf("      / ____|                          | |       | |     | | (_)                 | |  \\ \\   / /        ( )             | |                   | |         | |\n");
printf("     | |     ___  _ __   __ _ _ __ __ _| |_ _   _| | __ _| |_ _  ___  _ __  ___  | |   \\ \\_/ /__  _   _|/__   _____    | |     ___   ___ __ _| |_ ___  __| |\n");
printf("     | |    / _ \\| '_ \\ / _` | '__/ _` | __| | | | |/ _` | __| |/ _ \\| '_ \\/ __| | |    \\   / _ \\| | | | \\ \\ / / _ \\   | |    / _ \\ / __/ _` | __/ _ \\/ _` |\n");
printf("     | |___| (_) | | | | (_| | | | (_| | |_| |_| | | (_| | |_| | (_) | | | \\__ \\ |_|     | | (_) | |_| |  \\ V /  __/   | |___| (_) | (_| (_| | ||  __/ (_| |\n");
printf("      \\_____\\___/|_| |_|\\__, |_|  \\__,_|\\__|\\__,_|_|\\__,_|\\__|_|\\___/|_| |_|___/ (_)     |_|\\___/ \\__,_|   \\_/ \\___|   |______\\___/ \\___\\__,_|\\__\\___|\\__,_|\n");
printf("                         __/ |                                                                                                                              \n");
printf("                        |___/                                                                                                                               \n\n");

printf("\t\t\t\t  _______ _              _____                                   _     _____                     _ \n");
printf("\t\t\t\t |__   __| |            / ____|                  /\\             | |   / ____|                   | |\n");
printf("\t\t\t\t    | |  | |__   ___   | (___  _ __  _   _      /  \\   _ __   __| |  | (___   __ ___   _____  __| |\n");
printf("\t\t\t\t    | |  | '_ \\ / _ \\   \\___ \\| '_ \\| | | |    / /\\ \\ | '_ \\ / _` |   \\___ \\ / _` \\ \\ / / _ \\/ _` |\n");
printf("\t\t\t\t    | |  | | | |  __/   ____) | |_) | |_| |   / ____ \\| | | | (_| |   ____) | (_| |\\ V /  __/ (_| |\n");
printf("\t\t\t\t    |_|  |_| |_|\\___|  |_____/| .__/ \\__, |  /_/    \\_\\_| |_|\\__,_|  |_____/ \\__,_| \\_/ \\___|\\__,_|\n");
printf("\t\t\t\t                              | |     __/ |                                                        \n");
printf("\t\t\t\t                              |_|    |___/                                                         \n\n");


printf("\t\t\t\t\t\t  _______ _             _____               _     _            _     _ \n");
printf("\t\t\t\t\t\t |__   __| |           |  __ \\             (_)   | |          | |   | |\n");
printf("\t\t\t\t\t\t    | |  | |__   ___   | |__) | __ ___  ___ _  __| | ___ _ __ | |_  | |\n");
printf("\t\t\t\t\t\t    | |  | '_ \\ / _ \\  |  ___/ '__/ _ \\/ __| |/ _` |/ _ \\ '_ \\| __| | |\n");
printf("\t\t\t\t\t\t    | |  | | | |  __/  | |   | | |  __/\\__ \\ | (_| |  __/ | | | |_  |_|\n");
printf("\t\t\t\t\t\t    |_|  |_| |_|\\___|  |_|   |_|  \\___||___/_|\\__,_|\\___|_| |_|\\__| (_)\n");
                                                                       
                                                                       


printf("\t\t\t _______ _            __          ___     _ _       _                             _____         _____        __       _ \n");
printf("\t\t\t|__   __| |           \\ \\        / / |   (_) |     | |                           |_   _|       / ____|      / _|     | |\n");
printf("\t\t\t    | |  | |__   ___    \\ \\  /\\  / /| |__  _| |_ ___| |__   ___  _   _ ___  ___     | |  ___   | (___   __ _| |_ ___  | |\n");
printf("\t\t\t    | |  | '_ \\ / _ \\    \\ \\/  \\/ / | '_ \\| | __/ _ \\ '_ \\ / _ \\| | | / __|/ _ \\    | | / __|   \\___ \\ / _` |  _/ _ \\ | |\n");
printf("\t\t\t    | |  | | | |  __/     \\  /\\  /  | | | | | ||  __/ | | | (_) | |_| \\__ \\  __/   _| |_\\__ \\   ____) | (_| | ||  __/ |_|\n");
printf("\t\t\t    |_|  |_| |_|\\___|      \\/  \\/   |_| |_|_|\\__\\___|_| |_|\\___/ \\__,_|___/\\___|  |_____|___/  |_____/ \\__,_|_| \\___| (_)\n\n");
                                                                                                                                                                                         
Sleep(5000);

	}

	system("cls");


printf("\t\t\t\t\t\t __     __             _____  _     _     _____ _       _____        \n");
printf("\t\t\t\t\t\t \\ \\   / /            |  __ \\(_)   | |   |_   _| |     |_   _|       \n");
printf("\t\t\t\t\t\t  \\ \\_/ /__  _   _    | |  | |_  __| |     | | | |_      | |  _ __   \n");
printf("\t\t\t\t\t\t   \\   / _ \\| | | |   | |  | | |/ _` |     | | | __|     | | | '_ \\  \n");
printf("\t\t\t\t\t\t    | | (_) | |_| |   | |__| | | (_| |    _| |_| |_     _| |_| | | | \n");
printf("\t\t\t\t\t\t    |_|\\___/ \\__,_|   |_____/|_|\\__,_|   |_____|\\__|   |_____|_| |_| \n\n\n\n\n\n\n");

if (counter == 1)
	{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n");
printf("\t\t\t\t\t\t\t\t\t| |     __       | |\n");
printf("\t\t\t\t\t\t\t\t\t| |    /  |      | |\n");
printf("\t\t\t\t\t\t\t\t\t| |    `| |      | |\n");
printf("\t\t\t\t\t\t\t\t\t| |     | |      | |\n");
printf("\t\t\t\t\t\t\t\t\t| |    _| |_     | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   |_____|    | |\n");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n\n");
	}                          

if (counter == 2)
{
printf("\t\t\t\t\t\t\t\t\t .----------------.  \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. | \n");
printf("\t\t\t\t\t\t\t\t\t| |    _____     | | \n");
printf("\t\t\t\t\t\t\t\t\t| |   / ___ `.   | | \n");
printf("\t\t\t\t\t\t\t\t\t| |  |_/___) |   | | \n");
printf("\t\t\t\t\t\t\t\t\t| |   .'____.'   | | \n");
printf("\t\t\t\t\t\t\t\t\t| |  / /____     | | \n");
printf("\t\t\t\t\t\t\t\t\t| |  |_______|   | | \n");
printf("\t\t\t\t\t\t\t\t\t| |              | | \n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' | \n");
printf("\t\t\t\t\t\t\t\t\t '----------------'  \n");
}


if (counter == 3)
{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n");
printf("\t\t\t\t\t\t\t\t\t| |    ______    | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   / ____ `.  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   `'  __) |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   _  |__ '.  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | \\____) |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   \\______.'  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n");
}


if (counter == 4)
{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n");
printf("\t\t\t\t\t\t\t\t\t| |   _    _     | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | |  | |    | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | |__| |_   | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  |____   _|  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |      _| |_   | |\n");
printf("\t\t\t\t\t\t\t\t\t| |     |_____|  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n");
}


if (counter == 5)
{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n");
printf("\t\t\t\t\t\t\t\t\t| |   _______    | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  |  _____|   | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | |____     | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  '_.____''.  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | \\____) |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   \\______.'  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n");
}

	if (counter == 6)
{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n");
printf("\t\t\t\t\t\t\t\t\t| |    ______    | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  .' ____ \\   | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | |____\\_|  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | '____`'.  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | (____) |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  '.______.'  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n");
}


	if (counter == 7)
{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n ");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n ");
printf("\t\t\t\t\t\t\t\t\t| |   _______    | |\n ");
printf("\t\t\t\t\t\t\t\t\t| |  |  ___  |   | |\n ");
printf("\t\t\t\t\t\t\t\t\t| |  |_/  / /    | |\n ");
printf("\t\t\t\t\t\t\t\t\t| |      / /     | |\n ");
printf("\t\t\t\t\t\t\t\t\t| |     / /      | |\n ");
printf("\t\t\t\t\t\t\t\t\t| |    /_/       | |\n ");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n ");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n ");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n ");
}


	if (counter == 8)
{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n");
printf("\t\t\t\t\t\t\t\t\t| |     ____     | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   .' __ '.   | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   | (__) |   | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   .`____'.   | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | (____) |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  `.______.'  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n");
} 


	if (counter == 9)
{
printf("\t\t\t\t\t\t\t\t\t .----------------. \n");
printf("\t\t\t\t\t\t\t\t\t| .--------------. |\n");
printf("\t\t\t\t\t\t\t\t\t| |    ______    | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  .' ____ '.  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | (____) |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  '_.____. |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |  | \\____| |  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |   \\______,'  | |\n");
printf("\t\t\t\t\t\t\t\t\t| |              | |\n");
printf("\t\t\t\t\t\t\t\t\t| '--------------' |\n");
printf("\t\t\t\t\t\t\t\t\t '----------------' \n");
}


	if (counter == 10)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |     ____     | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |   .'    '.   | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |  |  .--.  |  | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |  | |    | |  | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |  |  `--'  |  | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |   '.____.'   | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


	if (counter == 11)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |     __       | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |    /  |      | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |    `| |      | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |     | |      | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |    _| |_     | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |   |_____|    | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


	if (counter == 12)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |    _____     | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |   / ___ `.   | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |  |_/___) |   | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |   .'____.'   | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |  / /____     | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |  |_______|   | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


	if (counter == 13)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |    ______    | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |   / ____ `.  | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |   `'  __) |  | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |   _  |__ '.  | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |  | \\____) |  | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |   \\______.'  | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


	if (counter == 14)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |   _    _     | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |  | |  | |    | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |  | |__| |_   | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |  |____   _|  | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |      _| |_   | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |     |_____|  | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


	if (counter == 15)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |   _______    | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |  |  _____|   | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |  | |____     | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |  '_.____''.  | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |  | \\____) |  | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |   \\______.'  | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


	if (counter == 16)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |    ______    | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |  .' ____ \\   | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |  | |____\\_|  | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |  | '____`'.  | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |  | (____) |  | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |  '.______.'  | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


	if (counter == 17)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |   _______    | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |  |  ___  |   | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |  |_/  / /    | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |      / /     | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |     / /      | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |    /_/       | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}

	if (counter == 18)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |     ____     | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |   .' __ '.   | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |   | (__) |   | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |   .`____'.   | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |  | (____) |  | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |  `.______.'  | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}



	if (counter == 19)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |     __       | || |    ______    | |\n");
printf("\t\t\t\t\t\t\t\t| |    /  |      | || |  .' ____ '.  | |\n");
printf("\t\t\t\t\t\t\t\t| |    `| |      | || |  | (____) |  | |\n");
printf("\t\t\t\t\t\t\t\t| |     | |      | || |  '_.____. |  | |\n");
printf("\t\t\t\t\t\t\t\t| |    _| |_     | || |  | \\____| |  | |\n");
printf("\t\t\t\t\t\t\t\t| |   |_____|    | || |   \\______,'  | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}

	if (counter == 20)
{
printf("\t\t\t\t\t\t\t\t .----------------.  .----------------. \n");
printf("\t\t\t\t\t\t\t\t| .--------------. || .--------------. |\n");
printf("\t\t\t\t\t\t\t\t| |    _____     | || |     ____     | |\n");
printf("\t\t\t\t\t\t\t\t| |   / ___ `.   | || |   .'    '.   | |\n");
printf("\t\t\t\t\t\t\t\t| |  |_/___) |   | || |  |  .--.  |  | |\n");
printf("\t\t\t\t\t\t\t\t| |   .'____.'   | || |  | |    | |  | |\n");
printf("\t\t\t\t\t\t\t\t| |  / /____     | || |  |  `--'  |  | |\n");
printf("\t\t\t\t\t\t\t\t| |  |_______|   | || |   '.____.'   | |\n");
printf("\t\t\t\t\t\t\t\t| |              | || |              | |\n");
printf("\t\t\t\t\t\t\t\t| '--------------' || '--------------' |\n");
printf("\t\t\t\t\t\t\t\t '----------------'  '----------------' \n");
}


printf("\t\t\t\t\t\t\t\t  _______   _             _ \n");
printf("\t\t\t\t\t\t\t\t |__   __| (_)           | |\n");
printf("\t\t\t\t\t\t\t\t    | |_ __ _  ___  ___  | |\n");
printf("\t\t\t\t\t\t\t\t    | | '__| |/ _ \\/ __| | |\n");
printf("\t\t\t\t\t\t\t\t    | | |  | |  __/\\__ \\ |_|\n");
printf("\t\t\t\t\t\t\t\t    |_|_|  |_|\\___||___/ (_)\n");
        

	getch();
	
	system("pause");

	printf("Enter Your Name Hero ----->");

	getch();

}

	


//********************* VIEW THE HIGH SCORES *************************

void high_scores()
{
	system("cls");
 printf("\t\t\t\t\t\t    _    _ _       _        _____                           _ \n");
 printf("\t\t\t\t\t\t   | |  | (_)     | |      / ____|                         | |\n");
 printf("\t\t\t\t\t\t   | |__| |_  __ _| |__   | (___   ___ ___  _ __ ___  ___  | |\n");
 printf("\t\t\t\t\t\t   |  __  | |/ _` | '_ \\   \\___ \\ / __/ _ \\| '__/ _ \\/ __| | |\n");
 printf("\t\t\t\t\t\t   | |  | | | (_| | | | |  ____) | (_| (_) | | |  __/\\__ \\ |_|\n");
 printf("\t\t\t\t\t\t   |_|  |_|_|\\__, |_| |_| |_____/ \\___\\___/|_|  \\___||___/ (_)\n");
 printf("\t\t\t\t\t\t              __/ |                                           \n");
 printf("\t\t\t\t\t\t             |___/                                           	\n");





printf("\t\t _   _               _  ___  ___          _           \n");
printf("\t\t| | | |             | | |  \\/  |         | |       _  \n");
printf("\t\t| |_| | __ _ _ __ __| | | .  . | ___   __| | ___  (_) \n");
printf("\t\t|  _  |/ _` | '__/ _` | | |\\/| |/ _ \\ / _` |/ _ \\     \n");
printf("\t\t| | | | (_| | | | (_| | | |  | | (_) | (_| |  __/  _  \n");
printf("\t\t\\_| |_/\\__,_|_|  \\__,_| \\_|  |_/\\___/ \\__,_|\\___| (_) \n\n");

printf("\t\t\tNAME:\t\t\t\tATTEMPTS:\n");
		
printf("\t\t\tSuleyman   :\t\t\t\t1\n");
printf("\t\t\tEric       :\t\t\t\t1\n");
printf("\t\t\tDaquan     :\t\t\t\t2\n");
printf("\t\t\tDr. Phil   :\t\t\t\t2\n");
printf("\t\t\tObama      :\t\t\t\t3\n");
printf("\t\t\tKeemstar   :\t\t\t\t3\n");
printf("\t\t\tSuley		 :\t\t\t\t4\n");
printf("\t\t\tSuley		 :\t\t\t\t5\n");







printf("\t\t _____                 ___  ___          _           \n");
printf("\t\t|  ___|                |  \\/  |         | |       _  \n");
printf("\t\t| |__  __ _ ___ _   _  | .  . | ___   __| | ___  (_) \n");
printf("\t\t|  __|/ _` / __| | | | | |\\/| |/ _ \\ / _` |/ _ \\     \n");
printf("\t\t| |__| (_| \\__ \\ |_| | | |  | | (_) | (_| |  __/  _  \n");
printf("\t\t\\____/\\__,_|___/\\__, | \\_|  |_/\\___/ \\__,_|\\___| (_) \n");
printf("\t\t                 __/ |                               \n");
printf("\t\t                |___/                                \n");                                    
                   

printf("\t\t\tNAME:\t\t\t\tATTEMPTS:\n");
		
printf("\t\t\tSuleyman   :\t\t\t\t1\n");
printf("\t\t\tEric       :\t\t\t\t1\n");
printf("\t\t\tDeez__     :\t\t\t\t2\n");
printf("\t\t\tSuley		 :\t\t\t\t4\n");
printf("\t\t\tSuley		 :\t\t\t\t3\n");
printf("\t\t\tSuley		 :\t\t\t\t4\n");
printf("\t\t\tSuleyman	 :\t\t\t\t5\n");
 
	getch();
}


//**************************** HELP **********************************

void help()
{
	system("cls");

 printf("\t\t\t\t\t _    _  ______          __    _______ ____      _____  _           __     __     \n");
 printf("\t\t\t\t\t| |  | |/ __ \\ \\        / /   |__   __/ __ \\    |  __ \\| |        /\\\\ \\   / /  _  \n");
 printf("\t\t\t\t\t| |__| | |  | \\ \\  /\\  / /       | | | |  | |   | |__) | |       /  \\\\ \\_/ /  (_) \n");
 printf("\t\t\t\t\t|  __  | |  | |\\ \\/  \\/ /        | | | |  | |   |  ___/| |      / /\\ \\\\   /       \n");
 printf("\t\t\t\t\t| |  | | |__| | \\  /\\  /         | | | |__| |   | |    | |____ / ____ \\| |     _  \n");
 printf("\t\t\t\t\t|_|  |_|\\____/   \\/  \\/          |_|  \\____/    |_|    |______/_/    \\_\\_|    (_) \n\n");
                                                                                  
                                                                                 
	
	printf("\t\t\t1. Select the gamemode option in the main menu and choose which gamemode you wish to play\n\n");
	printf("\t\t\t2. Next Select the Play Game option in the menu\n\n");
	printf("\t\t\t3. After the gameboard apears, type your cordinate guess in the textbox\n\n");
	printf("\t\t\t4. Keep guessing until you find the spy......refer to the hint to tell if your guesses are closer or further\n\n");
	printf("\t\t\t5. After you find the spy, go back to the menu and view your Score in the highscore menu!\n\n");


	
 printf("\t\t\t\t\tgm_g_ggp_    __g0#p_      _gg___ggg_     _agNg__    __g_____g_      _agp__\n");
 printf("\t\t\t\t\t########NNN# t######  NNN0##########ggp j######F gggN#########hggp 0######\n");
 printf("\t\t\t\t\tNNP#NNNN\"    `9N#N@F     \"N#N@#NN#N@  \"  @N###@'  \"\"N##NNNN##NF\"\"' !N###N@\n");
 printf("\t\t\t\t\tg__ __gggN^ j__ \" __g  *Npg__   __gggr  __ \"\" ___ qgpj__   __ggg- __  \"\" _\n");
 printf("\t\t\t\t\t##h d###@_ggNN@ _  N#hg_\"NN###,J####\"_gd#@  _ N##g_90###L_g###@\"__0#@   ^N\n");
 printf("\t\t\t\t\t\" \"gF \"  N####pj## q####N  \"\"\"_\"\"\"  d####p d#_j##### \"\"\"\"_P\"\"  0#### j0p J\n");
 printf("\t\t\t\t\t t###F qN###N@ N##&`N####Np jN##p  N####@\"d### N####h  q0#N  aN####@ ###p9\n");
 printf("\t\t\t\t\tpJ###Lj0###N#  N#N#  N#####p ###F,g####N  N###  0####W_t### jd####F j#### \n");
 printf("\t\t\t\t\t@ 9#F 0####F ___\"\"___ ]####N 9#@ 0#####  __PF_   \"##### 0#P #####F   _@F  \n");
 printf("\t\t\t\t\t#_ \" j0#P\"\"gN##@'`N##M_\"@N##p \" _g#@@\"_gN#N@ NNNp_9NN#L_ F _0#N@\"_g0NN q#d\n");
 printf("\t\t\t\t\t\"  _  \"\"  0#@P\"   \"\"@N0#, \"F\" _  \"@  dNN@F\"  `9N0N#_ V@\" _ \"@F ,dNN@@\"  ?N\n");
 printf("\t\t\t\t\tggN##pg  ___gN#pgpggMp_    ,gN#Np_     ggNpgp_ggp_    _gNNp__    _ggp_g__g\n");
 printf("\t\t\t\t\t####### JNNN##########NNNF 0######  NNN##########NNNr ####### tNN0########\n");
 printf("\t\t\t\t\t\"\"NN@\"\"  ___\"@@\"\"P9NN@     \"\"NN@P\"     9NN@\"@NNNN\"    \"NN#@@\"    `NN@@N@NN\n");
 printf("\t\t\t\t\tm,   agp  N##Nm,  _ggN0#\" jg_   _gp  N#Ngg_  __gggN^ g__ \" ___ `Nggp__  __\n");
 printf("\t\t\t\t\t@  g  0#Ngp\"9NNN%xNNN@\"_gg##\" j_ N#Npg\"NNNNp d###@Lgg#@\" _ \"N#pg_9N### aN#\n");
 printf("\t\t\t\t\t# 0#h N####L_  ,gMC  _j##### j## 0#####    jgE \"  ####h d#L N####p   \"gE\"`\n");
 printf("\t\t\t\t\t\"j###L`N#####_ 0### _0####@F ###L`N#####L t###F j####@\"j### 9N####N  N### \n");
 printf("\t\t\t\t\t `N#@' `\"#####kd##@ N####@!  N###  @0####h ##N g####N  0N#NL tN#####,0##@ \n");
 printf("\t\t\t\t\tggp gpgg_\"N###F 9@  N###@ _gag\",ga__`N###@ \"N\" 0#### ____\"____ 0####F 0@ `\n");
 printf("\t\t\t\t\tN#\" \"NN##p_ \"##-   0N@  g0##NF \"0###p_\"\"N#M   d#N\"\"g0##N\" N####g\"\"0##    g\n");
 printf("\t\t\t\t\t__ _ ___\"\"\"    _gp_    ^^\"\"__ _  _\"\"P^  \"  _g_  \" @@^\"_     \"\"9@@  \"  __  \n");
 printf("\t\t\t\t\t#########pgg  N#####p ,ggg###N#NN###p__  g0###Np  _jN##NgNNN##p_D.H., 1991\n");

	getch();
}


//**************************** EXIT SCREEN **************************

int exit_screen()
{
	char exitchar;



	do
	{

		system("cls");


printf("                     __     __            _____                 __     __          __          __         _     _______      ______      _ _  ___  \n");
printf("     /\\              \\ \\   / /           / ____|                \\ \\   / /          \\ \\        / /        | |   |__   __|    |  ____|    (_) ||__ \\ \n");
printf("    /  \\   _ __ ___   \\ \\_/ /__  _   _  | (___  _   _ _ __ ___   \\ \\_/ /__  _   _   \\ \\  /\\  / /_ _ _ __ | |_     | | ___   | |__  __  ___| |_  ) |\n");
printf("   / /\\ \\ | '__/ _ \\   \\   / _ \\| | | |  \\___ \\| | | | '__/ _ \\   \\   / _ \\| | | |   \\ \\/  \\/ / _` | '_ \\| __|    | |/ _ \\  |  __| \\ \\/ / | __|/ / \n");
printf("  / ____ \\| | |  __/    | | (_) | |_| |  ____) | |_| | | |  __/    | | (_) | |_| |    \\  /\\  / (_| | | | | |_     | | (_) | | |____ >  <| | |_|_|  \n");
printf(" /_/    \\_\\_|  \\___|    |_|\\___/ \\__,_| |_____/ \\__,_|_|  \\___|    |_|\\___/ \\__,_|     \\/  \\/ \\__,_|_| |_|\\__|    |_|\\___/  |______/_/\\_\\_|\\__(_)  \n");
                                                                                                                                                   
                                                                                                                                                   
	
	
		printf("Press y for yes or n for no----->");
		fflush(stdin);
		scanf("%c", &exitchar);

		if (exitchar != 'y' && exitchar != 'Y' && exitchar != 'n' && exitchar != 'N')
		{

			printf("Error! Wrong input!\n");
			fflush(stdin);
			getchar();
		}
	}
	while (exitchar != 'y' && exitchar != 'Y' && exitchar != 'n' && exitchar != 'N');

	if (exitchar == 'y' || exitchar == 'Y') 
	{
		return 0;
	}

	else 
	{
		return 1;
	}
}
