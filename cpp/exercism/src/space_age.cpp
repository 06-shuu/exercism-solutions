#include <iostream>
using namespace std;

namespace space_age {
	class space_age {
	public:
		double seconds;
		space_age(double aSeconds) {
			seconds = aSeconds;
		}

		double seconds() const {
			return seconds;
		}

		double onEarth() const {
			return seconds / 31557600.0;
		}


        double on_mercury() const
        {
            return (onEarth() / 0.2408467);
        }

        double on_venus() const
        {
            return (onEarth() / 0.61519726);
        }

        double on_mars() const
        {
            return (onEarth() / 1.8808158);
        }

        double on_jupiter() const
        {
            return (onEarth() / 11.862615);
        }

        double on_saturn() const
        {
            return (onEarth() / 29.447498);
        }

        double on_uranus() const
        {
            return (on_earth() / 84.016846);
        }

        double on_neptune() const
        {
            return (onEarth() / 164.79132);
        }
	};


}  // namespace space_age

int main() {

	return 0;
}