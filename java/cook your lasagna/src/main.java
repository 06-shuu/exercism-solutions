
public class main {
	
	public static void main(String[] args) {
		Lasagna lasagna = new Lasagna();

		System.out.println("Expected cooking time: " + lasagna.expectedMinutesInOven());
		System.out.println("Remaining minutes in oven: "+ lasagna.remainingMinutesInOven(30));
		System.out.println("Preparation time in minutes for four layers: " + lasagna.preparationTimeInMinutes(4));
		System.out.println("Total time in minutes.. : "+ lasagna.totalTimeInMinutes(4, 30));
		System.out.println();
	}
}
