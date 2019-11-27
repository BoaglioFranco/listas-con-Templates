#include <iostream>
#include <string>
#include "Nodes.h"
#include "Lista.h"

int main() {
	Lista<int> A;
	A.Agregar_principio(3);
	A.Agregar_Final(69420);

	std::cout << A.extraerUltimo();

	return 0;
}