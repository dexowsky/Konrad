#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    string login;
    string haslo;
    int proba;
    cout<<"Witamy w systemie logowania, podaj swoje dane!"<<endl;

    cout<<"Podaj login: ";
    cin >>login;
    cout<<"Podaj haslo: ";
    cin>>haslo;

    system ("cls");

    if(login=="konrad" && haslo=="1234" ||login=="daniel" && haslo=="4321"|| login=="ania" && haslo=="1999" ||login=="agu" && haslo=="5432")
    {
        cout<<"Dane zostaly wprowadzone prawidlowo!"<<endl;
    }
    else
    {
        for (proba=1; proba<=3; proba++)
        {
            cout<<"Dane zostaly podane nieprawidlowo! Masz " <<4-proba<<" proby! Sprobuj ponownie: "<<endl;
            cout<<"Podaj login: ";
            cin >>login;
            cout<<"Podaj haslo: ";
            cin>>haslo;

            system ("cls");
        }

    }

    return 0;
}
