//IT21307430 | Chanthuka U.L.D

#include <cstring>

class Admin
{
private:
    int adminId;
    char adminType[];

public:
    Admin(int aId , char aType[]);
    void viewReport();
    void addPackages();
    void updatePackages();
};
