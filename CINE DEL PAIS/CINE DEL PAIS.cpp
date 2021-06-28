// CINE DEL PAIS.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "iostream"
#include "stdlib.h"
#include "windows.h"



using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	
	int num, val,orientalzone,a,b,laromana,santiago,santodomingo,sanfrancisco,sanjuan,stoeste, condicion=0, x=5;

	
	

	
	
		
	HANDLE h=GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	
	

	
		
		
		do {
			
		
	                                 
	
		                            cout<< "                    \t\t\*********    Bienvenidos a la Cartelera    *******           "<<endl;
	                                cout<< "                    \t\t\*********  De Cine de Republica Dominicana *******           "<<endl;

						 
	
		cout<<"             "<<endl;
		cout<<"             "<<endl;					 
							 
    
						   
						   
						   
						   
						   
						   
		SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY);				   
						   
	cout<< "Digite la provincia para elegir el cine"<<endl;
	
	
	cout<<"1. Zona Oriental"<<endl;
	cout<<"2. Santo Domingo"<<endl;
	cout<<"3. Santo Domingo Oeste"<<endl;
	cout<<"4. Bavaro"<<endl;
	cout<<"5. Higuey"<<endl;
	cout<<"6. La Romana"<<endl;
	cout<<"7. San Francisco"<<endl;
	cout<<"8. San Juan De La Maguana"<<endl;
	cout<<"9. Santiago"<<endl;
	cout<<"10. Salir"<<endl;
	cin>> num;
     //Colocacion de varias opciones con sus condiciones
	switch (num){
		
	

	case 9: 
		SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
		cout<< "Cines de la provincia Santiago"<<endl;

		cout<<"             "<<endl;
			
			cout<< "1. Bella Terra Mall"<<endl;
			cout<< "2. CinemaCentro Cibao"<<endl;
			cout<< "3. Hollywood 7"<<endl;
			cout<< "4. Las Colinas Mall"<<endl;
			cout<< "5. Atras"<<endl;
			 //Colocacion de varias opciones con sus condiciones
			cin>>a;
			
			
			if (a==1){
		    cout<<"Todas las peliculas de el cine Bella Terra Mall"<<endl;
			
			cout<<"             "<<endl;

			cout<< "Hotel transilvania 3"<<endl;
			cout<<"Miercoles *7:35*"<<endl;
			cout<<"*SALA 1* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator "<<endl;
			cout<<"Jueves *9:50*"<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;

			cout<<""<<endl;
			
			cout<< "Trabajo Sucio "<<endl;
			cout<<"Domingo *7:50*"<<endl;
			cout<<" *SALA 3*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			cout<< "La monja"<<endl;
			cout<<"Sabado *8:35*"<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;

			cout<< "Predator "<<endl;
			cout<<"Domingo *6:45*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Domingo *9:45*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Domingo *7:45*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			
			
			cout<<""<<endl;

			}
			
			else if(a>=6){
				cout<<"La opcion seleccionada no es correcta";
			}
			
		
		
		if (a==2){
		
		cout<<"Todas las peliculas del cine Cinemacentro Cibao"<<endl;
			
		cout<<"             "<<endl;
		
		    cout<< "La sirenita"<<endl;
			cout<<"Sabado *5:15*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			cout<< "Searching"<<endl;
			cout<<"Domingo *6:40* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			
			cout<<""<<endl;
			cout<< "Trabajo Sucio "<<endl;
			cout<<"Martes *9:35*"<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			cout<< "The mile 22"<<endl;
			cout<<"Lunes *6:20* "<<endl;
			cout<<"*SALA 4*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< " Megalodon "<<endl;
			cout<<"Lunes *6:20* "<<endl;
			cout<<"*SALA 5 "<<endl;
			cout<<"IDIOMA: Ingles"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Domingo *7:45*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Martes *7:45*"<<endl;
			cout<<"*SALA 7* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}

			if (a==3){
				cout<<"Todas las peliculas del cine Hollywood 7"<<endl;
				
				cout<<"             "<<endl;

			cout<< "Los increibles 2"<<endl;
			cout<<"Jueves *8:40* "<<endl;
			cout<<"*SALA 1* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			cout<< "La monja"<<endl;
			cout<<"Lunes *9:10* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			cout<< " Megalodon "<<endl;
			cout<<"Lunes *6:20* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Ingles"<<endl;
			cout<<""<<endl;
			
			cout<< "The Num La Monja"<<endl;
			cout<<"Lunes *6:20*"<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			cout<< "La sirenita"<<endl;
			cout<<"Lunes *9:20* "<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Ingles"<<endl;
			cout<<""<<endl;

			cout<<""<<endl;
			cout<< "Trabajo Sucio "<<endl;
			cout<<"Lunes *9:50* "<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;

			cout<< "Venom "<<endl;
			cout<<"Domingo *7:45*"<<endl;
			cout<<"*SALA 7* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

	
			}

									if (a==4){
				cout<<"Todas las peliculas del cine Las colina Mall"<<endl;
				cout<<"             "<<endl;
			
			cout<< "House With Clock In It's Walls  "<<endl;
			cout<<"Lunes *9:45* "<<endl;
			cout<<"*SALA 1* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			
			cout<<""<<endl;
			cout<< "Predator "<<endl;
			cout<<"Lunes *6:10* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
									
			cout<<""<<endl;
			cout<< "Trabajo Sucio "<<endl;
			cout<<"Lunes *9:50* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			
			cout<<""<<endl;
			cout<< "La Monja"<<endl;
			cout<<"Lunes *7:00*"<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;

			cout<< "Alpha "<<endl;
	        cout<<"Martes *6:10* "<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Domingo *7:45*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Lunes *7:45*"<<endl;
			cout<<"*SALA 7* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Jueves *7:45*"<<endl;
			cout<<"*SALA 8* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
									}
				if (x==5){

	
	
					cout<<"Para volver atras presione enter"<<endl;
					
				}

			break;

		case 5:
			SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			cout<<"Cine Higuey"<<endl;
		cout<<"1. Plaza Taveraz"<<endl;
		cout<<"2. MultiPlaza Higuey"<<endl;
		cout<< "3. Atras"<<endl;
		 cin>>b;
		 //Colocacion de varias opciones con sus condiciones
				if (b==1){
				cout<<"Todas las peliculas de la Plaza Taveraz"<<endl;
				cout<<"             "<<endl;
			
			cout<< "Hotel transilvania 3"<<endl;
			cout<<"Viernes *8:25* "<<endl;
			cout<<"*SALA 1* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			cout<< "Alpha "<<endl;
	        cout<<"Martes *6:10* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			cout<< "Trabajo Sucio "<<endl;
			cout<<"Domingo *7:05* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			cout<< " La Monja"<<endl;
			cout<<"Sabado *9:50*"<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Lunes *7:00*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom"<<endl;
			cout<<"Viernes *7:45*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			
			}
		
			if (b==2)
			{
			cout<<"Todas las peliculas de multiplaza higuey"<<endl;
			cout<<"             "<<endl;
			
			cout<< "Hotel transilvania 3"<<endl;
			cout<<"Sabado *6:10*"<<endl;
			cout<<"*SALA 1* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			cout<< "Predator "<<endl;
			cout<<"Martes *7:20*"<<endl;
			cout<<"*SALA 2*"<<endl;
			cout<<"IDIOMA: Ingles"<<endl;
			cout<<""<<endl;
			
			cout<< "Trabajo Sucio "<<endl;
			cout<<"Lunes *9:50* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			cout<< " Alpha"<<endl;
			cout<<"Domingo*6:20* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			
			}
		
		break;
	
		case 6: 
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
			cout<<"Cinema La Romana"<<endl;		
			cout<<"1.La Marina Casa De Campo"<<endl;
			cout<<"2.MultiPlaza Romana"<<endl;
			cout<<"3. Atras"<<endl;
			cin>> laromana;
			 //Colocacion de varias opciones con sus condiciones
							if (laromana==1){
				cout<<"Todas las peliculas de la marina casa de campo"<<endl;
				cout<<"             "<<endl;
			
			cout<< "Hotel transilvania 3"<<endl;
			cout<<"Lunes *9:25* "<<endl;
			cout<<"*SALA 1* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			cout<< "Predator "<<endl;
			cout<<"Lunes *9:10* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Ingles"<<endl;
			cout<<""<<endl;
			
			cout<< "Trabajo Sucio "<<endl;
			cout<<"Jueves *8:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			
			
			}


			if (laromana==2){
				cout<<"Todas las peliculas de Multiplaza Romana"<<endl;
				cout<<"             "<<endl;
			
				
			cout<< "Megalodon "<<endl;
			cout<<"Viernes *6:20* "<<endl;
			cout<<"*SALA 1* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator "<<endl;
			cout<<"Domingo *7:45*"<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:10* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "MILE 22"<<endl;
			cout<<"Miercoles *8:50*"<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Ingles"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *5:50* "<<endl;
			cout<<"*SALA 5*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}
			
			
			break;


		case 4:
			SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			cout<<"Punta Cana"<<endl; 
			cout<<"1. Palma Real"<<endl;
			cout<<"2. San Juan Shopping Center"<<endl;
			cout<<"3. Atras"<<endl;
			cin>>a;
			 //Colocacion de varias opciones con sus condiciones
			if (a==1){
				cout<<"Todas las peliculas de Palma Real"<<endl;
				cout<<"             "<<endl;
			
				
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Martes *8:10* "<<endl;
			cout<<"*SALA 1* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator "<<endl;
			cout<<"Viernes *9:00* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Miercoles *9:50* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Sabado *7:30* "<<endl;
			cout<<"*SALA 4*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Jueves *7:00* "<<endl;
			cout<<"*SALA 5*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}

			if (a==2){
				cout<<"Todas las peliculas de San Juan Shopping Center"<<endl;
				cout<<"             "<<endl;
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 7* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}
			
			
			break;

		case 2: 
			SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			cout<<"Santo Domingo"<<endl;	
			cout<<"1. Agora Mall"<<endl;
			cout<<"2. Blue Mall"<<endl;
			cout<<"3. Galeria 360"<<endl;
			cout<<"4. Downtown Center"<<endl;
			cout<<"5. Sambil"<<endl;
			cout<<"6. Acropolis"<<endl;
			cout<<"7. Silver Sun Gallery"<<endl;
			cout<<"8. Bella vista Mall"<<endl;
			cout<<"9.Hollywood Diamond"<<endl;
			cout<<"10.Fine Arts Novo-Centro"<<endl;
			cout<< "11. Atras"<<endl;
			cin>>santodomingo;
			 //Colocacion de varias opciones con sus condiciones
			if (santodomingo==1){
			cout<<"Todas las peliculas de Agora Mall"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator "<<endl;
			cout<<"Domingo *6:45*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Jueves *8:45*"<<endl;
			cout<<"*SALA 7* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *6:10*"<<endl;
			cout<<"*SALA 8* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Viernes*7:45*"<<endl;
			cout<<"*SALA 8* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}
			

			if (santodomingo==2){
			cout<<"Todas las peliculas de Blue Mall"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator "<<endl;
			cout<<"Domingo *6:10*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

		
			}
			
			if (santodomingo==3){
			cout<<"Todas las peliculas de Galeria 360"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

            cout<< "Venom "<<endl;
			cout<<"Miercoles *9:45*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Domingo *7:45*"<<endl;
			cout<<"*SALA 7* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Miercoles *7:45*"<<endl;
			cout<<"*SALA 8* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			
			cout<< "Venom "<<endl;
			cout<<"Miercoles *7:45*"<<endl;
			cout<<"*SALA 9* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			
			cout<< "Venom "<<endl;
			cout<<"Miercoles *7:45*"<<endl;
			cout<<"*SALA 10* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			}

			if (santodomingo==4){
			cout<<"Todas las peliculas de Downtown Center"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom  "<<endl;
			cout<<"Domingo *7:45*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo "<<endl;
			cout<<"Miercoles *6:15*"<<endl;
			cout<<"*SALA 7* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator "<<endl;
			cout<<"Domingo *7:45*"<<endl;
			cout<<"*SALA 8* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			
			cout<< "Predator "<<endl;
			cout<<"Domingo *7:45*"<<endl;
			cout<<"*SALA 9* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Jueves *8:45*"<<endl;
			cout<<"*SALA 10* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Viernes *7:45*"<<endl;
			cout<<"*SALA 11* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Miercoles *7:45*"<<endl;
			cout<<"*SALA 12* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}

			if (santodomingo==5){
			cout<<"Todas las peliculas de Sambil"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Jueves *7:45*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Viernes *8:10*"<<endl;
			cout<<"*SALA 7* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}

			if (santodomingo==6){
			cout<<"Todas las peliculas de Acropolis"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Domingo *7:45*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Miercoles *7:45*"<<endl;
			cout<<"*SALA 7* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}
			if (santodomingo==7){
			cout<<"Todas las peliculas de Silver Sun Gallery"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}
			if (santodomingo==8){
			cout<<"Todas las peliculas de Bella Vista Mall"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}
			if (santodomingo==9){
			cout<<"Todas las peliculas de Hollywood Diamond"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}

			if (santodomingo==10){
				cout<<"Todas las peliculas de Fine Arts Novo-Centro"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Festival Internacional de Cine Fine Art. "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Festival Internacional de Cine Fine Art."<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Festival Internacional de Cine Fine Art."<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Pope Francis: A Man of His Word"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			
			}


			break;

		case 3:
			SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			cout<<"Santo Domingo Oeste"<<endl;
			
			cout<<"1. Occidental Mall"<<endl;	
			cin>>stoeste;
			 //Colocacion de varias opciones con sus condiciones
			if(stoeste==1){
				cout<<"Todas las peliculas de Occidental Mall"<<endl;
				cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 7* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Hallowen"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 8* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 9* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}


			break;


		case 7: 
			SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			cout<<"San Francisco De Macoris"<<endl;
			cout<<"1.San Francisco De Macoris"<<endl;
			cout<< "4. Atras"<<endl;
			 //Colocacion de varias opciones con sus condiciones
			cin>>sanfrancisco;

			if(sanfrancisco==1);
			{
			cout<<"Todas las peliculas de San Francisco De Macoris"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			
			}

		break;
			
		case 8: 
			SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			cout<<"San Juan De La Maguana"<<endl;
			cout<<"1.San Juan De La Maguana"<<endl;
			cout<<"2. Atras"<<endl;
			 //Colocacion de varias opciones con sus condiciones

		cin>>sanjuan;
		if (sanjuan==1){
			cout<<"Todas las peliculas de San Juan De La Maguana"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			
			}
		break;
		case 1:
			SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			cout<<"Zona Oriental"<<endl;
			cout<<"1.MegaPlex 10 "<<endl;
			cout<<"2.Coral Mall"<<endl;
			cout<<"3.Hollywood Island"<<endl;
			cout<<"4.Palacio del Cine Venezuela"<<endl;
			cout<<"5. Atras"<<endl;
			 //Colocacion de varias opciones con sus condiciones
			
			
			cin>>orientalzone;

			if (orientalzone==1){
			cout<<"Todas las peliculas de MegaPlex 10"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom"<<endl;
			cout<<"Martes *9:10*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom"<<endl;
			cout<<"Martes *9:10*"<<endl;
			cout<<"*SALA 7* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom"<<endl;
			cout<<"Martes *9:10*"<<endl;
			cout<<"*SALA 8* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom"<<endl;
			cout<<"Domingo *9:10*"<<endl;
			cout<<"*SALA 9* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom"<<endl;
			cout<<"Sabado *7:10*"<<endl;
			cout<<"*SALA 10* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}

			if (orientalzone==2){
			cout<<"Todas las peliculas de Coral Mall"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

				cout<< "Venom"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA '6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

				cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 7* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

				cout<< "Venom"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 8* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

				cout<< "Hallowen"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}

			if (orientalzone==3){
			cout<<"Todas las peliculas de Hollywood Island"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Viernes *8:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "SmallFoot"<<endl;
			cout<<"Jueves *6:10*"<<endl;
			cout<<"*SALA 7* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "A star is Born"<<endl;
			cout<<"Martes *7:450*"<<endl;
			cout<<"*SALA 8* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}

			if (orientalzone==4){
			cout<<"Todas las peliculas de Palacio del Cine Venezuela"<<endl;
			cout<<"             "<<endl;
		
			cout<< "Hotel transilvania 3 "<<endl;
			cout<<"Lunes *9:30*"<<endl;
			cout<<"*SALA 1*"<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Predator"<<endl;
			cout<<"Martes *8:45* "<<endl;
			cout<<"*SALA 2* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Trabajo Sucio "<<endl;
			cout<<"Sabado *9:00* "<<endl;
			cout<<"*SALA 3* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La Monja"<<endl;
			cout<<"Domingo *9:50* "<<endl;
			cout<<"*SALA 4* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "La sirenita"<<endl;
			cout<<"Martes *6:10*"<<endl;
			cout<<"*SALA 5* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Jueves*7:45*"<<endl;
			cout<<"*SALA 6* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;

			cout<< "Venom "<<endl;
			cout<<"Miercoles *7:45*"<<endl;
			cout<<"*SALA 7* "<<endl;
			cout<<"IDIOMA: Español"<<endl;
			cout<<""<<endl;
			}

			break;

			case 10:
				SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);
				cout<<"Seguro que quieres salir?"<<endl;

					cout<<"1.SI"<<endl;
					cout<<"0.NO"<<endl;
					cin>>condicion;
					if (condicion==1){
					
						exit;
					//Condicion para salir del programa
				
					
					}
					break;}
					
		
					
			
			
			
			
			
			
			
			
			
			


			






	  system ("pause"); 
	  system ("CLS");
	
	}while(condicion == 0);
	return 0;
}

