#include "Attack.h"

Attack::Attack(){
}

Attack::~Attack(){
}
void Attack::atck(Player akt, Player kovetkezo) {
	int i = 0;
	while (akt.getHp() > 0 && kovetkezo.getHp() > 0) {
		if (i % 2 == 0) {
			cout << akt.getName() << " -> " << kovetkezo.getName() << endl;
			cout << akt.getName() << ": Hp: " << akt.getHp() << ", Dmg: " << akt.getDmg() << endl;
			if(kovetkezo.getHp() < 0)
				kovetkezo.setHp(0);
			kovetkezo.setHp(kovetkezo.getHp() - akt.getDmg());
			cout << kovetkezo.getName() << ": Hp: " << kovetkezo.getHp() << ", Dmg: " << kovetkezo.getDmg() << endl;
		}
		else {
			cout << kovetkezo.getName() << " -> " << akt.getName() << endl;
			akt.setHp(akt.getHp() - kovetkezo.getDmg());
			if (akt.getHp() < 0)
				akt.setHp(0);
			cout << akt.getName() << ": Hp: " << akt.getHp() << ", Dmg: " << akt.getDmg() << endl;
			cout << kovetkezo.getName() << ": Hp: " << kovetkezo.getHp() << ", Dmg: " << kovetkezo.getDmg() << endl;
		}
		i++;
	}
	won(akt, kovetkezo);
}

void Attack::won(Player a, Player b) {
	if (a.getHp() > 0)
		cout << a.getName() << " wins" << endl;
	else if (b.getHp() > 0)
		cout << b.getName() << " wins" << endl;
}
