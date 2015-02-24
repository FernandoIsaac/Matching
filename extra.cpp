#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <ctime>
//#include <conio.h>
using namespace std;

int main(){
	srand(time(0));
	int opcion=0;
	char palabra[30][128];
	char match[30][128];
	int cont1 = 0;
	int cont2 = 0;
	int controlador;
	int pos1;
	int pos2;
	int porcentaje=0;
	//char palabra[128];
	//char match[128];
	while (opcion==0){
		cout<<"Ingrese su primera palabra de la columna A"<<endl;
		cin>>palabra[cont1];		
		cout<<"Ingrese el matching de la palabra que acaba de ingresar"<<endl;
		cin>>match[cont2];		
		cout<<"Desea continuar ingresando palabras? 0) = si  1) = NO"<<endl;
		cin>>opcion;
		cont1++;
		cont2++;
			}//FIN WHILE
	int opcion2=0;
cout << "\033[H\033[2J";
	while(opcion2==0){ 
		cout<<"COLUMNA A"<<endl;
		for(int i = 0; i < cont1; i++){
		cout<<"("<<i<<")"<<palabra[i]<<endl;
				}//FIN FOR

		cout<<"COLUMNA B"<<endl;		
		for(int i = 0; i < cont2; i++){
			cout<<"("<<i<<")"<<match[i]<<endl;
				}//FIN FOR
		cout<<"INGRESE LA POSICION DE PALABRA QUE QUIERA ENCONTRAR EL MATCH DE LA COLUMNA A"<<endl;
		cin>>pos1;
		cout<<"INGRESE LA POSICION DEL MATCH EN LA COLUMNA B"<<endl;
		cin>>pos2;
		controlador=100/cont1;
		if(pos1==pos2&&porcentaje<=100){
			porcentaje+=controlador;
			}else{cout<<"SE EQUIVOCO"<<endl;}		

		cout<<"DESEA CONTINUAR? 0 = SI, != 0 = NO"<<endl;
			cin>>opcion2;			
			}//FIN WHILE
		cout<<porcentaje<<"%"<<endl;
		
}

