class NeedForSpeed {
	
	private int speed;
	private int batteryDrain;
	private int distance = 0;
	private int remainingBattery = 100;
	
    NeedForSpeed(int speed, int batteryDrain) {
    	this.speed = speed;
    	this.batteryDrain = batteryDrain;
    }

    public boolean batteryDrained() {
    	return remainingBattery < batteryDrain;
    }

    public int distanceDriven() {
    	return distance;
    }

    public void drive() {
    	if(!batteryDrained()) {
    		distance += speed;
        	remainingBattery-=batteryDrain;
    	}
    }

    public static NeedForSpeed nitro() {
    	return new NeedForSpeed(50, 4);
    }
}

