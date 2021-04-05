#include "radiateur.h"
#include <iostream>

int radiateur::setConsigne(int idRad, int temp)
{
	xbee Xbee;
	


	
	return  Xbee.send(idRad,temp);
	
	
}


int main(int argc, char ** argv) {
	int idRadiateur;
	int temperature;

	cout << "Valeurs de l'id radiateur  ? "; cin >> idRadiateur;
	cout << "Valeurs de la temperature ? "; cin >> temperature;

	 if (idRadiateur !=0 && temperature !=0) {
		 radiateur Rad;
		 Rad.setConsigne(idRadiateur, temperature);
	 }

}
