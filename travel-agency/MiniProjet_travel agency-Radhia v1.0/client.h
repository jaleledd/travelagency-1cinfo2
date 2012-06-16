#include <string>
#include <iostream>
using namespace std;
// classe client
class client
{
protected :
	int id_client;
	int telephone;
	string nom;
	string prenom;
	string e-mail
public :
	client (int idc=0 , int tel=0 , string n="" , string p="" , string mail="") : id_client (idc) , telephone (tel) , nom (n) , prenom (p) , 
	e-mail (mail){}
	int getid_client (){return id_client;}
	virtual void afficher ()
	{
		cout<<"Identifiant client \n"<<id_client<<endl;
		cout<<"Nom et prénom :  \n"<<nom<<" \n"<<prenom<<endl;
		cout<<"Numéro de téléphone est \n"<<telephone<<endl;
		cout<<"Son e-mail est :  \n"<<e-mail<<endl;
	}
	void ajouter_client ()
	{
	}
	void supprimer_client ()
	{
	}
	void modifier_client ()
	{
	}

};
