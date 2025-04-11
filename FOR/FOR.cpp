// FOR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI
#define SIMPLE_NUMBERS

void main()

{
    setlocale(LC_ALL, "Russian");

   /* int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << i<<"\t";
    }*/
    
    /*for (; ; )
    {
cout << "Hello FOR!";
    }*/


#ifdef FACTORIAL
    int n;
    int f = 1;

    cout << "¬ведите количество итераций: "; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        
        cout << i << "\t";
        f *= i;
        cout << f << endl;

        
    }
    cout << endl;

#endif FACTORIAL

#ifdef POWER
    double a;
    int n;
    cout << "¬ведите основание степени: "; cin >> a;
    cout << "¬ведите показатель степени: "; cin >> n;
    double N = 1;
    if (n < 0)
    {
        a = 1 / a;
        n = -n;
    }


    for (int i = 0; i < n; i++)
    {
        N *= a;
    }
cout << N << endl;
#endif POWER


#ifdef ASCII
for (int i = 0; i < 256; i++)
{
    if (i % 16 == 0) cout << endl;
    {

    }
    cout << (char)i << " ";
}

#endif ASCII

#ifdef FIBONACCI
int n;
cout << "¬ведите предельное число: "; cin >> n;
for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)

    cout << a << "\t";
cout << endl;

cout << "¬ведите количество членов р€да: "; cin >> n;
for (long long i = 0, a = 0, b = 1, c = a + b; i < n; i++, c = (a = b) + (b = c))
    cout << a << "\t";
cout << endl;
#endif FIBONACCI


#ifdef SIMPLE_NUMBERS
int n;
cout << "¬ведите предельное число: "; cin >> n;

for (int i = 1; i < n; i++)
{
    int sum = 0;

    for (int j = 1; j < sqrt(i); j++) {



        if (i % j == 0) {
            sum +=j;
            //break;
        }
       // if (sum==i)
    }

    //if (simple) cout << i << "\t";
}


#endif SIMPLE_NUMBERS




int n;
cout << "¬ведите предельное число: "; cin >> n;

for (int i = 1; i < n; i++)
{
    bool simple = true;

    for (int j = 2; j < sqrt(i); j++) {



        if (i % j == 0) {
            simple = false;
            break;
        }

    }

    if (simple) cout << i << "\t";
}
cout << endl;

}







// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

 /*
 Tips for Getting Started: 
   1. Use the Solution Explorer window to add/manage files
   2. Use the Team Explorer window to connect to source control
   3. Use the Output window to see build output and other messages
   4. Use the Error List window to view errors
   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
   */
