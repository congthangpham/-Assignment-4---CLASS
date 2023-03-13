#include <string>
using namespace std;

class RetailItem {
private:
    string description;
    int unitsOnHand;
    double price;
public:
    // Constructor
    RetailItem(string d, int u, double p) {
        description = d;
        unitsOnHand = u;
        price = p;
    }
    
    // Mutator functions
    void setDescription(string d) {
        description = d;
    }
    
    void setUnitsOnHand(int u) {
        unitsOnHand = u;
    }
    
    void setPrice(double p) {
        price = p;
    }
    
    // Accessor functions
    string getDescription() const {
        return description;
    }
    
    int getUnitsOnHand() const {
        return unitsOnHand;
    }
    
    double getPrice() const {
        return price;
    }
};
