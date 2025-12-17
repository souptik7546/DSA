import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int t= sc.nextInt();
		while(t>0){
		    int x=sc.nextInt();
		    int k=sc.nextInt();
		    int major=x;
		    int minor=0;
		    while(major%k==0||(minor%k==0 && minor>0)){
		        major--;
		        minor++;
		    }
		    if(major+minor==x && minor>0){
		        System.out.println(2);
		        System.out.print(major+" ");
		        System.out.print(minor+" ");
		        System.out.println("");
		    }
		    if(major+minor==x && minor==0){
		        System.out.println(1);
		        System.out.print(major+" ");
		        System.out.println("");
		    }
		    t--;
		}
	}
}