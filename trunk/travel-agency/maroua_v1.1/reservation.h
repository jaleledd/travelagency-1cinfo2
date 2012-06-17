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

	void valider()
{ 
	bool confirme=false;
	string rep;
         cout<<"est ce que vous voulez vraiment valider votre reservation (oui/non)";
          cin>>rep;
          if(rep=="oui")
          confirme=true;
		  else
		  confirme=false;
}

	void annuler()
{ 
	 string rep;
	 bool confirme;
         cout<<"est ce que vous voulez vraiment annuler votre reservation (oui/non)";
          cin>>rep;
          if(rep=="oui")
          confirme=true;
		    else
	      confirme=false;
}
};
#endif
