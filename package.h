//IT21310164 | Subhath H.R.H

#include <cstring>

class Package
{
private:
    int packageId;
    string packageType;


public:
    void setPackageDetails(int pacId, string pacType);
    void displaypackages();
    void addItemsToPackages(); 
};