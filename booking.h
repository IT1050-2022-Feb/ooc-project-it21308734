//IT21311604 | Pallage P.D.R.S

#include <cstring>

class Booking 
{
private:
    char date;
    string status;

public:
    void setBooking(int bDate, string bStatus);
    void calcSubTotal();
    void calcTax();
    void calcTotal();
};