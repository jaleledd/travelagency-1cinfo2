#include <string>
#include <iostream>
using namespace std;
// classe déplacement
class deplacement
{
protected :
	int id_deplacement;
	int jour_depart;
	int heure_depart;
	int jour_arrivee;
	int heure_arrivee;
	float duree;
	int periode_validite;
	string lieu_depart;
	string lieu_arrivee;
public :
	deplacement (int a=0 , int jd=0 , int hd=0 , int ja=0 , int ha=0 , float d=0 , int pv=0, string ld="" , string la="") : id_deplacement (a)
		jour_depart(jd) , heure_depart(hd) , jour_arrivee (ja) , heure_arrivee(ha) , duree(d) , periode_validite(pv) , lieu_depart(ld), 
		lieu_arrivee(ld){}
	int getid_deplacement(){return id_deplacement;}
	virtual void afficher ()
	{
		cout<<"déplacement numéro \n"<<id_deplacement<<endl;
		cout<<"de \n"<<lieu_depart<<"vers \n"<<lieu_arrivee<<endl;
		cout<<"le départ est le \n" <<jour_depart<<"à \n"<<heure_depart<<endl;
		cout<<"l'arrivée est le \n" <<jour_depart<<"à \n"<<heure_depart<<endl;
		cout<<"la durée de déplacement est _n"<<duree<<endl;
		cout<<"la période de validité est \n"<<periode_validite<<endl;

	}
	void ajouter_deplacement ()
	{
	}
	void supprimer_deplacement ()
	{
	}
	void modifier_deplacement ()
	{
	}

};