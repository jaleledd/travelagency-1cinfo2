#include <string>
#include <iostream>
using namespace std;
// classe r�servation
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
		cout<<"Num�ro de la reservation :  \n"<<num_res<<endl;
		cout<<"date de r�servation :  \n"<<date<<endl;
		cout<<"suivi de la r�seravation : \n"<<etat<<endl;
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
