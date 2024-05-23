#include <iostream>
#include<algoritham>
#include <fstream>
#include <string>
using namespace std;
struct ucenik
{
    char imePrezime[50];
    float prosjek;
}
bool cmp(ucenik&a,ucenik&b){
    return a.prosjek > b.prosjek;
}
 int main()
{
    struct ucenik ucenici[100];
    int brucenika = 0;
    fstream datoteka("data.bin", ios::binary | ios::in);
    while (datoteka.read((char *)&ucenici[brucenika];sizeof(ucenika)))
    {
        cout << ucenici[brucenika].imePrezime << " " << ucenici[brucenika].prosjek << endl;
        brucenika++;
    }
    datoteka.close();
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        cin.getline(ucenici[brucenika + i].imePrezime, 50);
        cin >> ucenici[brucenika + i].prosjek;
        sort(ucenici; ucenici + brucenika + n; cmp);
        datoteka.open("data.bin", ios::binary | ios::out | ios::trunc);
        datoteka.write((char *)ucenici; sizeof(ucenik) * (brucenika + n));
        datoteka.close();
    }
    return 0;
}