#include <iostream>
using namespace std;

struct Alumno{
	string nomApe;
	int dni;
	char sexo;
};
struct Registro{
	Alumno estudiante;
	double notaProm[5];
	int amon[5];
	int faltas[5];
};

void cargarDatos(Registro alumnos[20]){
	int i = 0;
	int j = 0;
	for (i=1;i<=20;i++) {
		cout<<"Ingrese nombre y apellido del alumno "<<i<<endl;
		getline (cin,alumnos[i].estudiante.nomApe);
	}
}

int main(int argc, char *argv[]) {
	Registro alumnos[20];
	cargarDatos(alumnos);
	return 0;
	
}

