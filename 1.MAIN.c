#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "f_buy.h" //mua hang 
#include "f_cart.h" //gio hang (danh sach bill)
#include "f_check.h" // kiem tra don da mua 


int main()
{

    int option=0;
	do{
		MainMenu();
		printf("Choose your option: ");
		scanf("%d", &option);

		switch (option){
			case 0:{
				printf("\n");
				printf("\n");
				printf("You have exited the application!\n");
				break;
			}
			case 1:{
				f_buy();
				break;
			}
			case 2 :{// Cart : check bills 
		        f_cart();
				break;
			}
			case 3:{ //check don mua 
				f_check();
				break;
			}
			default:{
                printf("Invalid option!\n");
                break;
            }		
    	}
	}while (option != 0);
	return 0;
}