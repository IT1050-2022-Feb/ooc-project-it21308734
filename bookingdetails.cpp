//IT21308666 | Premarathna W.G.S.R

#include <cstring>
#include "bookingdetails.h"

Booking::setBookingDetails(int bdBookingId, string bdPaymentStatus)
{
    bookingId = bdBookingId;
    paymentStatus = bdPaymentStatus;
}

void BookingDetails::displayBookingDetails()
{
    cout << "BookingID = " << bookingid;
    cout << "Payment Status = " << paymentStatus << endl;
}