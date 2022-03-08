#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double Reynolds_cals(double rho,double U,double D,double mu);

int main ()
{
     double rho,U,D,mu,Re;
     
     cout << "input density in kg/m3" <<endl;
     cin >> rho;
     
     cout <<"input velocity in m/s" << endl;
     cin >> U;
     
     cout << "input characteristic length in m" << endl;
     cin >> D;
    
     cout <<"input dynamic viscosity in SI units" << endl;
     cin >> mu;
     
     cout <<" There is the Reynolds number" << endl;

     Re = Reynolds_cals(rho,U,D,mu);
     return 0;
}


double Reynolds_cals(double rho,double U,double D,double mu)
{
	double Re;
	Re = rho*U*D/mu;
	return Re;
}
