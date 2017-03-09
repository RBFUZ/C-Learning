#include "CABREntier.h"

void main()
{
	CArbreBinaireEntier * pABEArbre1 = new CArbreBinaireEntier();
	CArbreBinaireEntier * pABEFilsDroit1 = new CArbreBinaireEntier();
	CArbreBinaireEntier * pABEFilsGauche1 = new CArbreBinaireEntier();

	pABEArbre1->ABEModifier_FilsDroit(pABEFilsDroit1);
	pABEArbre1->ABEModifier_FilsGauche(pABEFilsGauche1);

	pABEArbre1->ABEModifier_Element(5);
	pABEArbre1->ABELire_FilsDroit()->ABEModifier_Element(6);

}