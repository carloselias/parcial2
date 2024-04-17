//Directivas de pre-procesador
#include <iostream> //header
#include <string>
#include <fstream>
using namespace std; //el espacio de nombres standard
void rdv1()
{
	cout<<"todos los empleados ..."<<endl;
	ifstream eav1;
	eav1.open("empleados.txt");
	if (eav1.is_open()) 
	{
		string gl1;
		while (getline(eav1,gl1))
		{
			cout<<gl1<<endl;
		}
		eav1.close();
	}
	else
	{
		cerr<<"No se ha podido abrir el archivo";
		eav1.close();
	}
};
class empleado
{
	private:
		string nombre,apellido;
		int edad,salario;
	public:
		empleado():nombre(""),apellido(""),edad(0),salario(0) {}
		void setNombre(string n1) 
		{
        nombre=n1;
    	}
    	void setApellido(string ap1) 
		{
        apellido=ap1;
    	}
		void setEdad(int e1) 
		{
        edad=e1;
    	}
    	void setSalario(int sl1) 
		{
        salario=sl1;
    	}
    	void mi1()
		{
		ofstream nav1;
		nav1.open("empleados.txt",ios::app);
        cout<<"nombre y apellido: "<<nombre<<" "<<apellido<<", edad: "<<edad<<", salario: Q"<<salario<<endl;
        nav1<<"nombre y apellido: "<<nombre<<" "<<apellido<<", edad: "<<edad<<", salario: Q"<<salario<<endl;
		nav1.close();
    	}
};
int main()
{
	empleado emp1;
	string nombre,apellido;
	int edad,salario;
	cout<<"informacion del empleado"<<endl<<"ingrese el nombre"<<endl<<"> ";
	getline(cin,nombre);
	cout<<"ingrese el apellido"<<endl<<"> ";
	getline(cin,apellido);
	cout<<"ingrese la edad"<<endl<<"> ";
	cin>>edad;
	cout<<"ingrese el salario"<<endl<<"> ";
	cin>>salario;
	emp1.setNombre(nombre);
	emp1.setApellido(apellido);
	emp1.setEdad(edad);
	emp1.setSalario(salario);
	emp1.mi1();
	rdv1();
	return 0;
}