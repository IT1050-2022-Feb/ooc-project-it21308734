//IT21311604 | Pallage P.D.R.S

#include <cstring>
#include "customer.h"

Customer::Customer(int cId, string cName, string cEmail, int cTelNo)
{
    cusId = cId;
    cusName = cName;
    cusEmail = cEmail;
    cusTelNo = cTelNo;
}

void Customer::editProfile() {}

void Customer::viewPackages() {}

Customer::displayCustomerDetails()
{
    cout << "Customer Id = " << cusId;
    cout << "Customer Name = " << cusName << endl;
    cout << "Customer Email = " << cusEmail << endl;
    cout << "Customer Telephone No = " << cusTelNo << endl;
}
 