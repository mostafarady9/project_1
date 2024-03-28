#include "STD_TYPES.H"
#include<stdio.h>
#include<string.h>
	u8 ad_us;
	u16 us_num=0;
	u8 flim_num;

		void admin();
		void user();
		void inter();
		void add_flim();
		void Remove();
		void people_tic();
		void detail();
		void List();
		 
typedef struct{
	u8 name[20];
	u64 phone_number ;
	u64 id;
	u64 Master;
}castomer;
typedef struct{
	u8 name[20];
	u64 passward;
}admen;
typedef struct
{
	u8 name[20] ;
	u8 day ;
	u8 months;
	u16 year;
	u8 duration;
	u8 release_time;
	f32 price;
	u8 tic[20];
}flim;

		flim num[20];
		castomer cust[20];
		
int main()
{
inter();
	return 0;
}
void inter()
{
	printf("are u admin or user? \nhint :(for admin enter 1 user enter 2): ");
	scanf("%d",&ad_us);
	if(ad_us==1)
	{
		admin();
	}
	else if(ad_us==2)
	{
		user();
	}
	else
	{
		printf("error input");
	inter();
	}
}
void admin()
{
	int i=0;
	void (*ptr_f[3]) ()={add_flim,Remove,List};
	admen cast;
	u8 *ptr="mostafa";
	u32 passward=1234567;
	printf("enter ur name : ");
	scanf("%s",&cast.name);
	printf("enter ur passward:");
	scanf("%llu",&cast.passward);
	if((cast.passward==passward))
	{
		printf("what do want :\n 1-add film\n 2- remove film\n 3-list");
		scanf("%d",&i);
		ptr_f [i-1]();
	}
	else
	{
		printf("\nwrong in passward or username\nenter again\n");
		admin();
	}
}
	void add_flim()
	{
	u8 number;

	printf("enter flim namber :");
	scanf("%d",&num);
	printf("enter flim name :");
	scanf("%s",num[number].name);
	printf("enter flim release date (D/M/y): ");
	scanf("%d",num[number].day);
	scanf("%d",num[number].months);
	scanf("%d",num[number].year);
	printf("duration:");
	scanf("%d",num[number].duration);
	printf("release date:");
	scanf("%d",num[number].release_time);
	printf("price:");
	scanf("%d",num[number].price);
	admin();
	}
void Remove()
{
	int number_1=0;
	printf("enter flim namber :");
	scanf("%d",&number_1);
  //  num[number_1].name={};
	num[number_1].day=0;
	num[number_1].months=0;
	num[number_1].year=0;
	num[number_1].duration=0;
	num[number_1].release_time=0;
	num[number_1].price=0;
}
void people_tic()
{
	printf("");
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
void user()
{
	u8 book=0;
	printf("Enter ur name:");
	scanf("%s",&cust[us_num].name);
	printf("Enter ur phone number:");
	scanf("%s",&cust[us_num].phone_number);
	printf("enter ur id:");
	scanf("%d",&cust[us_num].id);
	printf("what operation do u want:\n1-ticket booking\n2-remove ticket.");
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