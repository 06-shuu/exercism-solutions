#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H
#include <iostream>
using namespace std;
namespace space_age {
	class space_age {
	public:
		//constructor
		space_age(double seconds);

		//functions
		double seconds() const;
		double on_earth() const;
		double on_mercury() const;
		double on_venus() const;
		double on_mars() const;
		double on_jupiter() const;
		double on_saturn() const;
		double on_uranus() const;
		double on_neptune() const;
	private:
		double aSeconds;
	};

}  // namespace space_age

#endif // SPACE_AGE_H