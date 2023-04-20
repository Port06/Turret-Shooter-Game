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

	return namePosicionTurret;
};

bool accionMenu1ComprarTorreta(System::String^ Turret, System::String^ spot, int^ cash) {

	if (*cash >= 25 && mapaTorretesArray[spot[6]-49] == NULL) {
		int accionMenu = Turret[0]-48;

		while (accionMenu != 0)
		{
			int posicionDeInteracionArray = 0;

			for (int i = 0; i < 5; i++) {
				if (mapaTorretesArray[spot[6]-49] == NULL) {
					posicionDeInteracionArray = spot[6]-49;
					break;
				}
				else {

					System::String^ text = "Error: The spot is already taken!";
					System::String^ caption = "Error Message";
					MessageBoxButtons buttons = MessageBoxButtons::OK;
					MessageBoxIcon icon = MessageBoxIcon::Error;
					MessageBox::Show(text, caption, buttons, icon);

				}
			}

			switch (accionMenu) {
			case 1: {

				int namePosicionTurret = 0;

				if (mapaTorretesArray[posicionDeInteracionArray] == NULL) {

					string DefaultName = "DefaultTurret";
					namePosicionTurret = checkNameTurretCreation(spot[6]-49, DefaultName);

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
					namePosicionTurret = checkNameTurretCreation(spot[6]-49, DefaultName);

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
					namePosicionTurret = checkNameTurretCreation(spot[6]-49, DefaultName);

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

		System::String^ text = "Error: You do not have enough money!";
		System::String^ caption = "Error Message";
		MessageBoxButtons buttons = MessageBoxButtons::OK;
		MessageBoxIcon icon = MessageBoxIcon::Error;
		MessageBox::Show(text, caption, buttons, icon);

		return 0;
	}
}

bool accionMenu2EliminarTorreta(System::String^ spot, int^ cash) {
	int posicionDeInteracionArray = spot[6]-49;

	if (mapaTorretesArray[posicionDeInteracionArray] != NULL) {
		*cash = *cash + (mapaTorretesArray[posicionDeInteracionArray]->getLvl() * mapaTorretesArray[posicionDeInteracionArray]->getPriceLevelUpTurret() / 2);

		mapaTorretesArray[posicionDeInteracionArray] = NULL;
		return 1;
	}
	else {

		System::String^ text = "Error: This spot has no turret to delete!";
		System::String^ caption = "Error Message";
		MessageBoxButtons buttons = MessageBoxButtons::OK;
		MessageBoxIcon icon = MessageBoxIcon::Error;
		MessageBox::Show(text, caption, buttons, icon);
		return 0;
	}
	
}

bool accionMenu3MejorarTorreta(System::String^ spot, int^ cash) {
	int posicionDeInteracionArray = spot[6]-49;

	if (mapaTorretesArray[posicionDeInteracionArray] != NULL) {
		if (mapaTorretesArray[posicionDeInteracionArray]->getLvl() * mapaTorretesArray[posicionDeInteracionArray]->getPriceLevelUpTurret() <= *cash
			&& mapaTorretesArray[posicionDeInteracionArray]->getLvl() < 3) {
			*cash = *cash - mapaTorretesArray[posicionDeInteracionArray]->getLvl()
				* mapaTorretesArray[posicionDeInteracionArray]->getPriceLevelUpTurret();
			mapaTorretesArray[posicionDeInteracionArray]->LvlUp();
			return 1;
		}
		else {
			if (mapaTorretesArray[posicionDeInteracionArray]->getLvl() < 3) {
				
				System::String^ text = "Error: You do not have enough money to upgrade the turret!";
				System::String^ caption = "Error Message";
				MessageBoxButtons buttons = MessageBoxButtons::OK;
				MessageBoxIcon icon = MessageBoxIcon::Error;
				MessageBox::Show(text, caption, buttons, icon);

				return 0;
			}
			else {
				
				System::String^ text = "Error: Turret is already lvl max!";
				System::String^ caption = "Error Message";
				MessageBoxButtons buttons = MessageBoxButtons::OK;
				MessageBoxIcon icon = MessageBoxIcon::Error;
				MessageBox::Show(text, caption, buttons, icon);

				return 0;
			}
		}
	}
	else {

		System::String^ text = "Error: No turret here!";
		System::String^ caption = "Error Message";
		MessageBoxButtons buttons = MessageBoxButtons::OK;
		MessageBoxIcon icon = MessageBoxIcon::Error;
		MessageBox::Show(text, caption, buttons, icon);

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

string valueTurretBuyInfo(System::String^ spot) {

	return mapaTorretesArray[spot[6] - 49]->getName();

}

int valueTurretLvlInfo(System::String^ spot) {

	return mapaTorretesArray[spot[6] - 49]->getLvl();

}