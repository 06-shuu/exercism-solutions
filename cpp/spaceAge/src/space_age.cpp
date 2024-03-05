#include "space_age.h"
namespace space_age {

	space_age::space_age(double seconds) : aSeconds(seconds) {}

	double space_age::seconds() const {
		return aSeconds;
	}
	double space_age::on_earth() const {
		return aSeconds/31557600.0;
	}
	double space_age::on_mercury() const {
		return on_earth() / 0.2408467;
	}
	double space_age::on_venus() const {
		return on_earth() / 0.61519726;
	}
	double space_age::on_mars() const {
		return on_earth() / 1.8808158;
	}
	double space_age::on_jupiter() const {
		return on_earth() / 11.862615;
	}
	double space_age::on_saturn() const {
		return on_earth() / 29.447498;
	}
	double space_age::on_uranus() const {
		return on_earth() / 84.016846;
	}
	double space_age::on_neptune() const {
		return on_earth() / 164.79132;
	}

}  // namespace space_age 

int main() {

	//test
	space_age::space_age sp(1000000000);
	cout << "Age on earth: " << sp.on_earth() << endl;
	cout << "Age on mercury: " << sp.on_mercury() << endl;
	cout << "Age on venus: " << sp.on_venus() << endl;
	cout << "Age on mars: " << sp.on_mars() << endl;
	cout << "Age on jupiter: " << sp.on_jupiter() << endl;
	cout << "Age on saturn: " << sp.on_saturn() << endl;
	cout << "Age on uranus: " << sp.on_uranus() << endl;
	cout << "Age on neptun: " << sp.on_neptune() << endl;
	
	
	return  0;
}