#include<iostream>
using namespace std;
#include<string>
#include<vector>
#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED

class client
{
protected:
	int idcl;
	string nom;
	string prenom;	
	string adresse;
	string tel;
	string email;
public:
	client(int ic=0,string n="",string pr="",string ad="",string t="",string eml=""):idcl(ic),nom(n),prenom(pr),adresse(ad),tel(t),email(eml){}
	int getidcl(){return idcl;}
	void setidcl(int ic){idcl=ic;}
	string getnom(){return nom;}
	string setnom(string n){nom=n;}
	string getprenom(){return prenom;}
	string setprenom(string pr){prenom=pr;}
	string getadresse(){return adresse;}
	string  setadresse(string ad){adresse=ad;}
	string gettel(){return tel;}
	string  settel(string t){tel=t;}
	string getemail(){return email;}
	string  setemail(string eml){email=eml;}
	
	virtual void affiche()
	{
		cout<<"l'ID du client:"<<endl;
		cin>>idcl;
		cout << " Nom du client : " << endl;
		cin>>nom;
		cout << " Prenom du client : " <<endl;
		cin>>prenom;
		cout << " Adresse du client : " << endl;
			cin>>adresse;
		cout << " Téléphone du client : " <<endl;
			cin>>tel;
		cout << " E_mail du client : " <<endl;
			cin>>email;
		
	}

};

class passager:public client
{
protected: 
	string numpass;
public:
	passager(int ic=0,string n="",string pr="",string ad="",string t="",string eml="",string npas=""):client(ic,n,pr,ad,t,eml),numpass(npas){}
	void affiche()
	{
		cout<<"Coordonnées du passager \n";
		client::affiche();
		cout<<"Numéro de passeport:"<<endl;
			cin>>numpass;
	}
};
#endif

