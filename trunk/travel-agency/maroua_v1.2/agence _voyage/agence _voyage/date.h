#include<iostream>
using namespace std;
#include<string>
#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
class date
{ 
protected:
  int jour,mois,annee,heur,min;
public:
  date(int j=0,int m=0,int a=0,int h=0,int mi=0):jour(j),mois(m),annee(a),heur(h),min(mi){};
   void amj()
     {
      cout<< " ******* la date  jj/mm/aaaa  hh:mm ******** "<<endl;
     cout<<"entrez le jour (jj) :";
     cin>>jour;
     while(jour<1 || jour>31)
     {  cout<<" erreur !!!!! \a\a\nreentrez le jour (jj) :";
      cin>>jour;
      }

    cout<<"entrez le mois (mm) :";
    cin>>mois;
    while(mois<1 || mois>12)
    {cout<<" erreur !!!!! \a\a \nreentrez le mois (mm) :";
    cin>>mois;
    }
    cout<<"entrez l'annee (aaaa) :";
    cin>>annee;
    while(annee<2010 || jour>2030)
    {cout<<" erreur !!!!! \a\a \nreentrez l'annee (aaaa) :";
    cin>>annee;
    }
  }
  void heurs()
   {
    cout<<"entre l'heur (hh): ";
	cin>>heur;
     while(heur<0 || jour>23)
    {
       cout<<" erreur !!!!! \a\a reentrez l'heur (hh) :";
       cin>>heur;
    }
    cout<<"entre les minites (mm)    : ";
	cin>>min;
    while(min<0 || min>59)
    {cout<<" erreur !!!!! \a\a reentrez les minute (mm) :";
    cin>>min;
    }
}


  
  };
#endif // DATE_H_INCLUDED
