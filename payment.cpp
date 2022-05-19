//IT21307430 | Chanthuka U.L.D 

#include <cstring>
#include "payment.h"

Payment::Payment(){
    paymentId = 000;
    paymentMethod = "UNKNWN";
    amount = 000000.00;
}

Payment::setPaymentDetails(int payId, string payMethod, double payAmount)
{
    paymentId = payId;
    paymentMethod = payMethod;
    amount = payAmount;
}

float Payment::getPayment()
{
  
}