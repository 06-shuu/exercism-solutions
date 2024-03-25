class RaceTrack {
	
	private int distance;
	
    RaceTrack(int distance) {
    	this.distance = distance;
    }

    public boolean tryFinishTrack(NeedForSpeed car) {
    	while(!car.batteryDrained()) {
    		car.drive();
    	}
    		
    	return car.distanceDriven() >=distance;
    }
}