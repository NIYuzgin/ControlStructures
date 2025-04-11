#include<iostream>
using std::cin;
using std::cout;
using std::endl;
  

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4

#define CHESS

//#define RHOMBUS_2

//#define RHOMBUS_3


void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;

	}
#endif SQUARE


#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}

		cout << endl;
	}
#endif  TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) {
			cout << "* ";
		}

		cout << endl;
	}
#endif TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << " ";


		for (int j = i; j < n; j++) cout << "*";

		cout << endl;
	}

#endif // TRIANGLE_3

#ifdef CHESS
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i+j) % 2 == 0) cout << "+ ";
			
			/*
			if (i % 2 == j % 2) cout << "+ ";
			else cout << "- ";
			*/

			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";

			cout << (i % 2 == j % 2 ? "+ " : "- ");

		}
		cout << endl;


	}
#endif // CHESS

#ifdef RHOMBUS_2

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << "  "; cout << "/";
		for (int j = 0; j < i * 2; j++) cout << "  "; cout << "\\";
		cout << endl;

	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  "; cout << "/";
		for (int j = 0; j < (n - i - 1) * 2; j++) cout << "  "; cout << "\\";
		cout << endl;

	}




#endif // RHOMBUS_2



#ifdef RHOMBUS_3

	for (int i = 0; i < n*2; i++)
	{
		for (int j = 0; j < n * 2; j++) {

			if (i + n == j || j + n == i)
			{
				cout << "\\";
			}
			else if (i == n - 1- j || i -n == n*2 - 1 - j)
			{
				cout << "/";

			}
			 else cout << " ";
			

		}
cout << endl;

		/*for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++) cout << "  "; cout << "/";
			for (int j = 0; j < (n - i - 1) * 2; j++) cout << "  "; cout << "\\";
			cout << endl;

		}*/




#endif // RHOMBUS_3




	}
