//IT21308734 | Kannangara K.K.H.R

#include <cstring>

class CreditCard 
{
private:
    int creditNo;
    string creditCardType;
    string expDate;

public:
    CreditCard(int cNo, string ccType, string cExpDate);
    void doTransaction();
    void validatePayment();
    CreditCard();
    ~CreditCard();
};