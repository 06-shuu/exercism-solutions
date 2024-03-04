#include <iostream>
using namespace std;

// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    // TODO: Return the correct time.
    return 40;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    // TODO: Calculate and return the remaining in the oven based on the time
    // the lasagna has already been there.
    return ovenTime() - actualMinutesInOven;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    // TODO: Calculate and return the preparation time with the
    // `numberOfLayers`.
    return numberOfLayers*2;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    // TODO: Calculate and return the total time so far.
    return preparationTime(numberOfLayers) + actualMinutesInOven;
}

int main() {

    cout << "Expected oven time in minutes: " << ovenTime() << endl;
    cout << "Remaining oven time in minutes: " << remainingOvenTime(30) << endl;
    cout << "Prepatation time in minutes: " << preparationTime(2) << endl;
    cout << "Elapsed time in minutes: " << elapsedTime(3, 20) << endl;

    return 0;
}