#include <iostream>
#include <cstring>

#include "customer.h"
#include "booking.h"
#include "bookingdetails.h"
#include "package.h"
#include "payment.h"
#include "creditcard.h"
#include "debitcard.h"
#include "admin.h"
#include "boat.h"
#include "manager.h"

using namespace std;


int main () { 
    // creating objects

    // customer
    Customer *c1, *c2, *c3;
    c1 = new Customer(001, "Lucifer M,", "luciferm@outlook.com");
    c2 = new Customer(002, "Chloe D,", "choledeck@outlook.com"); 
    c3 = new Customer(003, "Sam W,", "winchestersam@outlook.com");

    // payments methods
    CreditCard *cc1, *cc2;
    cc1 = new CreditCard(567890456, "visa", "14th Jan 2022");
    cc2 = new CreditCard(555112357, "master", "14th Jan 2022");

    DebitCard *dc1, *dc2;
    dc1 = new DebitCard(1234567890, "visa", "17th Jan 2022");
    dc2 = new DebitCard(0987654321, "master", "18th Jan 2022");

    // booking and booking details
    Booking b1, b2;
    BookingDetails bd1, bd2;

    // packages
    Package pac1, pac2;

    // payments
    Payment pay1, pay2;

    // boats
    Boat bo1, bo2;

    // admins
    Admin a1("A01", "Head Admin");

    // managers
    Manager m1("M01", "Morningstar L.");

    //calling few methods
    pac1.managePackages();
    pac2.viewPackages();
    pac1.viewPackages();
    pac2.managePackages();

    // deleting dynamic objects

    delete c1;
    delete c2;
    delete c3; 
    delete cc1;
    delete cc2;
    delete dc1;
    delete dc2;

    return 0;
}

