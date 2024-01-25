#include <iostream> //pagrindine biblioteka,leidzianti naudotis parindinemis c++ funkcijomis
#include <fstream> //dirbimo su failais biblioteka
#include <ctime> //laiko biblioteka, skirta sukurti seed'ui
using namespace std;

//FUNKCIJOS
int number() { //atsitiktinio numerio sukurimo funkcija

ofstream fout("skaiciai.txt", ios_base::app);
int temp = rand() % 10;
fout << temp << " ";
return temp;
}

int isvedimas(int temp) { //funkcija, skirta isvesti duotus duomenis i ekrana
cout << temp << " ";
}

void istrynimas() { //funkcija, skirta istrinti failo duomenim

string temp;
cout << "\n\nAr norite isvalyti faila? (t/n): ";
cin >> temp;
if (temp == "t") {
    ofstream fout("skaiciai.txt", ios_base::trunc);
    fout.close();
    cout << "Failas isvalytas";
}

}
//PAGRINDINE FUNKCIJA
int main() {

srand((unsigned) time(NULL)); //atsitiktiniu skaiciu generavimui priskiriam laiko seed'a

for (int i = 0; i < 100; i++) isvedimas(number()); //100 kartu paleidziame funkcijas
istrynimas(); //istrynimo funkcija
}
