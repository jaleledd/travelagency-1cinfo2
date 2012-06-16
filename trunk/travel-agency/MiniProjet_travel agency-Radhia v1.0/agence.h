#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include"deplacement.h"
#include"client.h"
#include"reservation.h"
#include"passager.h"
class agence
{
private:
	vector<client> tabcl;
	vector<passager> tabp;
	vector<reservation *> tabres;
	vector<deplacement*> tabdep;
public:
	agence(){}