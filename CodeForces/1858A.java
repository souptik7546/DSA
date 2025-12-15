import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0){
		    int a=sc.nextInt();
		    int b=sc.nextInt();
		    int c=sc.nextInt();
		    if(c%2==1){
		        if(a>=b){
		            System.out.println("first");
		        }
		        else{
		            System.out.println("second");
		        }
		    }
		    if(c%2==0){
		        if(b>=a){
		            System.out.println("second");
		        }
		        else{
		            System.out.println("first");
		        }
		    }
		    t--;
		}
	}
}