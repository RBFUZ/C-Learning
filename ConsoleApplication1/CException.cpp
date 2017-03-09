#include "CException.h"

/*********************
Constructeur par d�faut
**********************
Entr�e : n�ant
Necessit� : n�ant
Sortie : n�ant
Entraine : l'objet en cours est initialis�
*********************/

CException::CException()
{
	uiEXCValeur = 0;
}

/*********************
Destructeur par d�faut
**********************
Entr�e : n�ant
Necessit� : n�ant
Sortie : n�ant
Entraine : l'objet en cours est d�truit
*********************/

CException::~CException()
{
}

/*********************
Methode : Lecture du code d'erreur
**********************
Entr�e : n�ant
Necessit� : n�ant
Sortie : unsigned int - retourne code d'erreur
Entraine : retourne le code d'erreur
*********************/

unsigned int CException::EXCLecture()
{
	return uiEXCValeur;
}

/*********************
Methode : Modification du code d'erreur
**********************
Entr�e : unsigned int - code d'erreur
Necessit� : n�ant
Sortie : n�ant
Entraine : Modification du code d'erreur
*********************/

void CException::EXCEcriture(unsigned int uiCodeErreur)
{
	uiEXCValeur = uiCodeErreur;
}