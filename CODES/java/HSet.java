package Sets;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;
import java.util.HashSet;

public class Class1 {//HASHSET
	
	public static long start;

    public static void main(String[] args) throws Exception {
    	
    	
    	
    	@SuppressWarnings("unused")
		Scanner scanner = null;
    	HashSet<String> set1 = new HashSet<String>();
    	

    	String SearchItem = "ABDULLAH";
 
      
        try {

            File f = new File("C://Users//Cagatay//Desktop//names.txt");

            @SuppressWarnings("resource")
			BufferedReader b = new BufferedReader(new FileReader(f));

            String line = "";

            System.out.println("Reading file using Buffered Reader");

            while ((line = b.readLine()) != null) {
                set1.add(line);   
            }
            
            System.out.println(set1);
            
        	//for(String s : set1){
    		if (set1.contains(SearchItem))
    			System.out.println("found");
        	//}

        } catch (IOException e) {
            e.printStackTrace();
        }
 

    }
	static {
	  Runtime.getRuntime().addShutdownHook(new Thread() {
	  public void run(){
	    long end = System.currentTimeMillis(); 
	    System.out.println("It took " + (end - start) + " ms. to find the name"); 
	    }});
	}

}
