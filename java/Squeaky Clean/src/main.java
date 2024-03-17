
public class main {

	public static void main(String[] args) {

		
		System.out.println(clean("H3ll0#%W0rld"));
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
			 if(Character.isLetter(character) || Character.isDigit(character) || Character.isWhitespace(character) || character == '-') {
				 
			 
			 if(Character.isWhitespace(character) == true)
				 word.append("_");
			 //task2
			 else if (character == '-') {
	                isCap = true;
	                continue;
	            }
			 else if (isCap) 
				 word.append(Character.toUpperCase(character));
			 //task3
			 else if(character =='0')
				 word.append('o');
			 else if(character == '1')
				 word.append('l');
			 else if(character == '3')
				 word.append('e');
			 else if(character == '4')
				 word.append('a');
			 else if(character == '7')
				 word.append('t');
			 else //last statement
	             word.append(character); 
	            isCap = false;
			 }
	        
		 }//end of for each

		 return word.toString();
	 } //end of clean

	 

}
