#include <string>
#include <iostream>
using namespace std;
// classe passager
class passager : public client
{
private :
	int num_passeport;
public :
	client (int idc=0 , int tel=0 , string n="" , string p="" , string mail="" , int nump=0) : client (idc , tel , n , p , mail), num_passeport (nump) {}
	int getnum_passeport (){return num_passeport;}
	virtual void afficher ()
	{
		client :: afficher ()
		cout<<"Son numéro de passeport est :  \n"<<num_passeport<<endl;
	}
};
