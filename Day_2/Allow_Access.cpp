#include <iostream>//Para llamar a input,output


constexpr char Allow_Access = 'a';
constexpr char Deny_Access  = 'd';
constexpr char Current_User_Status = Allow_Access;

int main() {
    bool is_authorized;

    if (Current_User_Status == 'a') {
        is_authorized = true;
    } else {
        is_authorized = false;
    }

    
    std::cout << "--- ZIZZBI SYSTEM INITIALIZATION ---" << std::endl;

    if (!is_authorized) {
        
        std::cout << "Status: Access Denied. User is not authorized for this territory." << std::endl;
    } else {
        
        std::cout << "Status: Access Granted. Welcome to the Zizzbi Management Suite." << std::endl;
    }

    return 0;
}