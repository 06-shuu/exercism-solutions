
class BirdWatcher {
    private final int[] birdsPerDay;

    public BirdWatcher(int[] birdsPerDay) {
        this.birdsPerDay = birdsPerDay.clone();
    }

    public int[] getLastWeek() {
        return birdsPerDay; 
    }

    public int getToday() {
        return birdsPerDay[birdsPerDay.length-1]; 
    }

    public void incrementTodaysCount() {
        int value = getToday() + 1;
    	birdsPerDay[birdsPerDay.length-1] = value;
    }

    public boolean hasDayWithoutBirds() {
           for (int i : birdsPerDay) {
        	if (i == 0)
        		return true;
        }
        return false;
    }

    public int getCountForFirstDays(int numberOfDays) {
    	int sum = 0;
        int count = Math.min(numberOfDays,birdsPerDay.length);

        for (int i = 0; i < count; i++) {
            sum += birdsPerDay[i];
        }

        return sum;
    }

    public int getBusyDays() {
        int sum = 0;
        for(int i=0; i<birdsPerDay.length; i++) {
        	if(birdsPerDay[i]>=5)
        		sum++;
        }
        return sum;
    }
}
