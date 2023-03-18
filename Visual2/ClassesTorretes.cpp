#include <iostream>;
#include <string>;
#include <cmath>;
#include <fstream>;
#include <tgmath.h>;

using namespace std;

class DefaultTurret {
protected:
	string nameTurret;
	double dmgTurret;
	int lvlTurret;
	double lifeTurret;
	int priceBuyTurret;
	int priceLevelUpTurret;

public:

	DefaultTurret() {
		nameTurret = "";
		dmgTurret = 0.00;
		lvlTurret = 0;
		lifeTurret = 00.00;
		priceBuyTurret = 0;
		priceLevelUpTurret = 0;
	}

	DefaultTurret(string newName) {
		nameTurret = newName;
		dmgTurret = 3.00;
		lvlTurret = 1;
		lifeTurret = 10.00;
		priceBuyTurret = 25;
		priceLevelUpTurret = 50;
	}

	string getName() {
		return nameTurret;
	}

	int getLvl() {
		return lvlTurret;
	}

	double getDmg() {
		return dmgTurret;
	}

	double getLife() {
		return lifeTurret;
	}

	int getPriceBuyTurret() {
		return priceBuyTurret;
	}

	int getPriceLevelUpTurret() {
		return priceLevelUpTurret;
	}

	virtual void LvlUp() {
		dmgTurret = dmgTurret + 1;
		lvlTurret++;
		lifeTurret = lifeTurret + 2.5;
	}
};

class SniperTurret : public DefaultTurret {
protected:

	bool visibilityOfTurret;

public:
	SniperTurret(string newName) {
		visibilityOfTurret = false;
		nameTurret = newName;
		dmgTurret = 1.75;
		lvlTurret = 1;
		lifeTurret = 8.00;
		priceBuyTurret = 30;
		priceLevelUpTurret = 60;
	}

	bool getVisibilityOfTurret() {
		return visibilityOfTurret;
	}

	virtual void LvlUp() {
		dmgTurret = dmgTurret + 1;
		lvlTurret++;
		lifeTurret = lifeTurret + 5;
		visibilityOfTurret = true;
	}
};

class BombTurret : public DefaultTurret {
protected:

	bool areaDamageOfTurret;

public:
	BombTurret(string newName) {
		areaDamageOfTurret = false;
		nameTurret = newName;
		dmgTurret = 1.25;
		lvlTurret = 1;
		lifeTurret = 15.00;
		priceBuyTurret = 40;
		priceLevelUpTurret = 80;
	}

	bool getAreaDamageOfTurret() {
		return areaDamageOfTurret;
	}

	virtual void LvlUp() {
		dmgTurret = dmgTurret + 0.75;
		lvlTurret++;
		lifeTurret = lifeTurret + 6;
		areaDamageOfTurret = true;
	}
};