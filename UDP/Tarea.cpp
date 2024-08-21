#include <iostream>
#include <vector>
using namespace std;

class Carta {
	private:
	int PC,PS;
	string nombre;
	public:
	Carta(string nombre,int PS,int PC){
		this->PC=PC;
		this->PS=PS;
		this->nombre=nombre;
	}
	string getNombre(){return nombre;
	}
	int getPS(){return PS;
	}
	int getPC(){return PC;
	}
	void RestarPS(int k){PS-=k;
	}
};
class Jugador{
	private:
	string nombre;
	vector<Carta*> Mano;
	public:
	Jugador(){
		cout<<"ingrese su nombre : "<<endl;
		cin>>this->nombre;
		cout<<endl<<"bienvenido "<<nombre<<endl<<endl;
	}
	string getNombre(){return nombre;
	}
	void anadirCarta(Carta *P){
	Mano.push_back(P);	
	}
	void quitarCarta(string P){
	cout<<"ingrese el nombre de la carta que quiere borrar :"<<endl;
	cin>>P;
	for(int i=0;i<Mano.size();i++){
		Carta *temp=Mano.at(i);
		if(P==temp->getNombre()){
			Mano.erase(Mano.begin()+i);
		}
	}	
	}
	int cantidadCartasEnMano(){
		return Mano.size();
	}
	void mostrarMano(){
	for(int i=0;i<Mano.size();i++){
		Carta *temp=Mano.at(i);
		cout<<temp->getNombre()<<endl;
	}
	}
	Carta* seleccionarCarta(){string P;
	cout<<"ingrese el nombre de la carta que quiere usar :"<<endl;
	cin>>P;
	for(int i=0;i<Mano.size();i++){
		Carta *temp=Mano.at(i);
		if(P==temp->getNombre()){
			return temp;
		}
	}
	}

};
class  ClashOfClash{
	private:
		vector<Carta*> CartasDisponibles;
		Jugador *jugador1=new Jugador();
		Jugador *jugador2=new Jugador();
	public:
		ClashOfClash(){
		}
	void  mostrarCartasDisponibles(){
		for(int i=0;i<CartasDisponibles.size();i++){
		Carta *temp=CartasDisponibles.at(i);
		cout<<temp->getNombre()<<endl;
	}
}
	void anadirCarta(Carta *P){
	CartasDisponibles.push_back(P);	
	}
	void seleccionarCartas(){
		for(int j=0;j<4;j++){
			
		for(int i=0;i<CartasDisponibles.size();i++){
		Carta *temp=CartasDisponibles.at(i);
		cout<<i+1<<"-"<<temp->getNombre()<<endl;
}
	int k;
	if(j%2==0){
	cout<<"-Elige " <<jugador1->getNombre()<<" :"<<endl;
	cout<<"ingrese el numero de la carta que quiera anadir a su mano:"<<endl;
	cin>>k;
	k-=1;
	Carta *temp=CartasDisponibles.at(k);
	jugador1->anadirCarta(temp);
CartasDisponibles.erase(CartasDisponibles.begin()+k);		
}

	if(j%2==1){
	cout<<"-Elige " <<jugador2->getNombre()<<" :"<<endl;
	cin>>k;
	k-=1;
	Carta *temp1=CartasDisponibles.at(k);
	jugador2->anadirCarta(temp1);
CartasDisponibles.erase(CartasDisponibles.begin()+k);	
	}
	
}
}
	void batalla(){
		for(int i=0;i<50;i++){
		cout<<"cartas de "<<jugador1->getNombre()<<endl;
		jugador1->mostrarMano();
		cout<<"cartas de "<<jugador2->getNombre()<<endl;
		jugador2->mostrarMano();
		cout<<"eliga carta inicial "<<jugador1->getNombre()<<endl;
		Carta *temp1=jugador1->seleccionarCarta();
		cout<<"eliga carta inicial "<<jugador2->getNombre()<<endl;
		Carta *temp2=jugador2->seleccionarCarta();
			int a,b;
			a=temp1->getPS();
			b=temp2->getPS();
		for(int j=0;j<50;j++){
		
		cout<<"ataca "<<jugador1->getNombre()<<endl;
		temp2->RestarPS(temp1->getPC());
		cout<<"ataca "<<jugador2->getNombre()<<endl;
		temp1->RestarPS(temp2->getPC());
		if(a==0){
			jugador1->quitarCarta(temp1->getNombre());
			j=50;
		}
		if(b==0){
			jugador2->quitarCarta(temp2->getNombre());
			j=50;
		}
		if(jugador2->cantidadCartasEnMano()==0){
			cout<<"gano :"<<jugador1->getNombre()<<endl;
		}
		if(jugador1->cantidadCartasEnMano()==0){
			cout<<"gano :"<<jugador2->getNombre()<<endl;
		}
	}
}
	}
};
main(){
ClashOfClash *juego=new ClashOfClash();
Carta *c1 = new Carta("Balloon", 1396, 798);
juego->anadirCarta(c1);
Carta *c2 = new Carta("Bowler", 1596, 239);
juego->anadirCarta(c2);
Carta *c3 = new Carta("Electro Wizard", 590, 192);
juego->anadirCarta(c3);
Carta *c4 = new Carta("Elite Barbarians", 970, 254);
juego->anadirCarta(c4);
Carta *c5 = new Carta("Executioner", 1010, 280);
juego->anadirCarta(c5);
Carta *c6 = new Carta("Flying Machine", 510, 142);
juego->anadirCarta(c6);
Carta *c7 = new Carta("Giant", 3344, 211);
juego->anadirCarta(c7);
Carta *c8 = new Carta("Giant Skeleton", 2660, 172);
juego->anadirCarta(c8);
Carta *c9 = new Carta("Golem", 4256, 259);
juego->anadirCarta(c9);
Carta *c10 = new Carta("Hog Rider", 1408, 264);
juego->anadirCarta(c10);
Carta *c11 = new Carta("Inferno Dragon", 1070, 241);
juego->anadirCarta(c11);
Carta *c12 = new Carta("Inferno Tower", 1408, 322);
juego->anadirCarta(c12);
Carta *c13 = new Carta("Knight", 1399, 159);
juego->anadirCarta(c13);
Carta *c14 = new Carta("Mega Knight", 3300, 240);
juego->anadirCarta(c14);
Carta *c15 = new Carta("Mini P.E.K.K.A.", 1056, 598);
juego->anadirCarta(c15);
Carta *c16 = new Carta("Mortar", 1272, 228);
juego->anadirCarta(c16);
Carta *c17 = new Carta("P.E.K.K.A.", 3458, 678);
juego->anadirCarta(c17);
Carta *c18 = new Carta("Royal Giant", 2544, 159);
juego->anadirCarta(c18);
Carta *c19 = new Carta("Sparky", 1200, 1100);
juego->anadirCarta(c19);
Carta *c20 = new Carta("Valkyrie", 1548, 221);
juego->anadirCarta(c20);
juego->seleccionarCartas();
juego->batalla();
}
