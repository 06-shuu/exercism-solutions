
public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int[] birds = {1,2,3,4,5,6,7}; 
		BirdWatcher bw = new BirdWatcher(birds);
		int[] last_week = bw.getLastWeek();
		for (int l: last_week) {
			System.out.print(l +",");
		}
		
		System.out.println();
		System.out.println("---------------");
		
		int today = bw.getToday();
		
		System.out.println(today);
		System.out.println("---------------");
		
		bw.incrementTodaysCount();
		int t = bw.getToday();
		System.out.println(t);
		
		System.out.println("--------------");
		
		boolean c = bw.hasDayWithoutBirds();
		System.out.println(c);
		
		System.out.println("---------------");
	
		int s = bw.getCountForFirstDays(6);
		System.out.println(s);
		System.out.println("---------------");
		
		int busy = bw.getBusyDays();
		System.out.println(busy);
		System.out.println("==============");
		
		

	}

}
