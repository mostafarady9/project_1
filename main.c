#include "STD_TYPES.H"
#include<stdio.h>
#include<string.h>
#include"admin.h"
#include"user.h"
#include"admin.c"
#include"user.c"
	

		 

		
int main()
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
	main();
	}
	return 0;
	}

