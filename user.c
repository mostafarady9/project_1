#include"STD_TYPES.H"
#include"user.h"
#include"admin.h"

void user(){
	u8 book=0;
	printf("Enter ur name:");
	scanf("%s",&cust[us_num].name);
	printf("Enter ur phone number:");
	scanf("%s",&cust[us_num].phone_number);
	printf("enter ur id:");
	scanf("%d",&cust[us_num].id);
	printf("what operation do u want:\n1-ticket booking\n2-remove ticket.");
	scanf("%d",&book);
if(book==1)
	{
		List();
		detail();
	}
	else if(book==2)
	{
		//remove_ticket();
	}
	else
	{
		printf("error input");
	}
}
void detail()
{
	u8 *ptr=&flim_num;
	u8 choose;
	printf("\n\n\nhallo %s\nchoose ur film:",cust[us_num].name);
	scanf("%d",ptr);
	printf("flim details \n\n");
	printf("flim name :%s\n",num[flim_num].name);
	printf("flim release date :(%d/%d/%d)\n",num[flim_num].day,num[*ptr].months,num[*ptr].year);
	printf("duration:%d\n",num[flim_num].duration);
	printf("release date:%d\n",num[flim_num].release_time);
	printf("price:%d\n\n\n",num[flim_num].price);
	printf("to buy a ticket enter 1\n to back to another film enter 2");
	scanf("%d",&choose);
	if(choose==1)
	{
		printf("enter ur master card number: ");
		scanf("%d",&cust[us_num].Master);
		num[*ptr].tic[us_num]=1;
		printf("ur ticket booked successfully.");
	}
	else if(choose==2)
	{
		detail();
		List();
	}
	else
	{
		printf("error input");
	}
}

void List()
{
	for(int j=0;j<20;j++)
	{
		printf("flim mun %d\n\n",j+1);
		printf("flim name :%s\n",num[j].name);
		printf("flim release date :(%d/%d/%d)\n",num[j].day,num[j].months,num[j].year);
		printf("duration:%d\n",num[j].duration);
		printf("release date:%d\n",num[j].release_time);
		printf("price:%d\n\n\n",num[j].price);
		
	}
}
