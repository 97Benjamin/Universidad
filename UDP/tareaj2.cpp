#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

class Persona{
private:
	string nombre, rut, trabajo;
	int edad;
	char sexo;
public:
	Persona(){
	}
	string getRut(){return rut;
	}
	string getNombre(){return nombre;
	}
	void setSexo(char s){sexo=s;
	}
	int getEdad(){return edad;
	}
	//creo un metodo para ingresar los datos de los usuarios
	void setDatos(){
		cout<<"ingrese su nombre: "<<endl;
		cin>>this->nombre;
		cout<<"ingrese su edad: "<<endl;
		cin>>this->edad;
		cout<<"ingrese su rut: "<<endl;
		cin>>this->rut;
		cout<<"ingrese su trabajo: "<<endl;
		cin>>this->trabajo;
	}
};

class Pareja{
private:
	int suma_edades;
	Persona *man;
	Persona *woman;
	vector<Persona*> Parejas;
	queue<Persona*> Hombres;
	stack<Persona*> Mujeres;
	
public:
Pareja(){
}	
void Registro(){
		int n;
		
		cout<<"ingrese la cantidad de hombres que quiere registrar: "<<endl;
		cin>>n;
		Persona *temp;
		for(int i=0;i<n;i++){
		temp=new Persona();
		temp->setDatos();
		temp->setSexo('M');
		Hombres.push(temp);	
	}
		cout<<"ingrese la cantidad de mujeres que quiere registrar: "<<endl;
		cin>>n;
		Persona *temp1;
		for(int i=0;i<n;i++){
		temp1=new Persona();
		temp1->setDatos();
		temp1->setSexo('F');
		Mujeres.push(temp1);
	}	
	}
	

	
void Emparejamiento(){
	string M,F,P;

	//k es la variable de cantidad de parejas
	int k;
	k=Hombres.size() + Mujeres.size();
	//j es la variable de cantidad de personas sin pareja
	int j=k%2;
	k/=2;
	int edades[k];
	Persona *temp1;
	Persona *temp2;
	for(int i=0;i<k;i++){
	temp1=new Persona();
	temp2=new Persona();
	temp1=Mujeres.top();
	temp2=Hombres.front();
	Mujeres.pop();
	Hombres.pop();
	suma_edades=temp1->getEdad()+temp2->getEdad();
	edades[i]=suma_edades;
	M=temp2->getNombre();
	F=temp1->getNombre();
	P="Pareja :"+M+" y "+F;
	cout<<P<<endl;
	

}
int edades2[k];
for(int i=0;i<k;i++){
	edades2[i]=edades[i];
}
int q,temporal;
 for(q=k-1;q>0;q--)
 {
 for(int i=0;i<q;i++)
 {
 if(edades[i]>edades[i+1])
 {
 temporal=edades[i];
 edades[i]=edades[i+1];
 edades[i+1]=temporal;
 }
 }
}

for(int i=0;i<k;i++){
	if(edades[i]>edades2[i]){
	cout<<P<<endl;
	}
	
}
Persona *temp3;
if(Hombres.size()>Mujeres.size()){
	for(int i=0;i<j;i++){
		temp3=new Persona();
		temp3=Hombres.front();
		cout<<"sin pareja :"<<temp3->getNombre()<<", "<<temp3->getEdad()<< " anos, rut: "<<temp3->getRut()<<endl;
	}
}else if(Hombres.size()<Mujeres.size()){
	for(int i=0;i<j;i++){
		temp3=new Persona();
		temp3=Mujeres.top();
		cout<<"sin pareja :"<<temp3->getNombre()<<", "<<temp3->getEdad()<< " anos, rut: "<<temp3->getRut()<<endl;
	}
}

}
void imp(){
	
}	
};
main(){
	Pareja *alo=new Pareja();
	alo->Registro();
	alo->Emparejamiento();
}

