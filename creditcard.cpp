//IT21308734 | Kannangara K.K.H.R

#include <cstring>
#include "creditcard.h"

CreditCard::CreditCardDetails(int cNo, string ccType, string cExpDate)
{
    creditNo = cNo;
    creditCardType = ccType;
    expDate = cExpDate;
}

void CreditCard::doTransaction() {}

void CreditCard::validatePayment() {}
