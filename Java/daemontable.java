import java.util.Scanner;

// JavaDaemonTest.java

public class JavaDaemonTable {


    public static void main(String args[]) throws InterruptedException 
    {
        Runnable daemonRunner = new Runnable() {

            public void run()  
            { 
                	Scanner scanner = new Scanner(System.in);
                	System.out.println("Enter a number to print its multiplication table:   ");
                	int num = scanner.nextInt();
                	int i=1;
                	while(i<=10)
                	{
                		 System.out.println(num + " * "+ i+ " = "+ num*i);
                		 i++;
                	}
            }

        };

        // Create and start daemon thread

        Thread daemonThread = new Thread(daemonRunner);
        daemonThread.setPriority(Thread.MIN_PRIORITY);
        daemonThread.setDaemon(true);
        daemonThread.start();
        while(daemonThread.isAlive())
				{
        	 
				}
 
        System.out.println("Done.");

    }

}