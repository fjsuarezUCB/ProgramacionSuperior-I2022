#include <string>

class Cuenta {
public:
	Cuenta() {}

	explicit Cuenta(std::string nombre_titular)
		: nombre(nombre_titular) { // inicializador del atributo
		// cuerpo vacio
	}

	void setNombre(std::string nombre_titular) {
		nombre = nombre_titular;
	}

	std::string getNombre() const {
		return nombre;
	}

private:
	std::string nombre;
};

