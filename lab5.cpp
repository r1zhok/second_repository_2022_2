#include "class Clossing.h"
#include "class Wardrobe.h"

using namespace std;

int main()
{
    Clothing A("Gucci", "very nice textile", "Paris", "black", 50, Shirt),
        B("stani za 40uah", "idk", "China", "white", 70, Jeans),
        C("Moncler", "Sheeesh", "London", "white", 40, Jacket);

    Wardrobe D;
    D.Add_Clo(A);
    D.Add_Clo(B);
    D.Add_Clo(C);
    D.goOut();
    D.Sort();


    return 0;
}

//add comment