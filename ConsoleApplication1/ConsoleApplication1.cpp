// ConsoleApplication1.cpp : définit le point d'entrée pour l'application console.
//
#include "CABREntier.h"
using namespace std;

void main()
{
	// Test de CArbreBinaireEntier
	CArbreBinaireEntier * pABEArbre1 = new CArbreBinaireEntier();
	CArbreBinaireEntier * pABEFilsDroit1 = new CArbreBinaireEntier();
	CArbreBinaireEntier * pABEFilsGauche1 = new CArbreBinaireEntier();
	CArbreBinaireEntier * pABETestSurcharge = new CArbreBinaireEntier();

	pABEArbre1->ABEModifier_FilsDroit(pABEFilsDroit1);
	pABEArbre1->ABEModifier_FilsGauche(pABEFilsGauche1);

	pABEArbre1->ABEModifier_Element(1);
	pABEFilsDroit1->ABEModifier_Element(2);
	pABEFilsGauche1->ABEModifier_Element(3);

	*pABETestSurcharge = *pABEArbre1;

	// Test de CArbreEntier
	CABREntier * pABRArbre1 = new CABREntier();
	CABREntier * pABRArbreGauche1 = new CABREntier();
	CABREntier * pABRArbreDroit1 = new CABREntier();
	CABREntier * pABRArbre2 = new CABREntier();

	pABRArbre1->ABEModifier_Element(5);
	pABRArbre1->ABRAjouterElement(8);
	pABRArbre1->ABRAjouterElement(1);
	pABRArbre1->ABRAjouterElement(0);
	pABRArbre1->ABRAjouterElement(19);

	if (pABRArbre1->ABRRechercheElement(19)) {
		 cout << "Non trouvé";
	}
}


