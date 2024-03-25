
public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		int speed = 5;
//		int batteryDrain = 2;
//		var car = new NeedForSpeed(speed, batteryDrain);
//		car.drive();
//
//		
//		// => false
//		
//		System.out.println(car.batteryDrained());
		
		var car = NeedForSpeed.nitro();
		car.drive();
//		car.distanceDriven();
		// => 50
		
		System.out.println(car.distanceDriven());

	}

}
