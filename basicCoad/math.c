// A addition program in C++

	#include<iostream>
        #include<string>
        #include<cmath>
	using namespace std;

	int main()
	{
		float m,v;
		string first_statement,second_statement,third_statement;

		first_statement = "Now we are going to caculate KE = 1/2*m*v^2";
		second_statement = "please state a value for m:  ";
		third_statement = "please state a value for v:  ";

		cout << first_statement << endl;
		cout << second_statement;
		cin >> m;
		cout << third_statement;
		cin >> v;
		cout << (1.0/2.0)*m*pow(v,2) << endl;

		cout << sqrt(2.0) << endl;
		cout << pow (2.0,0.5) << endl;
		cout << 2-3.55 << endl;
		return 0;
	}
//https://www.codingunit.com/cplusplus-tutorial-first-cplusplus-program-hello-world
