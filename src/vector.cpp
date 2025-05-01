#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])

{
    //el vetor sirve para acceder a ciertas partes de la lista
    
    vector<string> nombres;
    nombres.emplace_back("Ramon");
    nombres.emplace_back("segundo");
    nombres.emplace_back("Tercer");

    cout << nombres.at(2) << endl;

    for (auto &&nombre : nombres)
    {
        cout << nombre << endl;
    }

    return 0;
}