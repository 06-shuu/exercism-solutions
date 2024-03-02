
public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println(isArmstrongNumber(153));

	}
	
	//note:
	//153 is an Armstrong number, 
	//because: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

	static boolean isArmstrongNumber(int numberToCheck) {
		int originalnum=numberToCheck;
        String in_string = Integer.toString(numberToCheck); //to get the length
		int[] numbers = new int[in_string.length()]; 
		int count=0;
		int num; 
		while (numberToCheck > 0) {
			num = numberToCheck%10;
			numbers[count]=num;
		    System.out.println(num);
		    numberToCheck = numberToCheck / 10;
		    count++;    
		}
		
		int sum = 0;
		for(int i=0; i<in_string.length(); i++) {
			 sum += Math.pow(numbers[i],count);
		}
		
		System.out.println(sum);
		
		if (originalnum == 0 || sum==originalnum)
            return true;
        else
            return false;

    }

}
