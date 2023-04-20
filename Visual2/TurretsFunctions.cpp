#include <iostream>;
#include <string>;
#include <cmath>;
#include <fstream>;
#include <conio.h>;
#include <chrono>;
#include <thread>;
#include <tgmath.h>;
#include <windows.h>;
#using <System.Windows.Forms.dll>

#include "ClassesTorretes.cpp";
#include "TurretsFunctions.h"

using namespace std;
using namespace System::Windows::Forms;

const int tamanyArray = 5;
DefaultTurret* mapaTorretesArray[tamanyArray];
int cash = 0;

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

bool accionMenu1ComprarTorreta(System::String^ Turret, System::String^ Spot, int^ cash) {

	if (*cash >= 25 && mapaTorretesArray[Spot[6]-49] == NULL) {
		int accionMenu = 1;

		while (accionMenu != 0)
		{
			int posicionDeInteracionArray = 0;

			for (int i = 0; i < 11; i++) {
				if (mapaTorretesArray[i] == NULL) {
					posicionDeInteracionArray = i;
					break;
				}
				if (mapaTorretesArray[tamanyArray-1] != NULL) {
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
					if (a->getPriceBuyTurret() > *cash) {
						mapaTorretesArray[posicionDeInteracionArray] = NULL;
					}
					else {
						mapaTorretesArray[posicionDeInteracionArray] = a;
						*cash = *cash - 25;
						return 1;
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
					if (b->getPriceBuyTurret() > *cash) {
						mapaTorretesArray[posicionDeInteracionArray] = NULL;
					}
					else {
						mapaTorretesArray[posicionDeInteracionArray] = b;
						*cash = *cash - 30;
						return 1;
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
					if (c->getPriceBuyTurret() > *cash) {
						mapaTorretesArray[posicionDeInteracionArray] = NULL;
					}
					else {
						mapaTorretesArray[posicionDeInteracionArray] = c;
						*cash = *cash - 40;
						return 1;
					}
					break;
				}

				break; }
			}

			if (accionMenu == 5) {
				/*cout << "No se pueden torretas comprar ya que todos los huecos estan llenos\n";*/
			}

			accionMenu = 0;
			return 0;
		}
	}
	else {

		System::String^ text = "Error: You do not have enough money or the spot is already taken!";
		System::String^ caption = "Error Message";
		MessageBoxButtons buttons = MessageBoxButtons::OK;
		MessageBoxIcon icon = MessageBoxIcon::Error;
		MessageBox::Show(text, caption, buttons, icon);

		return 0;
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
			&& mapaTorretesArray[posicionDeInteracionArray]->getLvl() < 3) {
			cash = cash - mapaTorretesArray[posicionDeInteracionArray]->getLvl()
				* mapaTorretesArray[posicionDeInteracionArray]->getPriceLevelUpTurret();
			mapaTorretesArray[posicionDeInteracionArray]->LvlUp();
		}
		else {
			if (mapaTorretesArray[posicionDeInteracionArray]->getLvl() < 3) {
				/*cout << "No tienes dinero suficiente para mejorar la torreta\n";*/
			}
			else {
				/*cout << "La torreta ya es de nivel maximo\n";*/
			}
		}
	}
}

void accionMenu4ObtenerCash(int^ cash, int positionGetMenu)
{
	switch (positionGetMenu) {
	case 1: *cash = *cash + 50;
		break;

	case 2: *cash = *cash + 100;
		break;

	case 3: *cash = *cash + 250;
		break;

	}
}