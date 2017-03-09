#include "CArbreBinaireEntier.h"
#include "CException.h"
#include <stdio.h>


CArbreBinaireEntier::CArbreBinaireEntier() {
	pABEFilsDroit = NULL;
	pABEFilsGauche = NULL;
}

CArbreBinaireEntier::CArbreBinaireEntier(CArbreBinaireEntier & pABEArbreBinaire) {

	iABEElement = pABEArbreBinaire.iABEElement;
	
	if (pABEArbreBinaire.pABEFilsGauche == NULL)
		pABEFilsGauche = NULL;
	else
		pABEFilsGauche = new CArbreBinaireEntier(*pABEArbreBinaire.pABEFilsGauche);

	if (pABEArbreBinaire.pABEFilsDroit == NULL)
		pABEFilsDroit = NULL;
	else
		pABEFilsDroit = new CArbreBinaireEntier(*pABEArbreBinaire.pABEFilsDroit);
}

/*********************
Destructeur
**********************
Entrée : néant
Necessité : néant
Sortie : néant
Entraine : l'objet en cours est détruit
*********************/

CArbreBinaireEntier::~CArbreBinaireEntier() {
	if (pABEFilsDroit != NULL || pABEFilsGauche != NULL) {
		// Situation d'exception
		CException EXCobjet;
		EXCobjet.EXCEcriture(filsgauche_filsdroit_null);
		throw EXCobjet;
	}
}

int CArbreBinaireEntier::ABELire_Element() {
	return iABEElement;
}

void CArbreBinaireEntier::ABEModifier_Element(unsigned int uiElement) {
	iABEElement = uiElement;
}

CArbreBinaireEntier * CArbreBinaireEntier::ABELire_FilsGauche() {
	return pABEFilsGauche;
}


void CArbreBinaireEntier::ABEModifier_FilsGauche(CArbreBinaireEntier * pABEArbreBinaire) {
	pABEFilsGauche = pABEArbreBinaire;
}

CArbreBinaireEntier * CArbreBinaireEntier::ABELire_FilsDroit() {
	return pABEFilsDroit;
}

void CArbreBinaireEntier::ABEModifier_FilsDroit(CArbreBinaireEntier * pABEArbreBinaire) {
	pABEFilsDroit = pABEArbreBinaire;
}

void CArbreBinaireEntier::ABEViderArbre() {

	if (pABEFilsDroit != NULL) {
		pABEFilsDroit->ABEViderArbre();
		delete pABEFilsDroit;
		pABEFilsDroit = NULL;
	}
	
	if (pABEFilsGauche != NULL) {
		pABEFilsGauche->ABEViderArbre();
		delete pABEFilsGauche;
		pABEFilsGauche = NULL;
	}
}


CArbreBinaireEntier & CArbreBinaireEntier::operator=(CArbreBinaireEntier & pABEArbreBinaire) {

	if (pABEFilsDroit != NULL || pABEFilsGauche != NULL)
		ABEViderArbre();

	iABEElement = pABEArbreBinaire.iABEElement;
	
	if (pABEArbreBinaire.pABEFilsGauche == NULL)
		pABEFilsGauche = NULL;
	else
		pABEFilsGauche = new CArbreBinaireEntier(*pABEArbreBinaire.pABEFilsGauche);

	if (pABEArbreBinaire.pABEFilsDroit == NULL)
		pABEFilsDroit = NULL;
	else
		pABEFilsDroit = new CArbreBinaireEntier(*pABEArbreBinaire.pABEFilsDroit);

	return *this;
}