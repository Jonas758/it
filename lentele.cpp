#include <iostream> //prisidedam pagr. biblioteka
#include <fstream> //prisidedam failu editinimo biblioteka
#include <ctime> //prisidedam laiko biblioteka, kad galetume sukurti seed'a pagal laika
using namespace std; //naudojam namespace std, kad nereiktu rasyti std:: pries kiekviena funkcija

void lentele() { //funkcija, kuri sukuria lentele
    ofstream fout("lentele.txt"); //sukuriame faila, i kuri duomenis isvesime
    int suma; int temp;

    for(int i = 0; i < 4; i++)
    {
        suma = 0;
        for(int g = 0; g < 2; g++)
        {
            temp = rand() % 10; //sugeneruojame bet koki skaiciu
            fout << temp << " ";
            suma += temp; //sudedam pirmus du skaicius
        }
        fout << suma << endl; //isvedame suma
    }

}

int isvedimas() { //antra funkcija, kuri paima lentele is failo ir isveda i ekrana
    ifstream fin("lentele.txt"); //atsidarome faila
    if (!fin) { //patikriname, ar failas yra (nereikalingas, nes pirmoj programos daly ji sukuriame)
        cout << "Failas nerastas";
        return -1;
    }
    int kintamasis;

    for(int t = 0; t < 4; t++) //skirtas stulpeliams
    {
        for(int f = 0; f < 3; f++) //skirtas nariems stulpeliuose
        {
            fin >> kintamasis; //pasiimam kintamaji is failo
            cout << kintamasis << " "; //isveda kintamaji i ekrana
        }
        cout << "\n"; //pereina i kita eilute
    }

}


int main() //funkcija, kuria paleidzia programa, joje yra musu kitos funkcijos
{
    srand((unsigned) time(NULL)); //atsitiktinius skaicius generuojame pagal laiko seed'a

    lentele(); //iskvieciam lenteles funkcija
    isvedimas(); //iskvieciam antraja (isvedimo) funkcija

    return 0; //baigiame
}
