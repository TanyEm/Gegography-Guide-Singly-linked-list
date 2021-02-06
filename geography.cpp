#include <iostream>
#include <vector>

#include "Country.h"

using namespace std;

int main()
{
    vector<Country> arrayOfCountries;
    int chose, i;

    cout << "Continents: \nEurasia - 0 \nAfrica - 1 \nNorth America - 2 \nSouth America - 3 \nAustralia - 4 \nSelect continent: ";
    cin >> chose;

    switch (chose)
    {
    case 0:
        i = 0;
        arrayOfCountries.push_back(Country("Russia", Eurasia));
        arrayOfCountries [i].add ("Lipetsk", 500000, false);
        arrayOfCountries [i].add ("Moscow", 12000000, true);
        arrayOfCountries [i].add ("St. Petersburg", 5000000, false);
        
        i ++;
        arrayOfCountries.push_back(Country("Finland", Eurasia));
        arrayOfCountries[i].add("Espoo", 300000, false);
        arrayOfCountries[i].add("Lappeenranta", 100000, false);
        arrayOfCountries[i].add("Helsinki", 600000, true);
        break;
    case 1:
        i = 0;
        arrayOfCountries.push_back (Country ("Egypt", Africa));
        arrayOfCountries [i].add ("Suez", 500000, false);
        arrayOfCountries [i].add ("Cairo", 10000000, true);
        arrayOfCountries [i].add ("Alexandria", 5000000, false);
         
        i ++;
        arrayOfCountries.push_back (Country ("Nigeria", Africa));
        arrayOfCountries [i].add ("Port Harcourt", 3000000, false);
        arrayOfCountries [i].add ("Kano", 4000000, false);
        arrayOfCountries [i].add ("Lagos", 13000000, true);
        break;
    case 2:
        i = 0;
        arrayOfCountries.push_back(Country("USA", NorthAmerica));
        arrayOfCountries[i].add("New York", 8000000, false);
        arrayOfCountries [i].add ("Washington", 600000, true);
        arrayOfCountries [i].add ("Seattle", 700000, false);
              
        i++;
        arrayOfCountries.push_back (Country ("Canada", NorthAmerica));
        arrayOfCountries [i].add ("Toronto", 3000000, false);
        arrayOfCountries [i].add ("Ottawa", 1000000, true);
        arrayOfCountries [i].add ("Montreal", 2000000, false);
        break;
    case 3:
        i = 0;
        arrayOfCountries.push_back (Country ("Panama", SouthAmerica));
        arrayOfCountries [i].add ("David", 100000, false);
        arrayOfCountries [i].add ("Panama", 900000, true);
        arrayOfCountries [i].add ("Almirante", 12000, false);
  
        i++;
        arrayOfCountries.push_back (Country ("Colombia", SouthAmerica));
        arrayOfCountries [i].add ("Medellin", 2500000, false);
        arrayOfCountries [i].add ("Bogota", 8000000, true);
        arrayOfCountries [i].add ("Cartagena", 1000000, false);
        break;
    case 4:
        i = 0;
        arrayOfCountries.push_back (Country ("Australia", Australia));
        arrayOfCountries [i].add ("Sydney", 5000000, false);
        arrayOfCountries [i].add ("Canberra", 400000, true);
        arrayOfCountries [i].add ("Brisbane", 2500000, false);
        break;
    }
    
    for (int m = 0; m < arrayOfCountries.size(); m++)
    {
        Country item = arrayOfCountries[m];
        cout << "+--------------------------Country--------------------------+" << endl;
        cout << "                          " <<item.getName() << endl;
        cout << "+----------------------------------------------------------+" << endl;
        City* capital = item.getCapital();
        cout << "+ Capital - " << capital->name << " | Population - " << capital->population << endl;
        cout << "+----------------------------------------------------------+" << endl;

        City* temp = item.getHead();
        do {
            cout << "+ City - " << temp->name << " | Population - " << temp->population << endl;
            temp = temp->next;
        } while (temp != nullptr);
    }
    cout << "+----------------------------------------------------------+" << endl;
}
