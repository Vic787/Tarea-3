// mysql_c.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include "Cliente.h"
using namespace std;
/*
#include <mysql.h>
int q_estado;
*/

int main()
{
    /*MYSQL* conectar;
    MYSQL_ROW fila;
    MYSQL_RES* resultado;
    conectar = mysql_init(0);
    conectar = mysql_real_connect(conectar, "localhost", "root", "20021104Vic", "db_empresa", 3306, NULL, 0);
    if (conectar) {
        //cout << "Conexion exitosa..." << endl;
        string puesto;
        cout << "Ingrese puesto:";
        cin >> puesto;
        string insert = "insert into puestos(puesto) values('" + puesto + "')";
        const char* i = insert.c_str();
        q_estado = mysql_query(conectar, i);
        if (!q_estado) {
            cout << "Ingreso exitoso..." << endl;
        }
        else {
            cout << " xxxx Error al ingresar xxxx" << endl;
        }

        string consulta = "select * from puestos";
        const char* c = consulta.c_str();
        q_estado = mysql_query(conectar, c);
        if (!q_estado) {
            resultado = mysql_store_result(conectar);
            while (fila = mysql_fetch_row(resultado) ){
                cout << fila[0] << ", " << fila[1] << endl;
            }
        }
        else {
            cout << " xxxx Error al consultar xxxx" << endl;
        }
    }
    else {
        cout << "Error en la conexion..." << endl;
    }
    */

    string nit, nombres, apellidos, direccion, fecha_nacimiento;
    int telefono;
    cout << "Ingrese NIT: ";
    getline(cin, nit);
    cout << "Ingrese nombres: ";
    getline(cin, nombres);
    cout << "Ingrese apellidos: ";
    getline(cin, apellidos);
    cout << "Ingrese direccion: ";
    getline(cin, direccion);
    cout << "Ingrese telefono: ";
    cin >> telefono;
    cout << "Ingrese fecha de nacimiento: ";
    cin >> fecha_nacimiento;
 
    Cliente c = Cliente(nombres, apellidos, direccion, telefono, fecha_nacimiento, nit);

    c.crear();
    c.leer();

    system("Pause");
    return 0;
}

