
public class main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		LogLevels lg = new LogLevels();
		System.out.println(lg.message("[ERROR]: Invalid operation\n"));
		System.out.println(lg.logLevel("[ERROR]: Invalid operation"));
		System.out.println(lg.reformat("[ERROR]: Invalid operation"));

	}

}
