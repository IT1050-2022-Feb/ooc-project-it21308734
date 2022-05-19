//IT21308666 | Premarathna W.G.S.R

#include <cstring>

class DeditCard 
{
private:
    int deditNo;
    string deditCardType;
    string expDate;

public:
    DebitCard(int dNo, string dcType, string dExpDate);
    void doTransaction();
    void validatePayment();
    DebitCard();
    ~DebitCard();
}; 