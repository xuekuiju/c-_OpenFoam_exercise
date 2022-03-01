// A addition program in C++

	#include<iostream>
        #include<string>
	using namespace std;

	int main()
	{
		float a,b;
		string first_statement,second_statement,third_statement;

		first_statement = "Now we are going to add a and b";
		second_statement = "please state a value for a:  ";
		third_statement = "please state a value for b:  ";

		cout << first_statement << endl;
		cout << second_statement;
		cin >> a;
		cout << third_statement;
		cin >> b;
		cout << a+b << endl;
		return 0;
	}
//https://www.codingunit.com/cplusplus-tutorial-first-cplusplus-program-hello-world
