#include "functions.h"
#include <stdio.h>
#include <string.h> 
// logic ham
//void printuser(admin menu[],int size){
//	for (int i=0; i<size , i++){
//	printf("Id: %d\n", menu[i].id);
//	printf("Product name: %s\n", menu[i].name);
//	printf("Price: %lf\n", menu[i].price);
//	printf("Quantity: %d\n", menu[i].quantity); 	 
//	}
//}


void printlogin(){   
// hien thi man hinh dang nhap  
	int choice; 
	char password[50];
	const char pass[]= "123";
	while(1){
	printf("****** STORE MANAGEMENT ****** \n");
	printf("\n");
	printf("\t    LOGIC \n");
	printf("================================\n"); 
	printf("Email: AdminStore@gmail.com\n");
	printf("Password: ");
	scanf("%s", &password);
	if (strcmp(pass, password) == 0) {
            printf("Dang nhap thanh cong.\n \n");
			break;
        } else {
            printf("Sai password! Vui long nhap lai.\n");
        }
    }
	while(1){
		printf("****** STORE MANAGEMENT ****** \n");
		printf("\n");
		printf("      CHOOSE YOUR CHOICE \n");
		printf("================================\n"); 
		printf("[1]. ADMIN\n");
		printf("[2]. PRINT PRODUCTS\n");
		printf("[3]. EXIT\n");
		printf("================================\n"); 
		printf("Nhap lua chon cua ban: ");
		scanf("%d", &choice);
		switch (choice){
			case 1:{
				int choiceadmin;
				while(1){
					printf("\n****** ADMIN MENU ******\n");
	                printf("[1]. Printf Product\n");
	                printf("[2]. Add Product\n");
	                printf("[3]. Edit Product\n");
	                printf("[4]. Delete Product\n");
	                printf("[5]. Search Product\n");
	                printf("[6]. Sort Product\n");
	                printf("[7]. Exit Admin Menu\n");
	                printf("Nhap lua chon cua ban: ");
	                scanf("%d", &choiceadmin);
	                switch (choiceadmin){
	                	case 1:{
	                		// hien thi cac san pham 
	                		
							break;
						} 
						case 2:{
							// them san pham  
							break;
						} 
						case 3:{
							// sua san pham 
							break;
						} 
						case 4:{
							// xoa san pham 
							break;
						} 
						case 5:{
							// 
							break;
						} 
						case 6:{
							break;
						} 
						case 7:
                            printf("EXIT MENU ADMIN.\n");
                            goto exit; 
                        default:
                            printf("Lua chon khong hop le \n");
                    }
                }
                exit:
                break;
            }
			case 2:{
	
				break;
			}
			case 3:{
				printf("EXIT PROGRAM\n"); 
				return ; 
				break;
			} 
			default:
				printf("Lua chon khong hop le \n");
				printf("\n");
		} 
    }
}
