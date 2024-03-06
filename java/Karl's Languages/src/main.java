import java.util.ArrayList;
import java.util.List;

public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		LanguageList languageList = new LanguageList();		
		
		//add languages:
		languageList.addLanguage("java");
		languageList.addLanguage("kotlin");
		languageList.addLanguage("cpp");
		languageList.addLanguage("python");
		
		System.out.println("Languages Karl want to learn: ");
		for (String language : languageList.languages) {
            System.out.println(language);
        }
		
		System.out.println("\nis the list empty?\n"+languageList.isEmpty()); //must return false
		
		languageList.removeLanguage("cpp");
		System.out.println("\nlanguage list after removing cpp: ");
		for (String language : languageList.languages) {
            System.out.println(language);
        }
		
		System.out.println("\nwhat is the first language in the list? ");
		System.out.println(languageList.firstLanguage());
		

		System.out.println("\nhow many languages in the list? ");
		System.out.println(languageList.count());
		
		System.out.println("\nis Karl learning kotlin or java? ");
		System.out.println(languageList.isExciting());

	}

}
