public class LogLevels {
    
	
    public static String message(String logLine) {
       int i = logLine.indexOf("]");
       return logLine.substring(i+3).trim();
    }

    public static String logLevel(String logLine) {
        int startIndex = logLine.indexOf("[")+1;
        int endIndex = logLine.indexOf("]");
        return logLine.substring(startIndex, endIndex);
    }

    public static String reformat(String logLine) {
    	return(message(logLine)+" ("+logLevel(logLine)+")");
    }
      
}
