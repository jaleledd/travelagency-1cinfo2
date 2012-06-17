#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include "date.h"
#include "reservation.h"
#ifndef DEPLACEMENT_H_INCLUDED
#define DEPLACEMENT_H_INCLUDED

class deplacement 
{
protected: 
	string lieu;
	string durevol;
	string validite;
	
public:
	deplacement(string li="",string dv="",string val=""):lieu(li),durevol(dv),validite(val){}
	string getdurevol(){return durevol;} 
	void  setdurevol(string dv){durevol=dv;}
	string getlieu(){return lieu;} 
	void  setlieu(string li){lieu=li;}
	string getvalidite(){return validite;}
	void setvalidite(string val){validite=val;}
	  void affiche()
	{
		cout<<"Le lieu de deplacement: "<<lieu<<endl;
		cout << "La durée de vol est : " << durevol<<endl;
		cout << "La validitée de l'offre est : " << validite <<endl;
		
	}	
};
#endif
