#include "STD_TYPES.H"
#ifndef USER_H
#define USER_H    
	u8 ad_us;
	u16 us_num=0;
	u8 flim_num;
typedef struct{
	u8 name[20];
	u64 phone_number ;
	u64 id;
	u64 Master;
    }castomer;
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
	    void user();		
        void detail();
		void List();
#endif