#include<iostream>
using namespace std;
#include<string>
#include<vector>
#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED
#include "deplacement.h"

class client
{
protected:
	int idcl;
	string nom;
	string prenom;	
	string adresse;
	string tel;
	string email;
	vector<deplacement*>tabdep;

public:
	client(int ic=0,string n="",string pr="",string ad="",string t="",string eml=""):idcl(ic),nom(n),prenom(pr),adresse(ad),tel(t),email(eml){}
	int getidcl(){return idcl;}
	void setidcl(int ic){idcl=ic;}
	string getnom(){return nom;}
	void setnom(string n){nom=n;}
	string getprenom(){return prenom;}
	void setprenom(string pr){prenom=pr;}
	string getadresse(){return adresse;}
	void setadresse(string ad){adresse=ad;}
	string gettel(){return tel;}
	void  settel(string t){tel=t;}
	string getemail(){return email;}
	void  setemail(string eml){email=eml;}
	
	virtual void affiche()
	{
		cout<<"l'ID du client:"<<idcl<<endl;
		cout << " Nom du client : " <<nom<<endl;
		cout << " Prenom du client : " <<prenom << endl;
		cout << " Adresse du client : " << adresse<<endl;
		cout << " Téléphone du client : " <<tel<<endl;
		cout << " E_mail du client : " <<email<<endl;
				
	}
	void poserquestion()
		 {
			string q;
			 cout<<"Quelle est votre question"<<endl;
			 cin>>q;

		 }
	void consulter()
	{
		cout << "La liste des deplacement : " << endl;
		for (int i=0; i<tabdep.size();i++)
			tabdep[i]->affiche();

	}

};

class passager:public client
{
protected: 
	string numpass;
public:
	passager(int ic=0,string n="",string pr="",string ad="",string t="",string eml="",string npas=""):client(ic,n,pr,ad,t,eml),numpass(npas){}
	string getnumpass(){return numpass;}
	void  setnumpass(string npas){numpass=npas;}
	void affiche()
	{
		cout<<"Coordonnées du passager \n";
		client::affiche();
		cout<<"Numéro de passeport:"<<numpass<<endl;
	}
	
};
#endif

