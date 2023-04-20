#pragma once

bool accionMenu1ComprarTorreta(System::String^ a, System::String^ b, int^ cash);
bool accionMenu2EliminarTorreta(System::String^ a, int^ cash);
bool accionMenu3MejorarTorreta(System::String^ a, int^ cash);
void accionMenu4ObtenerCash(int^ cash, int positionGetMenu);
string valueTurretBuyInfo(System::String^ a);
int valueTurretLvlInfo(System::String^ a);