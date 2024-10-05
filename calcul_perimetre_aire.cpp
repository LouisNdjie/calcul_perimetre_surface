#include<iostream>
#include<stdlib.h>

//declaration des constantes
const float PI = 3.14 ;

//declaration des variables
 unsigned int choix = 0;
 unsigned int inter = 0;
 
 int main (int argc, char** argv){
	std::cout<<"-----------------choix d'option--------------------";
	std::cout<<std::endl<<"[1]-CERCLE"<<std::endl<<"[2]-RECTANGLE"<<std::endl<<"[3]-TRIANGLE";
	std::cout<<std::endl<<"---------------------------------------------------";

	do{
		std::cout<<std::endl<<"Faites un choix:";
		std::cin>>choix;
		switch(choix){
			case 1:
				system("cls");
				std::cout<<"---------------------CERCLE----------------------"<<std::endl;
				std::cout<<"[1]-calcul perimetre du cercle"<<std::endl<<std::endl<<"[2]-calcul de la surface du cercle"<<std::endl;
				std::cout<<"-------------------------------------------------"<<std::endl;
				do{
					std::cout<<std::endl<<"choisissez une option :";
					std::cin>>inter;
					switch(inter){
						case 1 :{
							system("cls");
							float rayon = 0;
							float peri_cercle = 0; 
							std::cout<<"renseigner le rayon de ce cercle:";
							std::cin>>rayon;
							peri_cercle = (rayon * 2) * PI;
							std::cout<<"le perimetre de ce cercle est :"<<peri_cercle;
						break;
						}
						case 2 :{
						system("cls");
							float rayon = 0;
							float aire_cercle = 0; 
							std::cout<<"renseigner le rayon de ce cercle:";
							std::cin>>rayon;
							aire_cercle = (rayon * rayon) * PI;
							std::cout<<"la surface de ce cercle est :"<<aire_cercle;
						break;
						}
					}
					break;
				}while(inter != 1 || inter != 2);
			break;
			
			case 2:
				system("cls");
				std::cout<<"---------------------RECTANGLE----------------------"<<std::endl;
				std::cout<<"[1]-calcul perimetre du rectangle"<<std::endl<<std::endl<<"[2]-calcul de la surface du rectangle"<<std::endl;
				std::cout<<"----------------------------------------------------"<<std::endl;
				do{
					std::cout<<std::endl<<"choisissez une option :";
					std::cin>>inter;
					switch(inter){
						case 1 :{
							system("cls");
							float longueur = 0;
							float largeur = 0;
							float peri_rect = 0; 
							std::cout<<"renseigner la longueur de ce rectangle:";
							std::cin>>longueur;
							std::cout<<"renseigner la largeur de ce rectangle:";
							std::cin>>largeur;
							peri_rect = (longueur + largeur) * 2;
							std::cout<<"le perimetre de ce rectangle est :"<<peri_rect;
						break;
						}
						case 2 :{
							system("cls");
							float longueur = 0;
							float largeur = 0;
							float aire_rect = 0; 
							std::cout<<"renseigner la longueur de ce rectangle:";
							std::cin>>longueur;
							std::cout<<"renseigner la largeur de ce rectangle:";
							std::cin>>largeur;
							aire_rect = longueur * largeur;
							std::cout<<"la surface de ce rectangle est :"<<aire_rect;
						break;
						}
					}
					break;
				}while(inter != 1 || inter != 2);

			break;
			
			case 3:
				system("cls");
				std::cout<<"---------------------TRIANGLE----------------------"<<std::endl;
				std::cout<<"[1]-calcul perimetre du triangle"<<std::endl<<std::endl<<"[2]-calcul de la surface du triangle"<<std::endl;
				std::cout<<"---------------------------------------------------"<<std::endl;
				do{
					std::cout<<std::endl<<"choisissez une option :";
					std::cin>>inter;
					switch(inter){
						case 1 :{
							system("cls");
							float cote_3 = 0;
							float cote_2 = 0;
							float cote_1 = 0;
							float peri_tri = 0; 
							std::cout<<"renseigner le cote 1 de ce triangle:";
							std::cin>>cote_1;
							std::cout<<"renseigner le cote 2 de ce triangle:";
							std::cin>>cote_2;
							std::cout<<"renseigner le cote 3 de ce triangle:";
							std::cin>>cote_3;
							peri_tri = cote_1 + cote_2 + cote_3;
							std::cout<<"le perimetre de ce triangle est :"<<peri_tri;
						break;
						}
						case 2 :{
							system("cls");
							float hauteur = 0;
							float base = 0;
							float aire_tri = 0; 
							std::cout<<"renseigner la base de ce triangle:";
							std::cin>>base;
							std::cout<<"renseigner la hauteur de ce triangle:";
							std::cin>>hauteur;
							aire_tri = (base * hauteur)  / 2;
							std::cout<<"la surface de ce triangle est :"<<aire_tri;
						break;
						}
					}
					break;
				}while(inter != 1 || inter != 2);

			break;
			
			default:
				std::cout<<"saisi invalide recommence votre choix"<<std::endl;
			break;
		}
		if(choix == 1||choix == 2||choix == 3){
			break;
		}
	}while(choix != 1 || choix != 2 || choix != 3);
}