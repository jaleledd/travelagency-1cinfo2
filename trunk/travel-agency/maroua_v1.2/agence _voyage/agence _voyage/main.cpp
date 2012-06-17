#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include "date.h"
#include "reservation.h"
#include "agence.h"
#include "client.h"
#include "deplacement.h"

void main ()
{
	int x, id;
	string rep, rs;
	client C1,C2,C3;
	passager P1,P2 ;
	agence A;
	reservation R1,R2;
	deplacement D1,D2,D3,D4,D5;
	date datd1,datar1,datd2,datar2,datd3,datar3,datd4,datar4,datd5,datar5;
	C1.setnom("Ben salah");
	C1.setprenom("Mohamed");
	C1.setadresse("Rue Mohamed 5");
	C1.settel("55300781");
	C1.setemail("mohsal@gmail.com");
	C2.setnom("mejri");
	C2.setprenom("sabeur");
	C2.setadresse("Rue ettahrir");
	C2.settel("55300782");
	C2.setemail("mejsab@gmail.com");
	C3.setnom("cherif");
	C3.setprenom("kamel");
	C3.setadresse("cité olympique");
	C3.settel("55300783");
	C3.setemail("kamkam@gmail.com");
	P1.setnom("ben rjab");
	P1.setprenom("Rajaa");
	P1.setadresse("cité el khadhra");
	P1.settel("55300784");
	P1.setemail("rjabraja@gmail.com");
	P1.setnumpass("123456789");
	P2.setnom("arfaoui");
	P2.setprenom("yahya");
	P2.setadresse("Ariana");
	P2.settel("55300785");
	P2.setemail("yahyah@gmail.com");
	P2.setnumpass("987654321");
	D1.setlieu("France");
	D1.setdurevol("7 jours");
	D1.setvalidite("48 heures");
	D2.setlieu("Espagne");
	D2.setdurevol("3 jours");
	D2.setvalidite("48 heures");
	D3.setlieu("Italie");
	D3.setdurevol("8 jours");
	D3.setvalidite("48 heures");
	D4.setlieu("Maroc");
	D4.setdurevol("15 jours");
	D4.setvalidite("48 heures");
	D5.setlieu("Egypt");
	D5.setdurevol("7 jours");
	D5.setvalidite("48 heures");
	D5.setlieu("Egypt");
	D5.setdurevol("7 jours");
	D5.setvalidite("48 heures");
	system("pause");
}