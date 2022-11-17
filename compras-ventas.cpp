#include <iostream>
#include <fstream>

using namespace std;

struct Tarjeta
{
    int idLaboratorio;
    int idTarj;
    char nombreyApellido[20];
    int dni;
};

struct Compras
{
    int idTarj;
    int idProducto;
    int dia;
    int unidades;
    int precio;
    int descuento;
};

struct listaCompras{
    Compras Datos;
    listaCompras* lista;
};

struct Venta{
    int dia;
    int idProducto;
    int unidades;
    int importe;
    int descuento;
};

struct ListaVenta{
    int idLaboratorio;
    Venta Dato;
    ListaVenta* sgnt;
    
};

//prototipos
void imprimir(ListaVenta []); //corte de control por lab y dia
void rellenarVectorCompras(Compras, listaCompras[], FILE*); //parametros son: registro compras y vector de listaCompras y puntero a archivo compras
void rellenarVectorTarjeta(Tarjeta, Tarjeta[], FILE*);//parametros son: registro tarjeta y vector tarjetas y puntero a archivo tarjeta //insertar ordenar adentro para ordenar por DNI
int Valor(int a, int b);// para calcular el importe a pagar una vez se sabe el precio
//falta una funcion para encontrar el precio unitario segun el id del producto

int main()
{

    Compras compras;//registro para leer compras
    Venta ventas;//registro para leer ventas
    Tarjeta tarjeta;//registro para leer tarjeta
    listaCompras VectCompras[31];//vector de listas (insertar ordenar para ordenar por dia las compras)
    Tarjeta VectTarje[10000]; //y despues se ordena por DNI
    ListaVenta VectFinal[31];//vector de listas final 
    FILE* punteroCompras= fopen("Compras.dat","rb");
    FILE* punteroTarjetas= fopen("Tarjetas.dat","rb");
    FILE* punteroVentas= fopen("Ventas.dat","rb");
    
    //rellenar vectores
    rellenarVectorCompras(compras, VectCompras, punteroCompras);
    rellenarVectorTarjeta(tarjeta, VectTarje, punteroTarjetas);

    imprimir(VectFinal);//esto es para imprimir
    
    
    // venta.preciocondescuent-o = valor (compras.precio,venta.cantvendidas);
};

int valor (int a, int b)// a= precio b=cantidad
{
    int total;
    total = (a*b)*0.85 ;
    return total;
};

void imprimir(_VectFinal){
    //previamente ordenado por laboratorio y por dia para hacer un corte de control
    int auxDia;
    int i= 0;
    while(_VectFinal[0->idLaboratorio!=NULL){
        auxDia=_VectFinal->Datos.dia;
        cout << "Laboratorio " << _VectFinal->idLaboratorio;
        cout << auxDia;
        cout<<"id producto" <<" cantidad " <<" importe " << " descuento " <<endl;
        while(_VectFinal->idLaboratorio!=NULL && auxDia == aux_VectFinal->Datos.dia && auxDia == NULL) {
            cout << VectFinal->Datos.idProducto << VectFinal->Dato.unidades <<  VectFinal->Dato.importe <<VectFinal->Dato.descuento<<endl;
            _VectFinal->sgnt = _VectFinal->sgnt;
        }

    };
};
