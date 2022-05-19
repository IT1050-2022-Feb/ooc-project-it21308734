//IT21311604 | Pallage P.D.R.S

#include <cstring>

class Customer 
{
private:
    int cusId;
    string cusName;
    string cusEmail;
    int cusTelNo;

public:
    Customer(int cId, string cName, string cEmail, int cTelNo);
    void editProfile();
    void viewPackages();
    void displayCustomerDetails();
    ~Customer();
}; 