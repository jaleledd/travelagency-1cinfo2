#include<iostream>
using namespace std;
#include<string>
#include <vector>
#include "client.h"
#include "reservation.h"

class agence
{
protected:
	int idag;
	string nom;
	string mail;
	string login;
	string pwd;
	vector <client> tabcl;
	vector<reservation> tabres;
	
public:
	agence(int id=0,string nag="",string mailag="",string log="",string psw=""):idag(id),nom(nag),mail(mailag),login(log),pwd(psw){}
	int getidag(){return idag;}
	void setidag(int id){idag=id;}
	string getnom(){return nom;}
    void  setnom(string nag){nom=nag;}
	string getmail(){return mail;}
	void setmail(string mailag){mail=mailag;}
	string getlogin(){return login;} 
	void setlogin(string log){login=log;}
	string getpwd(){return pwd;}
	void setpwd(string psw){pwd=psw;}

	     void affiche()
	{
		cout << "vous pouvez contacter "<<nom <<endl;
		cout<<"sur son adresse mail:"<<mail<<endl;
		
			
	}
		      void affichecl()
	{
		cout << "La liste des clients actuelle  : " << endl;
		for (int i=0; i<tabcl.size();i++)
			tabcl[i].affiche();
		
	}
		
		      void afficheres()
	{
		cout << "La liste des reservations actuelle  : " << endl;
		for (int i=0; i<tabres.size();i++)
			tabres[i].affiche();
		
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
		
		 int recherchecl(int code)
		 { 
			for (int i=0;i<tabcl.size();i++)
			 if (tabcl[i].getidcl()==code)
			  return i;
			 
			
			return -1;
		 }
		 void ajoutclient (client c)
		 {
			 int x=c.getidcl();
			 if (recherchecl (x==-1))
				 tabcl.push_back(c);
			 else 
				 cout<<"client existe dejà"<<endl;
		 }
		 void supprimercl(int i)
		 {
			 if (i<tabcl.size())
				 tabcl.erase(tabcl.begin()+i);
		 }
		  int rechercheres(int num)
		 { 
			 int i=0;
			 while ((i<tabres.size()) && (tabres[i].getnumres()!=num))
			 { i++;}
			 if (i<tabres.size())
			 return i;
			 return -1;
		 }
		 void ajoutres (reservation r)
		 {
			 int x=r.getnumres();
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
		 void validerres()
{ 
		string rep;
         cout<<"est ce que vous voulez vraiment valider la reservation (oui/non)";
          cin>>rep;
          if(rep=="oui")
		  {cout<<"Reservation validee"<<endl;}
		    else
			{ cout << "Reservation n'est pas validee"<<endl;}
		
}

	void annulerres()
{ 
	 string rep;
         cout<<"est ce que vous voulez vraiment annuler votre reservation (oui/non)";
          cin>>rep;
          if(rep=="oui")
		  {cout<<"Reservation annulee"<<endl;}
		    else
			{ cout << "Reservation n'est pas annulee"<<endl;}
}

	
	bool AjouterClient(client nouveauClient)
	{
		if(recherchecl(nouveauClient.getidcl()) == -1)
		{
			tabcl.push_back(nouveauClient);
			return true;
		}
		else
			return false;
	}


	bool AjouterRes(reservation nouveauRes)
	{
		if(rechercheres(nouveauRes.getnumres()) == -1)
		{
			tabres.push_back(nouveauRes);
			return true;
		}
		else
			return false;
	}

	void repquestion()
		 {
			string r;
			 cout<<"Réponse:"<<endl;
			 cin>>r;

		 }
};
