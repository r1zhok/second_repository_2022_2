#include "class Clossing.h"
#include "class Wardrobe.h"

using namespace std;

int main()
{
    Clothing Shirt("Gucci", "very nice textile", "Paris", "black", 50, Shirt),
        Jeans("stani za 40uah", "idk", "China", "white", 70, Jeans),
        Jacket("Moncler", "Sheeesh", "London", "white", 40, Jacket);

    Wardrobe Main;

    Main.add_clo(Shirt);
    Main.add_clo(Jeans);
    Main.add_clo(Jacket);
    Main.go_out();
    Main.Sort();


    return 0;
}
