#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include "date.h"
#include "reservation.h"
#include "agence.h"
#include "client.h"
#include "deplacement.h"

void main ()
{
	int x, id;
	int ch, ch1, ch2;
	string rep, rs;
	client C,C1,C2,C3;
	passager P1,P2 ;
	agence A;
	reservation R1,R2;
	deplacement D1,D2,D3,D4,D5;
	date datd1,datar1,datd2,datar2,datd3,datar3,datd4,datar4,datd5,datar5;
	C1.setnom("Ben salah");
	C1.setprenom("Mohamed");
	C1.setadresse("Rue Mohamed 5");
	C1.settel("55300781");
	C1.setemail("mohsal@gmail.com");
	C2.setnom("mejri");
	C2.setprenom("sabeur");
	C2.setadresse("Rue ettahrir");
	C2.settel("55300782");
	C2.setemail("mejsab@gmail.com");
	C3.setnom("cherif");
	C3.setprenom("kamel");
	C3.setadresse("cit� olympique");
	C3.settel("55300783");
	C3.setemail("kamkam@gmail.com");
	P1.setnom("ben rjab");
	P1.setprenom("Rajaa");
	P1.setadresse("cit� el khadhra");
	P1.settel("55300784");
	P1.setemail("rjabraja@gmail.com");
	P1.setnumpass("123456789");
	P2.setnom("arfaoui");
	P2.setprenom("yahya");
	P2.setadresse("Ariana");
	P2.settel("55300785");
	P2.setemail("yahyah@gmail.com");
	P2.setnumpass("987654321");
	D1.setlieu("France");
	D1.setdurevol("7 jours");
	D1.setvalidite("48 heures");
	D2.setlieu("Espagne");
	D2.setdurevol("3 jours");
	D2.setvalidite("48 heures");
	D3.setlieu("Italie");
	D3.setdurevol("8 jours");
	D3.setvalidite("48 heures");
	D4.setlieu("Maroc");
	D4.setdurevol("15 jours");
	D4.setvalidite("48 heures");
	D5.setlieu("Egypt");
	D5.setdurevol("7 jours");
	D5.setvalidite("48 heures");
	D5.setlieu("Egypt");
	D5.setdurevol("7 jours");
	D5.setvalidite("48 heures");
	datd1.setjour(12);
	datd1.setmois(06);
	datd1.setannee(2012);
	datd1.setheur(6);
	datd1.setmin(00);
	datar1.setjour(19);
	datar1.setmois(06);
	datar1.setannee(2012);
	datar1.setheur(18);
	datar1.setmin(00);
	datd2.setjour(9);
	datd2.setmois(06);
	datd2.setannee(2012);
	datd2.setheur(10);
	datd2.setmin(30);
	datar2.setjour(12);
	datar2.setmois(06);
	datar2.setannee(2012);
	datar2.setheur(22);
	datar2.setmin(30);
	datd3.setjour(18);
	datd3.setmois(06);
	datd3.setannee(2012);
	datd3.setheur(8);
	datd3.setmin(00);
	datar3.setjour(26);
	datar3.setmois(06);
	datar3.setannee(2012);
	datar3.setheur(20);
	datar3.setmin(00);
	datd4.setjour(1);
	datd4.setmois(06);
	datd4.setannee(2012);
	datd4.setheur(6);
	datd4.setmin(30);
	datar4.setjour(15);
	datar4.setmois(06);
	datar4.setannee(2012);
	datar4.setheur(18);
	datar4.setmin(30);
	datd5.setjour(7);
	datd5.setmois(06);
	datd5.setannee(2012);
	datd5.setheur(9);
	datd5.setmin(00);
	datar5.setjour(14);
	datar5.setmois(06);
	datar5.setannee(2012);
	datar5.setheur(21);
	datar5.setmin(00);
	A.setnom("Mme Chikhaoui Najet");
	A.setmail("najchi@gmail.com");
	R1.setnumres(1234);
	R1.setdate("18/03/2012");
	R1.setetat("Validee");
	R2.setnumres(1275);
	R2.setdate("18/04/2012");
	R2.setetat("En cours de traitement");
	cout<<"************************** MENU PRINCIPALE ******************************"<<endl;
	cout<<"1) Consulter les deplacements"<<endl;
	cout<<"2) Afficher les reservation "<<endl;
	cout<<"3) Poser Question"<<endl;
	cout<<"4) L'espace d'agencier"<<endl;
	cout<<"Merci de saisir votre choix (taper 1,2,3 ou 4 )"<<endl;
	int choix;
	cin>>choix;
	switch (choix)
{
    case 1:
		{
		cout<<"Voici le liste des deplacement pour ce mois "<<endl;
		cout<<""<<endl;
		D1.affiche();
		cout<<"Depart: "; 
		datd1.affiche();
		cout<<""<<endl;
		cout<<"Arrivee: "; 
		datar1.affiche();
		cout<<""<<endl;
		D2.affiche();
		cout<<"Depart: "; 
		datd2.affiche();
		cout<<""<<endl;
		cout<<"Arrivee: "; 
		datar3.affiche();
		cout<<""<<endl;
		D3.affiche();
		cout<<"Depart: "; 
		datd3.affiche();
		cout<<""<<endl;
		cout<<"Arrivee: "; 
		datar3.affiche();
		cout<<""<<endl;
		D4.affiche();
		cout<<"Depart: "; 
		datd4.affiche();
		cout<<""<<endl;
		cout<<"Arrivee: "; 
		datar4.affiche();
		cout<<""<<endl;
		D5.affiche();
		cout<<"Depart: "; 
		datd5.affiche();
		cout<<""<<endl;
		cout<<"Arrivee: "; 
		datar5.affiche();
		cout<<""<<endl;
	    break;
		}
	case 2:
			{
				P1.affiche();
				R1.affiche();
		     	D3.affiche();
				cout<<""<<endl;
				P2.affiche();
				R2.affiche();
			    D4.affiche();
				break;
			}
	
	case 3:
			{
					C.poserquestion();
				  	break;
			}
	case 4:
			{

          cout << "*************** Espace d'agencier *********************";
		  cout<<"Contact:"<<endl;
		  A.affiche();
		  cout<<"Merci d'authentifier"<<endl;
		  A.authentifier();
		  cout<<"1_Recherche client"<<endl;
		  cout<<"2_Ajout client"<<endl;
		  cout<<"3_Supprimer client"<<endl;
		  cout<<"4_Recherche reservation"<<endl;
		  cout<<"5_Ajout reservation"<<endl;
		  cout<<"6_Supprimer reservation"<<endl;
		  cout<<"7_Valider reservation"<<endl;
		  cout<<"8_Annuler reservation"<<endl;
		 break;
	}
	}
		 system("pause");
}