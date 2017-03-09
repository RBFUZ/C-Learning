#include "CABREntier.h"
#include <stdio.h>


void CABREntier::ABRAjouterElement(int iElement)
{
	CABREntier * pABEtmp;

	if (iElement >= ABELire_Element()) {
		if (ABELire_FilsDroit() == NULL || ABELire_FilsDroit()->ABELire_Element() == iElement) {
			pABEtmp = new CABREntier;
			pABEtmp->ABEModifier_Element(iElement);
			pABEtmp->ABEModifier_FilsDroit(ABELire_FilsDroit());
			ABEModifier_FilsDroit(pABEtmp);
		}
		else
			((CABREntier *)ABELire_FilsDroit())->ABRAjouterElement(iElement);
	}
	else {
		if (ABELire_FilsGauche() == NULL || ABELire_FilsGauche()->ABELire_Element() == iElement) {
			pABEtmp = new CABREntier;
			pABEtmp->ABEModifier_Element(iElement);
			pABEtmp->ABEModifier_FilsGauche(ABELire_FilsGauche());
			ABEModifier_FilsGauche(pABEtmp);
		}
		else
			((CABREntier *)ABELire_FilsGauche())->ABRAjouterElement(iElement);
	}
}

bool CABREntier::ABRRechercheElement(int iElement)
{
	if (ABELire_Element() == iElement)
		return true;
	else
		if (ABELire_Element() > iElement)
			if (ABELire_FilsGauche() != NULL)
				return ((CABREntier *)ABELire_FilsGauche())->ABRRechercheElement(iElement);
			else
				return false;
		else
			if (ABELire_FilsDroit() != NULL)
				return ((CABREntier *)ABELire_FilsDroit())->ABRRechercheElement(iElement);
			else
				return false;
}