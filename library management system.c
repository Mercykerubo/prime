#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mainmenu(void);
void admin(void);
void staff(void);
void user(void);
void rewind(FILE*books);
int main()
{
	mainmenu();
	
	
	return 0;
}
void mainmenu(void)
{
	int num;
	system("cls");
	printf("\t\t==county library management system==\n");
	printf("\t1.admin\n\t2.staff\n\t3.user\n\t4.exit\n");	
	printf("Enter: ");
	scanf("%d",&num);
		if(num==1)
		{
			system("cls");
			admin();
			if(getch())
			mainmenu();	}
		else if(num==2)
		{
			system("cls");
			staff();
			if(getch())
			mainmenu();
		}
		else if(num==3)
		{
			user();
			if(getch())
			mainmenu();
		}
		else if(num==4)
		{
			printf("---thank you for visiting prime library ---");
		}
		else
		{
			printf("invalid input! \nplease press any key to try again");
			if(getch())
			mainmenu();
		
		}
}
void admin(void)
{
	char password[55],select,name;
	printf("enter password");
	scanf("%d",&password);
	if(password !=7777)
	{
		printf("please tyr again!");
	 } 
	system("cls");
	printf("enter :\n\t1.to add staff\n\t2.delet staff\n\t3.edit staff\n \t4.back to menu\n--->");
	scanf("%d",&select);
	if(select==1)
	{
		printf("enter staff name:\n ");
		scanf("%s",name);
	}
	else if(select==2)
	{
		printf("choose name to remove\n");
	}
	else if(select==3)
	{
		printf("enter\n ");
	}
	else if(select==4)
	{
		mainmenu();
	}
}
void staff(void)
{
	int password,choice,choose,add;
	system("cls");
	printf("\t1.books\n\t2.users\n\t3.back to menu\n---->");
	scanf("%d",&choice);
	if(choice==1){
	system("cls");
	printf("\t1.add book\n\t2edit book\n\t3.delet book\n\t4.exit\n\t5.lender book \n\t6.returned books\n\t7.implement fines\n--->");
	scanf("%d",&choose);
	int title,author,book;
	if(choose==1){
		system("cls");
		printf("Available books:\n1.into to c by jj\n2.into to css by gh\n ");
		char t;
		FILE*books;
		char author[30];
		char title[30];
		//open for writing
		books=fopen("data.txt","a+");
		printf("Enter authors name: ");
		scanf("%s",author);
		fprintf(books,"author=%s\n",author);
		printf("Enter title of the book: ");
		scanf("%s",title);
		fprintf(books,"title=%s\n",title);
		fclose(books);
	}
	else if(choose==2)
	{
		FILE*books;
		books=fopen("data.txt","a+");
		printf("enter book you wish to edit: ");
		scanf("%d",&book);
		fprintf(books,"author=%s\n",author);
		char buff[255];
		while(fscanf(book,"%s",buff)!=EOF){
			printf("%s",buff);
		}
		fclose(books);
	}
	else if(choose==3) 
	{
		printf("enter book you wish to delet: ");
		scanf("%d",&book);
	}
	}
	else if(choice==2)
	{
		int add;
		char name,edit,delet;
			system("cls");
			printf("\t\n1.add user\t\n2.edit user\t\n2.delet user\n--->");
			scanf("%d",&add);
			if(add==1){
		
		FILE*user;
		char name[30];
		//open for writing
		user=fopen("data.txt","a+");
		printf("Enter  name: ");
		scanf("%s",name);
		fprintf(user,"name=%s\n",name);
		fclose(user);}
		else if(add==2)
		{
			printf("enter user you wish to edit: ");
			scanf("%s",&edit);
			FILE*user;
		}
		else if(add==3) 
		{
			printf("enter user you wish to delete: ");
			scanf("%s",&delet);
		}
	}
	else if(choice==3)
	{
		mainmenu();
	}
}

void user(void)
{
	int borrow;
	printf("enter b0ok you wish to borrow");
	scanf("%d",&borrow);
}
return 0;
]

