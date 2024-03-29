#include"STD_TYPES.H"
#ifndef ADMIN_H
#define ADMIN_H


typedef struct{
	u8 name[20];
	u64 passward;
}admen;

void List();
void admin();
void inter();
void add_flim();
void Remove();
void people_tic();
#endif