
public class main {

	public static void main(String[] args) {

		
		System.out.println(clean("a Bc"));
//		String name = "shu-mokh";
//		String dashless = name.replaceAll("\\-", "");
//		System.out.println("dashless: " + dashless);
//		
//		System.out.println(word);

	}//end of main
	
	 static String clean(String identifier) {
		 //char character; 
		 StringBuilder word = new StringBuilder();
		 boolean isCap = false; 
		 
		 for (char character : identifier.toCharArray()) {
			 //task1:
			 if(Character.isWhitespace(character) == true)
				 word.append("_");
			 //task2
			 else if (character == '-') {
	                isCap = true;
	                continue;
	            }
			 else if (isCap) 
				 word.append(Character.toUpperCase(character));
			 else //last statement
	             word.append(character); 
			 
	            isCap = false;
	        
		 }//end of for each

		 return word.toString();
	 } //end of clean

	 

}
