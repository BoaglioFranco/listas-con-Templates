#pragma once
#include "Nodes.h"

template <typename T>
class Lista
{
public:
	Lista();

	void Agregar_principio(T dato);
	void Agregar_Final(T nuevo);
	T extraerUltimo();
	void Mostrar_Lista();

private:
	Node<T>* inicio;
	Node<T>* GetUltimo();
	Node<T>* Get_Inicio();
};

