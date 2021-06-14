#include <iostream>
#include "Jungle.h"
#include "WildAnimal.h"
#include "DomesticAnimal.h"
#include "Pet.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    Jungle jungle(n);
    for (int i = 0; i < n / 2; ++i) {
        jungle.AddAnimal(new WildAnimal);
        jungle.AddAnimal(new DomesticAnimal);
    }
    for (int i = 0; i < 1000; ++i) {
        jungle.movement();
    }
    cout << jungle.getTotalFall();

    int n2;
    cin >> n2;
    Jungle jungle2(n2);
    for (int i = 0; i < n2 / 3; ++i) {
        jungle2.AddAnimal(new WildAnimal);
        jungle2.AddAnimal(new DomesticAnimal);
        jungle2.AddAnimal(new Pet);
    }
    for (int i = 0; i < 1000; ++i) {
        jungle2.movement();
    }
    cout << jungle2.getTotalFall();
}