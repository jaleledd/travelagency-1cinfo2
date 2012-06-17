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
	string rep, rs;
	client tabc[100];
	passager tabp[100];
	agence A;
	cout <<"**************Coté Agence**************"<<endl;	
	cout<<"Merci d'authentifier:"<<endl;
	A.authentifier();
	cout<<"Donner le nombre des clients"<<endl;
	cin>>x;
	cout<<"***************Coté Client**************"<<endl;
	cout<<"vous étes un client passager (oui/non)"<<endl;
	cin>>rep;
	if (rep=="oui")
	{cout<<"Merci de rentrer votre coordonnées:"<<endl;
	for (int i=0;i<x;i++)
	tabp[i].affiche();
	}
	if (rep=="non")
	{cout<<"Merci de rentrer votre coordonnées:"<<endl;
	for (int i=0;i<x;i++)
	tabc[i].affiche();
	}
	cout<<"Contact:"<<endl;
	A.affiche();
	
	system("pause");
}