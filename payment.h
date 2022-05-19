//IT21307430 | Chanthuka U.L.D

#include <cstring>

class Payment
{
private:

    int paymentId;
    string paymentMethod;
    double amount;

public:

    void setPaymentDetails(int payId, string payMethod, double payAmount);
    float getPayment();
    Payment(); 
	  ~Payment();
};

