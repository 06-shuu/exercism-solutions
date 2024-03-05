#include<iostream>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    return hourly_rate * 8.0;
}

// apply_discount calculates the price after a discount
double apply_discount(double before_discount, double discount) {
    return before_discount - (before_discount* (discount/100.0));
}

// monthly_rate calculates the monthly rate, given an hourly rate and a discount
// The returned monthly rate is rounded up to the nearest integer.
int monthly_rate(double hourly_rate, double discount) {
    return ceil((apply_discount(hourly_rate,  discount))*(22.0*8)); //22days a month, 8 hours a day
}

// days_in_budget calculates the number of workdays given a budget, hourly rate,
// and discount The returned number of days is rounded down (take the floor) to
// the next integer.
int days_in_budget(int budget, double hourly_rate, double discount) {
    /*double e_hourly_rate = hourly_rate - (hourly_rate * (discount / 100.0));*/
    double total_hours = budget / apply_discount(hourly_rate,discount);
    return floor(total_hours/8); //8 for 8 working hours per day
}

int main() {
    //test
    std::cout << daily_rate(60.0) << std::endl; 
    std::cout << apply_discount(150, 10.0) << std::endl;
    std::cout << monthly_rate(77, 10.5) << std::endl;
    std::cout << days_in_budget(20'000, 80, 11.0) << std::endl;
    return 0;
}