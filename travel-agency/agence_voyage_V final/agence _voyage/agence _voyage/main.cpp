#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include "date.h"
#include "reservation.h"
#include "agence.h"
#include "client.h"
#include "deplacement.h"

const int NB_CLIENTS = 5;
void main ()
{
	int id, p, ci, is, Nr, ir , id1 , B, Br, mn, v;
	string rep, rs, ch, ch1,ch2,ch3, q, x;
	client C;
	
	agence A;
		
	client C1 (1,"Ben salah","Mohamed","Rue Mohamed 5","55300781","mohsal@gmail.com");
	client C2 (2,"mejri","sabeur","Rue ettahrir","55300782","mejsab@gmail.com");
	client C3 (3,"cherif","kamel","cité olympique","55300783","kamkam@gmail.com");
	client CA (8,"chourib","maroua","cité ibn khaldoun","55300259","maroua.chourib@gmail.com");
	
	A.AjouterClient(C1);
	A.AjouterClient(C2);
	A.AjouterClient(C3);
	int indiceClient = A.recherchecl(2);
	indiceClient = A.recherchecl(5);

	passager P1(4,"ben rjab","Rajaa","cité el khadhra","55300784","rjabraja@gmail.com","123456789");
	passager P2(5,"arfaoui","yahya","Ariana","55300785","yahyah@gmail.com","987654321");
	
	deplacement D1("France","7 jours","48 heures");
	deplacement D2("Espagne","3 jours","48 heures");
	deplacement D3("Italie","8 jours","48 heures");
	deplacement D4("Maroc","15 jours","48 heures");
	deplacement D5("Egypt","7 jours","48 heures");
	
	date datd1(12,06,2012,06,00);
	date datar1(19,06,2012,18,00);
	date datd2(9,06,2012,10,30);
	date datar2(12,06,2012,22,30);
	date datd3(18,06,2012,8,00);
	date datar3(26,06,2012,20,00);
	date datd4(1,06,2012,6,30);
	date datar4(15,06,2012,18,30);
	date datd5(7,06,2012,9,00);
	date datar5(14,06,2012,21,00);
	
	A.setnom("Mme Chikhaoui Najet");
	A.setmail("najchi@gmail.com");
	
	reservation R1(1234,"18/03/2012","En cours de traitement");
	reservation R2(4321,"18/04/2012","En cours de traitement");
	reservation RA(9876,"20/06/2012","depose");
		
	A.AjouterRes(R1);
	A.AjouterRes(R2);
	int indiceRes = A.recherchecl(2);
	indiceRes = A.recherchecl(5);

	cout<<"************************** MENU PRINCIPALE ******************************"<<endl;
	cout<<"1) Consulter les deplacements"<<endl;
	cout<<"2) Afficher les reservations "<<endl;
	cout<<"3) Poser Question"<<endl;
	cout<<"4) L'espace d'agencier"<<endl;
	cout<<"Merci de saisir votre choix (taper 1,2,3 ou 4 )"<<endl;
	int choix;
	cin>>choix;
	      if (choix==1)
         {
   		   cout<<"Voici la liste des deplacement pour ce mois "<<endl;
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
	       cout <<" Voulez vous afficher les reservations disponibles? (oui/non) "<<endl;
	       cin>>ch;
	        if (ch=="oui")
	        {
		        cout<<"Voici la liste des reservations "<<endl;
				P1.affiche();
				R1.affiche();
		     	D3.affiche();
				cout<<""<<endl;
				P2.affiche();
				R2.affiche();
			    D4.affiche();
	            cout <<"Avez vous des questions ?(oui/non)"<<endl;
	            cin>>q;
	            if(q=="oui")
	            {C.poserquestion();}
	            else
	            {cout<<"******** Merci pour votre visite *************"<<endl;}
	         }
			 else 
	            {
			      cout <<"Avez vous des questions ?(oui/non)"<<endl;
	              cin>>ch1;
	              if(ch1=="oui")
	              {C.poserquestion();}
	               else
				   {cout<<"******** Merci pour votre visite *************"<<endl;}
	             }
	
             }
	   
		
	         else if (choix==2)
			 {
			   cout<<"Voici la liste des client avec ses reservations "<<endl;
			   P1.affiche();
			   R1.affiche();
		       D3.affiche();
			   cout<<""<<endl;
			   P2.affiche();
		       R2.affiche();
			   D4.affiche();
			   cout<<"Voulez vous afficher la liste des deplacements ? (oui/non)"<<endl;
			   cin>>ch2;
			   if (ch2=="oui")
	           {
				   cout<<"Voici la liste des deplacement pour ce mois "<<endl;
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
			 }
	         else 
	         {
				 cout <<"Avez vous des questions ?(oui/non)"<<endl;
	             cin>>ch3;
	             if(ch3=="oui")
	             {C.poserquestion();}
	             else 
	              {cout<<"******** Merci pour votre visite *************"<<endl;}
	          }
 
			}
	
	        else if (choix==3)
			{
					C.poserquestion();
					cout<<" Taper (1) pour afficher la liste des deplacements"<<endl;
					cin>>p;
					if (p==1)
					{
						cout<<"Voici la liste des deplacements pour ce mois "<<endl;
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
				        cout <<" Voulez vous afficher les reservations disponibles? (oui/non) "<<endl;
	                    cin>>x;
	                    if (x=="oui")
	                    {
							cout<<"Voici la liste des reservations "<<endl;
				            P1.affiche();
				            R1.affiche();
		     	            D3.affiche();
				            cout<<""<<endl;
				            P2.affiche();
				            R2.affiche();
			                D4.affiche();
			           }
			     }
				else
                  {cout<<"******** Merci pour votre visite *************"<<endl;}	  
	            }
	
			else if (choix==4)
			{
				cout << "*************** Espace d'agencier *********************"<<endl;
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
		        cout<<"7_Valider ou annuler reservation"<<endl;
				cout<<"8_repondre aux questions"<<endl;
		        cout<<""<<endl;
		        cout<<"Saisir votre choix"<<endl;
		        cin>>ci;
		        if (ci==1)
		        { 
					cout<<"Entrerl'id du client"<<endl;
		            cin>>id1;
		            B= A.recherchecl(id1);
		            cout<<"Resultat:"<<B<<endl;
									
				 }
		        else if (ci==2)
				{
					cout<<"Ajouter client"<<endl;
		            A.ajoutclient(CA);
					A.affichecl();
		        }
		        else if (ci==3)
				{ 
					cout<<"Supprimer client: Merci d'entrer l'ID"<<endl;
		            cin>>is;
		            A.supprimercl(is);
					A.affichecl();
		        }
		         else if (ci==4)
				 { 
					 cout<<"Donner le numéro de reservation"<<endl;
		             cin>>Nr;
		             Br= A.rechercheres(Nr);
					 cout<<"Resultat:"<<Br<<endl;
		         }
		         else if (ci==5)
				 {
			 		 cout<<"Ajouter reservation"<<endl;
			         A.ajoutres(RA);
					 A.afficheres();
	
		          }
		         else if (ci==6)
				 { 
					 cout<<"Supprimer reservation: Merci d'entrer l'ID"<<endl;
			         cin>>ir;
			         A.supprimerres(ir);
					 A.afficheres();
		          }
		         else if (ci==7)
				 { 
					 cout<<"Valider ou annuler reservations:"<<endl;
					 cout<<"Taper 1 pour valider et 2 pour annuler les reservation"<<endl;
					 cin>>v;
					 if (v==1)
						  A.validerres();
					 else
						 A.annulerres();
				 }
				  else if (ci==8)
				 {
				   A.repquestion();

			     }
				      else
				{	cout  <<"choix invalide"<<endl;}
		         } 		
	else
		{
			cout<<"erreur : Merci de saisir un numero entre 1 et 4"<<endl;
		}
		
			 system("pause");

}