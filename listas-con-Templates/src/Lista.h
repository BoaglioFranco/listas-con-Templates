#pragma once
#include "Nodes.h"

template <typename T>
class Lista
{
public:
	Lista<T>();

	void Agregar_principio(T dato); //Nunca lowerCamelCase, no? 
	void Agregar_Final(T nuevo);
	T extraerUltimo();
	//void Mostrar_Lista(); Testing purposes only.
	bool listaVacia();
private:
	Node<T>* inicio;
	Node<T>* GetUltimo();
	Node<T>* Get_Inicio();
};

template<typename T>
inline Lista<T>::Lista()
	: inicio(nullptr)
{
}

template<typename T>
inline void Lista<T>::Agregar_principio(T dato)
{
	Node<T>* nuevo = new Node<T>(dato);
	
	nuevo->Set_siguiente(inicio);
	inicio = nuevo;
		
}

template<typename T>
inline T Lista<T>::extraerUltimo(){
	Node<T>* pAnte = nullptr;
	Node<T>* pDesp = inicio;
	T data;
	if (pDesp) {
		if (!pDesp->Get_siguiente()) {
			data = pDesp->Get_dato();
			inicio = nullptr;
			delete pDesp;
		}

		else {
			while (pDesp->Get_siguiente()) {
				pAnte = pDesp;
				pDesp = pDesp->Get_siguiente();
			}
			data = pDesp->Get_dato();
			pAnte->Set_siguiente(nullptr);
			delete pDesp;

		}
	}
	

	return data;
}

template<typename T>
inline void Lista<T>::Agregar_Final(T dato)
{
	Node<T>* pUltimo = GetUltimo();
	if (pUltimo)
		pUltimo->Set_siguiente(new Node<T>(dato));
	else
		Agregar_principio(dato);
	
}

template<typename T>
inline Node<T>* Lista<T>::GetUltimo()
{
	Node<T>* pDesp = inicio;
	if (pDesp) {
		while (pDesp->Get_siguiente()) {
			pDesp = pDesp->Get_siguiente();
		}
	}
	return pDesp;

}

/*template<typename T>
inline void Lista<T>::Mostrar_Lista()
{
	Node<T>* pDesp = inicio;
	while (pDesp)
	{
		pDesp->MostrarNodo;
	}

}*/

template<typename T>
inline bool Lista<T>::listaVacia() {
	return inicio == nullptr;
}