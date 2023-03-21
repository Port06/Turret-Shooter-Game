#include <iostream>;
#include <string>;
#include <cmath>;
#include <fstream>;
#include <conio.h>;
#include <chrono>;
#include <thread>;
#include <tgmath.h>;

#include "ClassesTorretes.cpp";

using namespace std;

const int tamanyArray = 10;
DefaultTurret* mapaTorretesArray[tamanyArray];
int cash = 75;

int checkNameTurretCreation(int namePosicionTurret, string DefaultName) {

	string checkTurretNameCreating = DefaultName + to_string(namePosicionTurret);

	for (int j = 0; j < 10; j++) {
		if (mapaTorretesArray[j] != NULL) {
			if (checkTurretNameCreating == mapaTorretesArray[j]->getName()) {
				namePosicionTurret++;
				namePosicionTurret = checkNameTurretCreation(namePosicionTurret, DefaultName);
			}
		}
	}
	return namePosicionTurret;
};

void accionMenu1ComprarTorreta() {

	if (cash >= 25) {
		int accionMenu = 1;

		while (accionMenu != 0)
		{
			int posicionDeInteracionArray = 0;

			for (int i = 0; i < 11; i++) {
				if (mapaTorretesArray[i] == NULL) {
					posicionDeInteracionArray = i;
					break;
				}
				if (mapaTorretesArray[9] != NULL) {
					accionMenu = 5;
				}
			}

			switch (accionMenu) {
			case 1: {

				int namePosicionTurret = 0;

				if (mapaTorretesArray[posicionDeInteracionArray] == NULL) {

					string DefaultName = "DefaultTurret";
					namePosicionTurret = checkNameTurretCreation(0, DefaultName);

					string turretName = DefaultName + to_string(namePosicionTurret);

					DefaultTurret* a = new DefaultTurret(turretName);
					if (a->getPriceBuyTurret() > cash) {
						mapaTorretesArray[posicionDeInteracionArray] = NULL;
					}
					else {
						mapaTorretesArray[posicionDeInteracionArray] = a;
						cash = cash - 25;
					}
					break;
				}

				break; }
			case 2: {

				int namePosicionTurret = 0;

				if (mapaTorretesArray[posicionDeInteracionArray] == NULL) {

					string DefaultName = "SniperTurret";
					namePosicionTurret = checkNameTurretCreation(0, DefaultName);

					string turretName = "SniperTurret" + to_string(namePosicionTurret);

					DefaultTurret* b = new SniperTurret(turretName);
					if (b->getPriceBuyTurret() > cash) {
						mapaTorretesArray[posicionDeInteracionArray] = NULL;
					}
					else {
						mapaTorretesArray[posicionDeInteracionArray] = b;
						cash = cash - 30;
					}
					break;
				}

				break; }
			case 3: {

				int namePosicionTurret = 0;

				if (mapaTorretesArray[posicionDeInteracionArray] == NULL) {

					string DefaultName = "BombTurret";
					namePosicionTurret = checkNameTurretCreation(0, DefaultName);

					string turretName = "BombTurret" + to_string(namePosicionTurret);

					DefaultTurret* c = new BombTurret(turretName);
					if (c->getPriceBuyTurret() > cash) {
						mapaTorretesArray[posicionDeInteracionArray] = NULL;
					}
					else {
						mapaTorretesArray[posicionDeInteracionArray] = c;
						cash = cash - 40;
					}
					break;
				}

				break; }
			}

			if (accionMenu == 5) {
				/*cout << "No se pueden torretas comprar ya que todos los huecos estan llenos\n";*/
			}

			accionMenu = 0;
		}
	}
	else {
		/*cout << "No tiene dinero para comprar ninguna de las torretas propuestas!\n";*/
	}
}

void accionMenu2EliminarTorreta(int positionGetMenu) {
	int posicionDeInteracionArray = positionGetMenu;

	if (mapaTorretesArray[posicionDeInteracionArray] != NULL) {
		cash = cash + (mapaTorretesArray[posicionDeInteracionArray]->getLvl() * mapaTorretesArray[posicionDeInteracionArray]->getPriceLevelUpTurret() / 2);
	}
	for (int i = posicionDeInteracionArray; i < 10; i++) {
		if (i == tamanyArray - 1) {
			mapaTorretesArray[i] = NULL;
		}
		else {
			mapaTorretesArray[i] = mapaTorretesArray[i + 1];
		}
	}
}

void accionMenu3MejorarTorreta(int positionGetMenu) {
	int posicionDeInteracionArray = positionGetMenu;

	if (mapaTorretesArray[posicionDeInteracionArray] != NULL) {
		if (mapaTorretesArray[posicionDeInteracionArray]->getLvl() * mapaTorretesArray[posicionDeInteracionArray]->getPriceLevelUpTurret() <= cash
			&& mapaTorretesArray[posicionDeInteracionArray]->getLvl() < 5) {
			cash = cash - mapaTorretesArray[posicionDeInteracionArray]->getLvl()
				* mapaTorretesArray[posicionDeInteracionArray]->getPriceLevelUpTurret();
			mapaTorretesArray[posicionDeInteracionArray]->LvlUp();
		}
		else {
			if (mapaTorretesArray[posicionDeInteracionArray]->getLvl() < 5) {
				/*cout << "No tienes dinero suficiente para mejorar la torreta\n";*/
			}
			else {
				/*cout << "La torreta ya es de nivel maximo\n";*/
			}
		}
	}
}

int accionMenu4ObtenerCash(int positionGetMenu) {

	switch (positionGetMenu) {
	case 1: cash = 50;
		break;

	case 2: cash = 100;
		break;
		
	case 3: cash = 250;
		break;

	}

	return cash;
}