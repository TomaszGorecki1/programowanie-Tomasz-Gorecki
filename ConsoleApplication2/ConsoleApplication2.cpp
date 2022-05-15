#include <iostream>
#include <cmath>

using namespace std;

void dziel(int a)
{
    cout << "Dzielniki liczby " << a << " to: 1, ";
    for (int i = 2; i <= (a / 2); i++)
    {
        if (a % i == 0) {
            cout << i << ", ";
        }
    }
    cout << a << ", " << endl;
}
void bezwgl(int a)
{
    cout << "Wartosci bezwgledne liczby " << a << " to: ";
    cout << a << " i " << -a << "." << endl;
}
void deltaetc(int a, int b, int c)
{
    int delta = 0;
    delta = b * b;
    int tmp1 = 0;
    tmp1 = a * c;
    tmp1 = tmp1 * 4;
    delta = delta - tmp1;
    cout << "Delta dla podanych parametrow funkcji to: " << delta << endl;

    if (delta > 0) {
        int mz1 = 0;
        mz1 = -b - sqrt(delta);
        mz1 = mz1 / (2 * a);
        cout << "pierwsze miejsce zerowe to: " << mz1 << endl;

        int mz2 = 0;
        mz2 = -b + sqrt(delta);
        mz2 = mz2 / (2 * a);
        cout << "drugie miejsce zerowe to: " << mz2 << endl;

        int p = 0;
        p = -b;
        p = p / (2 * a);
        cout << "Wierzcholek 1 - p to: " << p << endl;

        int q = 0;
        q = -delta / (4 * a);
        cout << "Wierzcholek 2 - q to: " << q << endl;
    }
    else if (delta < 0) {
        cout << "Delta jest ujemna wiec nie ma miejsc zerowych" << endl;
        int p = 0;
        p = -b;
        p = p / (2 * a);
        cout << "Wierzcholek 1 - p to: " << p << endl;

        int q = 0;
        q = -delta / (4 * a);
        cout << "Wierzcholek 2 - q to: " << q << endl;
        return;
    }
    
}
void mnozenie(int a, int b) 
{
    int wynik = a * b;
    cout << "wynik to " << wynik << endl;
}

int main()
{
    while(true){
    cout << "_________________Kalkulator Wyrazen Matematycznych______________________" << endl;
    cout << "|1) Dzielniki liczby                                                   |" << endl;
    cout << "|2) Wartosc bezwgledna liczby                                          |" << endl;
    cout << "|3) Delta, miejsca zerowe i wierzcholek (p i q)                        |" << endl;
    cout << "|4) Mnozenie dwoch liczb                                               |" << endl;
    cout << "|5) Aby wylaczyc program wpisz 0                                       |" << endl;
    cout << "|          Aby wykonac kalkulacje nalezy wpisac odpowiedni numer       |" << endl;
    cout << "|______________________________________________________________________|" << endl;

    int choice = 0;
    cout << "wprowadz swoj wybor: ";
    cin >> choice;
    if (choice==1) {
        int a;
        cout << "wprowadz liczbe ktorej dzielniki chcesz pozyskac: ";
        cin >> a;
        dziel(a);
    }
    if (choice == 2) {
        int a;
        cout << "wprowadz liczbe ktorej wartosc bezwgledna chcesz pozyskac: ";
        cin >> a;
        bezwgl(a);
    }
    if (choice == 3) {
        cout << "wprowadz wspolczynnik funkcji a:";
        int a = 0;
        cin >> a;
        cout << "wprowadz wspolczynnik funkcji b:";
        int b = 0;
        cin >> b;
        cout << "wprowadz wspolczynnik funkcji c:";
        int c = 0;
        cin >> c;
        deltaetc(a, b, c);
    }
    if (choice == 4) {
        cout << "wprowadz pierwsza liczbe do mnozenia:";
        int a = 0;
        cin >> a;
        cout << "wprowadz druga liczbe do mnozenia:";
        int b = 0;
        cin >> b;
        mnozenie(a, b);
    }

    if (!choice) 
    {
        return 0;
    }
   }
}