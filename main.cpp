#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;

int main()
{
    //https://cpp0x.pl/kursy/Kurs-WinAPI-C++/Roznosci/Kolory-w-konsoli/374
    HANDLE uchwyt = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(uchwyt, 12);
    cout << "\aPodaj imie: ";
    cin >> imie;
    int pkt = 0;

    system("cls");
    cout<< "3";
    Sleep(1000);
    system("cls");
    cout<< "3..2";
    Sleep(1000);
    system("cls");
    cout<< "3..2..1..";
    Sleep(1000);
    system("cls");

    cout << imie << " witaj w tescie z programowania\n";

    cout << "Co to jest C++?"<<endl;
    cout << "a) Piosenkarka"<<endl;
    cout << "b) Jezyk programowania"<<endl;
    cout << "c) Mlynek do herbaty"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "b")
    {
        cout << "Poprawna odpowiedz!"<<endl;
        pkt++;
    }
    else
    {
        cout << "Zle! Jest to jezyk programowania!"<<endl;

    }

    Sleep(1000);


   cout<<"Kto byl pierwszym prezydentem Stanow Zjednoczonych?"<<endl;
   cout<<"a) Benjamin Franklin"<<endl;
   cout<<"b) Thomas Jefferson"<<endl;
   cout<<"c) George Washington"<<endl;
   cin>>odp;
   if(odp=="c"){
       cout<<"Poprawna odpowiedz!"<<endl;
       pkt++;
   }else{
       cout << "Zle! Jest to odp c"<<endl;
   }
    Sleep(1000);


    cout<<"Jak nazywa sie proces, w ktorym rosliny przekształcaja swiatlo sloneczne na energię chemiczna?"<<endl;
    cout<<"a) Fotosynteza"<<endl;
    cout<<"b) Fermentacja"<<endl;
    cout<<"c) Dekarboksylacja"<<endl;
    cin>>odp;
    if(odp=="a"){
        cout<<"Poprawna odpowiedz!"<<endl;
        pkt++;
    }else{
        cout << "Zle! Jest to odp a"<<endl;
    }
    Sleep(1000);
    cout<<"Ktoóry z tych autorow napisał Romea i Julie?"<<endl;
    cout<<"a) Charles Dickens"<<endl;
    cout<<"b) William Shakespeare"<<endl;
    cout<<"c) Jane Austen"<<endl;
    cin>>odp;
    if(odp=="b"){
        cout<<"Poprawna odpowiedz!"<<endl;
        pkt++;
    }else{
        cout << "Zle! Jest to odp b"<<endl;
    }
    Sleep(1000);
    cout<<"Jaki kontynent jest najwiekszy pod wzgledem powierzchni?"<<endl;
    cout<<"a) Europa"<<endl;
    cout<<"b) Afryka"<<endl;
    cout<<"c) Azja"<<endl;
    cin>>odp;
    if(odp=="c"){
        cout<<"Poprawna odpowiedz!"<<endl;
        pkt++;
    }else{
        cout << "Zle! Jest to odp c"<<endl;
    }
    Sleep(1000);
    cout<<"W jakim sporcie druzyna probuje zdobyc punkty, przesuwając pilke przez bramke rywala?"<<endl;
    cout<<"a) Baseball"<<endl;
    cout<<"b) Koszykówka"<<endl;
    cout<<"c) Piłka nożna"<<endl;
    cin>>odp;
    if(odp=="c"){
        cout<<"Poprawna odpowiedz!"<<endl;
        pkt++;
    }else{
        cout << "Zle! Jest to odp c"<<endl;
    }
    Sleep(1000);

    cout<<"Liczba punktow: "<<pkt;




    return 0;
}
