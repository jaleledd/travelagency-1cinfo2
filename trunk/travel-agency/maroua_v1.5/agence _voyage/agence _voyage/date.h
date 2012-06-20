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
  int getjour(){return jour;}
 void setjour(int j){jour=j;}
    int getmois(){return mois;}
 void setmois(int m){mois=m;}
  int getannee(){return annee;}
 void setannee(int a){annee=a;}
  int getheur(){return heur;}
 void setheur(int h){heur=h;}
  int getmin(){return min;}
 void setmin(int mi){min=mi;}
 void affiche()
  {
    cout <<"Le "<<jour<<"/"<<mois<<"/"<<annee<<"    a    "<<heur<<"h"<<":"<<min<<"mn"<<endl;
 }
  
  };
#endif // DATE_H_INCLUDED
