//IT21311604 | Pallage P.D.R.S

#include <cstring>
#include "booking.h"

Booking::setBooking(int bDate, string bStatus)
{
    date = bDate;
    status = bStatus;
}

void Booking::calcSubTotal() {}

void Booking::calcTax() {}

void Booking::calcTotal() {}

Booking::setBookingDetails(int bdBookingId, string bdPaymentStatus)
{
    bookingId = bdBookingId;
    paymentStatus = bdPaymentStatus;
}