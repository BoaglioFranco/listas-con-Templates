#include "Lista.h"

template<typename T>
inline void Lista<T>::Agregar_principio(T dato)
{
	Node<T>* nuevo = new Node<T>(dato);
	
	nuevo->Set_siguiente(inicio);
	inicio = nuevo;
		
}

template<typename T>
inline T Lista<T>::extraerUltimo(){
	Node<T> * pUltimo = GetUltimo();
	T data = pUltimo->Get_dato();
	delete pUltimo;

	return T;
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
			pDesp->Set_siguiente(pDesp->Get_siguiente());
		}
	}
	return pDesp;

}

template<typename T>
inline void Lista<T>::Mostrar_Lista()
{
	Node<T>* pDesp = inicio;
	while (pDesp)
	{
		pDesp->MostrarNodo;
	}

}
