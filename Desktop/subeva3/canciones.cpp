#include<iostream>
#include<queue>
#include<string>
using namespace std;

struct Canciones{
	string titulo;
	string genero;
	int duracion;

};


struct Canciones canciones;


void showqueue(queue<Canciones> cola){
    queue<Canciones> aux = cola;
    while (!aux.empty()) {
        cout<<canciones.titulo<<endl;
        cout<<canciones.genero<<endl;
        cout<<canciones.duracion<<endl;
        aux.pop();
    }
    
 }




void menu(queue<Canciones> Cola1, queue<Canciones> Cola2, queue<Canciones> Cola3 ){
	int opc;
	bool continuar = true;
	
	
	do{
		cout<<"Elija una opcion: "<<endl;
		cout<<"1. Agregar canciones a la primera cola(playlist Feliz) "<<endl;
		cout<<"2. Agregar canciones a la segunda cola(playlist Sad)"<<endl;
		cout<<"3. Agregar cancioens a la tercera cola(playlist Estudiar)"<<endl;
		cout<<"4. Mostrar  primera cola(playlist)"<<endl;
		cout<<"5. Mostrar segunda cola(playlist)"<<endl;
		cout<<"6. Mostrar tercera cola(playlist)"<<endl;
		cout<<"7.Eliminar en primera cola: "<<endl;
		cout<<"8. Eliminiar en segunda cola"<<endl;
		cout<<"9.Eliminar en tercera cola"<<endl;
		cout<<"10. Salir"<<endl;
		cin>>opc;
		cin.ignore();
		switch(opc){
					case 1: 
							cout<<"Ingrese canciones para la primera playlist**** "<<endl;
							cout<<"Ingrese nombre de cancion:  "<<endl;
							cin>>canciones.titulo;
							
							cout<<"Ingrese genero de la cancion: "<<endl;
							cin>>canciones.genero;
							
							cin.ignore();
							
							cout<<"Ingrese duracion de la cancion: "<<endl;
							cin>>canciones.duracion;
							
							Cola1.push(canciones);
										
							break;
							
					case 2: 
							
							cout<<"Ingrese canciones de la segunda cola(playlist)****"<<endl;
							cout<<"Ingrese nombre de la cancion: "<<endl;
							cin>>canciones.titulo;
							
							cout<<"Ingrese el genero de la cancion: "<<endl;
							cin>>canciones.genero;
							
							cin.ignore();
							cout<<"Ingrese duracion de la cancion: "<<endl;
							cin>>canciones.duracion;
							
							
							Cola2.push(canciones);
							
							
					
							break;		
			
					case 3:
							cout<<"Ingrese canciones de la tercera cola(playlist)****"<<endl;
							cout<<"Ingrese nombre de la cancion: "<<endl;
							cin>>canciones.titulo;
							
							cout<<"Ingrese el genero de la cancion: "<<endl;
							cin>>canciones.genero;
							
							cin.ignore();
							
							cout<<"Ingrese duracion de la cancion: "<<endl;
							cin>>canciones.duracion;
							
							
								Cola3.push(canciones);
					
							break;
							
						case 4: 
								cout<<"Mostrando la primera playlist----"<<endl;	
								showqueue(Cola1);
							break;
						
						
						case 5: cout<<"Mostrando la segunda playlist---"<<endl;
								showqueue(Cola2);
								break;
								
						case 6: cout<<"Mostrando la tercera playlist-----"<<endl;
						
								showqueue(Cola3);
						break;	
						
						
						case 7: 
								cout<<"Borrando canciones de primer playlist...."<<endl;
								Cola1.pop();
								
								break;
						case 8: 
								cout<<"Borrando canciones de la segunda playlist...."<<endl;
								
								Cola2.pop();
								
								break;
						case 9: 
								cout<<"Borrando canciones de la tercera playlist.... "<<endl;
								
								Cola3.pop();
								
								break;		
								
						case 10: continuar = false;
						
						
								break;											
		}
		
		
		
		
		
		
		
	}while(continuar);
	
	
	
	
	
	
}




int main(){
	queue<Canciones> c1;
	queue<Canciones> c2;
	queue<Canciones> c3;
	
	menu(c1,c2,c3);
	
	
	
	
	return 0;
}