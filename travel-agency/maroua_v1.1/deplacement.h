#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include "date.h"
#include "reservation.h"

class deplacement 
{
protected: 
	string durevol;
	string validite;
	vector<reservation*>tabres;
public:
	deplacement(string dv="",string val=""):durevol(dv),validite(val){}
	string getdurevol(){return durevol;} 
	string  setldurevol(string dv){durevol=dv;}
	string getvalidite(){return validite;}
	string  setvalidite(string val){validite=val;}
	  void affiche()
	{
		cout << "La durée de vol est : " << durevol<<endl;
		cout << "La validitée de l'offre est : " << validite <<endl;
		for (int i=0; i<tabres.size();i++)
			tabres[i]->affiche();
	}
		 
	 int rechercheres(int num)
		 { 
			 int i=0;
			 while ((i<tabres.size()) && (tabres[i]->getnumres()!=num))
			 { i++;}
			 if (i<tabres.size())
			 return i;
			 return -1;
		 }
		 void ajoutres (reservation* r)
		 {
			 int x=r->getnumres();
			 if (recherchecl (x==-1))
				 tabres.push_back(r);
			 else 
				 cout<<"reservation existe déjà"<<endl;
		 }
		 void supprimerres(int i)
		 {
			 if (i<tabres.size())
				 tabres.erase(tabres.begin()+i);
		 }

	
};

