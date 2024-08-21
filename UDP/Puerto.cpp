#include <iostream>
#include <stack>
using namespace std;

//Letra A
class Container 
{
      private:
              string id;
              float distancia;
      
      public:
             Container(string id, float distancia)
             {
                 this->id = id;
                 this->distancia = distancia;             
             }

      //Solo tiene métodos get ya que los atributos son inmutables
      string getId() {return id;}
      float getDistancia() {return distancia;}
};

int main()
{
    //Letra B
    stack<Container*> pilaInicial;
    
    string id;
    float distancia;
    
    
    Container *temp;
    for(int i=0;i<30;i++)
    {
         cout<<"Ingrese ID: ";
         cin>>id;
         
         cout<<"Ingrese distancia a puerto de destino: ";
         cin>>distancia;
         
         temp = new Container(id,distancia); 
         
         pilaInicial.push(temp);
    }
    
    
    //Letra C
    //Creamos las tres pilas que indica el Enunciado
    stack<Container*> pila1;
    stack<Container*> pila2;
    stack<Container*> pila3;
    
    for(int i=0;i<30;i++)
    {
        temp = pilaInicial.top(); //Obtenemos el Container
        pilaInicial.pop(); //Sacamos al Container de la Pila Inicial
        
        if(temp->getDistancia()==1000)
        {
             pila1.push(temp);  
             cout<<"Container ingresado al barco en la Pila 1"<<endl;                       
        }
        else if(temp->getDistancia()==2000)
        {
             pila2.push(temp);   
             cout<<"Container ingresado al barco en la Pila 2"<<endl;                      
        }
        else if(temp->getDistancia()==3000)
        {
             pila3.push(temp); 
             cout<<"Container ingresado al barco en la Pila 3"<<endl;                                              
        }
    }
    
    
    cout<<"================"<<endl;
    cout<<"Fin del Programa"<<endl;
    cout<<"================\n"<<endl;
    
    system("pause");
    return 0;
}
