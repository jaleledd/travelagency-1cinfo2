#include<iostream>
using namespace std;
#include<string>
#include <vector>
#include "client.h"

class agence
{
protected:
	int idag;
	string nom;
	string mail;
	string login;
	string pwd;
	vector <client*> tabcl;
public:
	agence(int id=0,string nag="",string mailag="",string log="",string psw=""):idag(id),nom(nag),mail(mailag),login(log),pwd(psw){}
	int getidag(){return idag;}
	void setidag(int id){idag=id;}
	string getnom(){return nom;}
    string  setnom(string nag){nom=nag;}
	string getmail(){return mail;}
	string  setmail(string mailag){mail=mailag;}
	string getlogin(){return login;} 
	string  setlogin(string log){login=log;}
	string getpwd(){return pwd;}
	string  setpwd(string psw){pwd=psw;}

	     void affiche()
	{
		cout << "vous pouvez contacter Monsieur " ;
		cin>>nom ;
		cout<<"sur son adresse mail:";
		cin>>mail;
	
	}
		 void authentifier()
    {
		string l,p;		
		do
		{
		cout<<"Entrer le login:";
		cin>>l;
		cout<<"Entrer le mot de passe:";
		cin>>p;
		if ((l!="admin")||(p!="admin"))
		cout<<"Login ou mot de passe incorrecte"<<endl;
		pwd=p;
		login=l;
		}while ((l!="admin")||(p!="admin"));
		}
		void poserquestion()
		 {
			string q;
			 cout<<"Quelle est votre question"<<endl;
			 cin>>q;

		 }
		 int recherchecl(int code)
		 { 
			 int i=0;
			 while ((i<tabcl.size()) && (tabcl[i]->getidcl()!=code))
			 { i++;}
			 if (i<tabcl.size())
			 return i;
			 return -1;
		 }
		 void ajoutclient (client* c)
		 {
			 int x=c->getidcl();
			 if (recherchecl (x==-1))
				 tabcl.push_back(c);
			 else 
				 cout<<"client existe déjà"<<endl;
		 }
		 void supprimercl(int i)
		 {
			 if (i<tabcl.size())
				 tabcl.erase(tabcl.begin()+i);
		 }

	
};
