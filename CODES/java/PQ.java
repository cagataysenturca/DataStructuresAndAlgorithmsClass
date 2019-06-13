package Heap;
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.PriorityQueue;
import java.util.Scanner;

public class Class1 {

	public static long start;//TIMER STARTING 
	public static PriorityQueue<String> pQueue = new PriorityQueue<String>();

	public static void main(String[] args) throws FileNotFoundException {
		    String SearchItem = "ABDULLAH";
			@SuppressWarnings("resource")
			Scanner scanner = new Scanner(new BufferedReader(new FileReader("C://Users//Cagatay//Desktop//names.txt")));
			scanner.nextLine();
			while (scanner.hasNext()) {
			String name = scanner.next();
			pQueue.add(name);
			}
			
			System.out.println("Reading file using A Scanner");
			System.out.println(pQueue);//PRINTS ALL QUEUE ELEMENTS
			
			//for(String prq : pQueue){
	    		if (pQueue.contains(SearchItem))
	    			System.out.println("found");
	    		else 
	    			System.out.println("Try Again");
	        	//}

	}
	static {
		  Runtime.getRuntime().addShutdownHook(new Thread() {
		  public void run(){
		    long end = System.currentTimeMillis(); //TIMER ENDING (BOTH PRINTING AND SEARCHING TIME)
		    System.out.println("It took " + (end - start) + " ms. to find the name"); 
		    }});
		}

}
