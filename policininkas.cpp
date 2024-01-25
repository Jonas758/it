#include <iostream> //pridedam pagrindiniu funkciju biblioteka
#include <fstream> //pridedam failu editinimo biblioteka
using namespace std; //panaikinam pries funkcijas std::

int policininkas() { //funkcija policininkas
    ifstream fin("policininkas.txt"); //atidarome faila
    if (!fin) { //tikriname, ar failas yra
    cout << "Failas nerastas";
    return -1;
    }
    string vardas; fin >> vardas;
    string pavarde; fin >> pavarde;
    cout << "Polininkas yra " << vardas << " " << pavarde << endl;
    int metai; fin >> metai;
    cout << "Jam yra " << metai << endl;
    float alga; fin >> alga;
    cout << "Jis per menesi uzdirba " << alga << "$ neto\n";
    string etatas; fin >> etatas;
    cout <<  "Etatas: " << etatas << endl;
    string spec; fin >> spec;
    cout << "Specializacija: " << spec << endl;
    //funkcija is failo paima kintamuosius ir juos isveda i ekrana

}

int main() //pagrindine funkcija
{
    policininkas(); //iskvieciam policininko funkcija
	return 0; //baigiame
}


