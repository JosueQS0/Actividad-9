#include <iostream>
using namespace std;

const int EsMax = 45; 

int main() {
    int n; 
    cout << "Ingrese numero de estudiantes: ";
    cin >> n;
    
    int id[EsMax];
    string nm[EsMax], ape[EsMax];
    double nt1[EsMax], nt2[EsMax], nt3[EsMax], nt4[EsMax];
    
    for (int i = 0; i < n; i++) {
        cout << "Ingrese datos del estudiante No. " << (i+1) << endl;
        cout << "ID: ";
        cin >> id[i];
        cout << "Nombres: ";
        cin >> nm[i];
        cout << "Apellidos: ";
        cin >> ape[i];
        cout << "Nota 1: ";
        cin >> nt1[i];
        cout << "Nota 2: ";
        cin >> nt2[i];
        cout << "Nota 3: ";
        cin >> nt3[i];
        cout << "Nota 4: ";
        cin >> nt4[i];
        cout << endl;
    }
    
		  
    for (int i = 0; i < n; i++) {
        double pro = (nt1[i] + nt2[i] + nt3[i] + nt4[i]) / 4.0;
        cout << "Estudiante No. " << (i+1) << endl;
        cout << "ID: " << id[i] << endl;
        cout << "Nombres: " << nm[i] << endl;
        cout << "Apellidos: " << ape[i] << endl;
        cout << "Promedio: " << pro << endl;
        if (pro >= 60) {
            cout << "Resultado: Aprobado" << endl;
        } else {
            cout << "Resultado: Reprobado" << endl;
        }
        cout << endl;
    }
    
    return 0;
}

