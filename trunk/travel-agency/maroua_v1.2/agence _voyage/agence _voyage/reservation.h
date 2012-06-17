#include<iostream>
using namespace std;
#include<string>
#include<vector>
#ifndef RESERVATION_H_INCLUDED
#define RESERVATION_H_INCLUDED
class reservation
{
protected:
	int numres;
	string date;
	string etat;
public:
	reservation(int nr=0,string dat="",string eta=""):numres(nr),date(dat),etat(eta){}
	int getnumres(){return numres;}
	void setnumres(int nr){numres=nr;}
	string getdate(){return date;}
	string setdate(string dat){date=dat;}
	string getetat(){return etat;}
	string setetat(string eta){etat=eta;}

	void affiche()
	{
		cout << " Numéro de la reservation: " << numres << endl;
		cout << " Date de la reservation : " << date << endl;
		cout << " Etat de la reservation : " << etat << endl;
	}

	};
#endif
