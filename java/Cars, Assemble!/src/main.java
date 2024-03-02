
public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println(productionRatePerHour(10));
	}
	
	public static double productionRatePerHour(int speed) {
		int produced_car = 221;
		if(speed>=1 && speed <=4)
			return speed * produced_car * 1;
		else if(speed>4 && speed <=8)
			return speed * produced_car * 0.9;
		else if(speed == 9)
			return speed * produced_car * 0.8;
		else if(speed == 10)
			return speed * produced_car * 0.77;
		else 
			return 0;
     }

}
