#include<iostream>

using namespace std;
struct Estudiante{
	string *nombre;
	int *codigo;
	int **pm_notas;
};

int main(){
	Estudiante estudiante;
	int fila=0, columna=0;
	string nombre;
	
	cout<<"Cuantos Estudiantes Desea Ingresar: ";
	cin>>fila;
	cout<<"Cuantas Notas Desea Ingresar: ";
	cin>>columna;
	estudiante.pm_notas=new int *[fila];
	estudiante.nombre=new string[fila];
	estudiante.codigo=new int[fila];
	
	for(int i=0;i<fila;i++){
		estudiante.pm_notas[i]=new int[columna];
	}
	cout<<"--------------Ingrese Notas--------------"<<endl;
	for(int i=0;i<fila;i++){
		cout<<"Ingrese el Codigo:  ";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Ingrese el Nombre:  ";
		getline(cin,estudiante.nombre[i]);
		
		for(int ii=0;ii<columna;ii++){
			cout<<"Ingrese la Nota "<<ii+1<<": ";
			cin>>*(*(estudiante.pm_notas+i)+ii);
		}
		cout<<"-------------------------------------"<<endl;
	}
	cout<<"--------------Mostrar Alumnos y sus Notas--------------"<<endl;
	for(int i=0;i<fila;i++){
		cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
		cout<<"Estudiante: "<<estudiante.nombre[i]<<endl;
		
		for(int ii=0;ii<columna;ii++){
			cout<<"Nota ["<<ii + 1 <<"]: "<<*(*(estudiante.pm_notas+i)+ii)<<endl;
		}
		cout<<"-------------------------------------"<<endl;
	}
	for (int i=0;i<fila;i++){
	delete[] estudiante.pm_notas[i];
	}
	delete[] estudiante.pm_notas;
	delete[] estudiante.codigo;
	delete[] estudiante.nombre;

	system("PAUSE");
	return 0;
}






