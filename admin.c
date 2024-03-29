#include"STD_TYPES.H"
#include"admin.h"
#include"user.h"

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
	scanf("%d",&num[number].day);
	scanf("%d",&num[number].months);
	scanf("%d",&num[number].year);
	printf("duration:");
	scanf("%d",&num[number].duration);
	printf("release date:");
	scanf("%d",&num[number].release_time);
	printf("price:");
	scanf("%d",&num[number].price);
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
