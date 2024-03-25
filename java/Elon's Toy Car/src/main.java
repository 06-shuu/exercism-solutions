
public class main {

	public static void main(String[] args) {
		ElonsToyCar car = ElonsToyCar.buy();
		
		car.drive(); //-1 20
		car.drive(); //-2 40
		
		System.out.println(car.batteryDisplay());
		System.out.println(car.distanceDisplay());

	}

}
