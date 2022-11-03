#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    cout << "Program sluzy do liczenia miejsca zerowego dla rownania liniowego." << endl;
    cout << "Funkcja ma postac: f(x)=a*x+b" << endl << endl;
    float a, b;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    //miejsce zerowe to: 0=a*x+b <=> -b=a*x  <=> (-b)/a=x
    if( a != 0 )
    {
        cout << "Funkcja f(x) przyjmuje wartosc=0 dla x=" <<( - b ) / a << endl;
    }
    else
    {
        cout << "wyraz wolny staje sie nasza funkcja liniowa i przyjmuje postac y=" << b <<endl;
    }



   getch();
    return( 0 );
}
