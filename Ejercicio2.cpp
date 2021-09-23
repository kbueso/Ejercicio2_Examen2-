#include <iostream>
 
using namespace std;
 

void vecesRepetidas(int arreglo[10], int cantidad[10]){
 
    int i, j, count;
 
	cantidad[0] = 1;
	for ( i = 1; i < 10; i++ ) {
		count = 1;
	
		for ( j = 0; j < i; j++ )
			if ( arreglo[j] == arreglo[i] ) {
				if ( count == 1 ) count = cantidad[j] + 1;
				cantidad[j] = count;
	    	}
	    cantidad[i] = count;
	}
}
 
 
int main()
{
    const int tamano=10;
    int arreglo[tamano]={2,3,3,4,2,42,34,1,2,5};
    int cantidad[10];
    string expresiones[tamano]={"primer","segundo","tercero","cuarto","quinto","sexto","septimo","octavo","noveno","decimo"};
  	cout<<" Se han insertado en arreglo estos valores en el arreglo: "<<endl;
  	cout<<endl;
  	cout<<"2,3,3,4,2,42,34,1,2,5"<<endl;
  	cout<<endl;
    vecesRepetidas( arreglo, cantidad);
 
    for(int i=0; i<tamano; i++){
        cout<<"El elemento: " << arreglo[i] << ", esta repetido: "<<cantidad[i]<<" veces"<<endl;
    }
 
    return 0;
}
