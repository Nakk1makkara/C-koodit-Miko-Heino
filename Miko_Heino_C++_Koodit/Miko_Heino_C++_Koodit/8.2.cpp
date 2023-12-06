#include <iostream>
#include <string>
#include <vector>

class karttaPohja {

};
class maastoRuutu {
public:
	int x;
	int y;
};

class maastoTyyppi {

public:
	std::string maastoTyyppi;
	float liikkumisvaikeus;
	float taisteluvaikeus;
};

class objecti {
public:
	std::string nimi;
};


class muuObjecti {

public:
	std::string nimi;
	int kuntoVaikutus;
	int rahaVaikutus;
};

class taisteluVaruste {
public:
	int hyokkaysVoima;
	int puolustusVoima;

};

class peliHahmo {
public:
	std::string nimi;
	int level;
	int hp;
	int gold;


};

class vihollinen {
public:
	int hp;

};

class vihollisTyyppi {
public:
	int alku_hp;
	int alku_hyokkaysvoima;
	int alku_puolustusvoima;
};