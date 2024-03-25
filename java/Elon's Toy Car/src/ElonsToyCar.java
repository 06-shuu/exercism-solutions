public class ElonsToyCar {
	
	private int distance; 
	
	private int percentage = 100;

	public static ElonsToyCar buy() {
    	ElonsToyCar controller = new ElonsToyCar();
    	return controller;
    }

    public String distanceDisplay() {
    	return "Driven "+ distance + " meters";
    }

    public String batteryDisplay() { 
    	if(percentage == 0)
    		return "Battery empty";
        return "Battery at "+ percentage + "%";

    }

    public void drive() {
    	if(percentage > 0) {
    		distance +=20;
    		--percentage;  
    	}
    	
    }
    	
}
