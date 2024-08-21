#include <iostream>
#include <vector>
#include <map>
using namespace std;

//Definición del tipo vector para utilizar como "contenido" de los Map
typedef vector<string> miVector; 
typedef vector<string> miVector2;

class Academia
{
	private:
		map <string,miVector> miAcademia;
	public:
		Academia() //Academia inicia vacía
		{
			miAcademia["Goku"]={};
			miAcademia["Vegeta"]={};
			miAcademia["Krilin"]={};
		}
	
	void generarGrupos(vector <string> vectorDiscipulos)
	{
		string maestroTemp;
		for(int i=0;i<vectorDiscipulos.size();i++)
		{
			if(i<5) //Hasta los 5 primeros con Goku
			{
				miAcademia["Goku"].push_back(vectorDiscipulos[i]);
			}
			else if(i<10) //Hasta los 5 segundos con Vegeta
			{
				miAcademia["Vegeta"].push_back(vectorDiscipulos[i]);
			}
			else if(i<15) //Hasta los 5 terceros con Krilin
			{
				miAcademia["Krilin"].push_back(vectorDiscipulos[i]);
			}
			else if(i%5==0) //El resto con un nuevo maestro cada 5 nuevos estudiantes después de los 15 primeros
			{
				cout<<"Nombre del Nuevo Maestro --> ";
				getline(cin,maestroTemp);
				
				miAcademia[maestroTemp].push_back(vectorDiscipulos[i]);						
			}
			else
			{
				miAcademia[maestroTemp].push_back(vectorDiscipulos[i]);					
			}			
		}		
	}
	
	void printAcademia()
	{
		vector <string> temp;
		map <string,miVector2>::iterator iterador;
				
		for(iterador=miAcademia.begin();iterador!=miAcademia.end();iterador++)
		{
			cout<<"\n"<<endl;
			cout<<"Maestro: "<<iterador->first<<endl;
			cout<<"---------------------------"<<endl;			
			temp = miAcademia[iterador->first];
			
			for(int j=0;j<temp.size();j++)
			{
				cout<<temp[j]<<" / ";
			}
			cout<<"\n================="<<endl;
		}		
	}
};


int main()
{
	vector <string> discipulos;
	
	discipulos.push_back("Alumno 01");
	discipulos.push_back("Alumno 02");
	discipulos.push_back("Alumno 03");
	discipulos.push_back("Alumno 04");
	discipulos.push_back("Alumno 05");
	discipulos.push_back("Alumno 06");
	discipulos.push_back("Alumno 07");
	discipulos.push_back("Alumno 08");
	discipulos.push_back("Alumno 09");
	discipulos.push_back("Alumno 10");
	discipulos.push_back("Alumno 11");
	discipulos.push_back("Alumno 12");
	discipulos.push_back("Alumno 13");
	discipulos.push_back("Alumno 14");
	discipulos.push_back("Alumno 15");
	discipulos.push_back("Alumno 16");
	discipulos.push_back("Alumno 17");
	discipulos.push_back("Alumno 18");
	discipulos.push_back("Alumno 19");
	discipulos.push_back("Alumno 20");
	discipulos.push_back("Alumno 21");
	discipulos.push_back("Alumno 22");
	
	Academia *AcademiaTortuga = new Academia();
	
	AcademiaTortuga->generarGrupos(discipulos);
	AcademiaTortuga->printAcademia();
	
	cout<<"\n\n"<<endl;
	system("pause");
	return 0;
}
