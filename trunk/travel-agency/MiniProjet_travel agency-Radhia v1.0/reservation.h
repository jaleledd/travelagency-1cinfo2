#include <string>
#include <iostream>
using namespace std;
// classe réservation
class reservation
{
protected :
	int num_res;
	int date;
	string etat;
public :
	client (int numr=0 , int date_res=0  , string suiv_res="") : num_res (numr) , date (date_res) , etat (suiv_res) {}
	int getnum_res (){return num_res;}
	virtual void afficher ()
	{
		cout<<"Numéro de la reservation :  \n"<<num_res<<endl;
		cout<<"date de réservation :  \n"<<date<<endl;
		cout<<"suivi de la réseravation : \n"<<etat<<endl;
	}
	void valider ()
	{
	}
	void annuler ()
	{
	}
	void fermer ()
	{
	}

};
