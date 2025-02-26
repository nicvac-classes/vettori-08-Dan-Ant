#include <iostream>
using namespace std;

int main() {
float n, i, max, imax, min, imin, media, somma, t;
cout << "Quanti atleti ci sono nella competiione?" << endl;
cin >> n;
string nomi[n], nazionali[n];
float tempo[n];
i=0;
{
    cout << "Qual è il nome dell'atleta?" << endl;
    cin >> nomi[i];
    cout << "Qual è la nazione dell'atleta?" << endl;
    cin << nazionali[i];
    cout << "Qual è il tempo dell'atleta?" << endl;
    cin >>tempo[i];
    i=i+1;
}
i=0;
while (i<n)
{
    if(i=0)
    {
        min=tempo[i];
        imin=i;
    }
    else 
    if (min>tempo[i])
    {
        min=tempo[i];
        imin=i;
    }
    i=i+1;
}
cout <<"Il tempo più basso è " << min << " e appartiene all'atleta numero " << imin << endl;
i=0;
while (i<n)
{
    if(i=0)
    {
        max=tempo[i];
        imax=i;
    }
    else 
    if (max<tempo[i])
    {
        max=tempo[i];
        imax=i;
    }
    i=i+1;
}
cout <<"Il tempo più alto è " << max << " e appartiene all'atleta numero " << imax << endl;
i=0;
somma=0;
while (i<n)
{
    somma=somma + tempo[i]
    i=i+1;
}
media = somma / n;
cout << "La media dei tempi è " << media;
i=0;
while (i<n)
{
    if (tempo[i]<=media)
    {
        cout << "L'atleta " << nome[i] << " della nazione " << nazione[i] << " ha un tempo minore o uguale alla media di tutti i tempi, ovvero " << tempo[i] << endl;

    }
    else
    {
        cout << "Nessun atleta ha un tempo minore della media" << endl;
    }
    i=i+1;
}
cout << "Definisci un tempo" << endl;
cin>> t;
i=0;
while (i<n)
{
    if (tempo[i]<=t)
    {
        cout << "L'atleta " << nome[i] << " della nazione " << nazione[i] << " ha un tempo minore o uguale a " << t << ", ovvero " << tempo[i] << endl;

    }
    else
    {
        cout << "Nessun atleta ha un tempo minore di quello inserito" << endl;
    }
    i=i+1;
}


}


