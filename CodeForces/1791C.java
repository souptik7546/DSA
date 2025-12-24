import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int t=sc.nextInt();
	    while(t>0){
	        int n=sc.nextInt();
	        String a=sc.next();
	        int len=0;
	        while(len<(n/2)){
	            if(a.charAt(len)==a.charAt(n-len-1)){
	                break;
	            }
	            len++;
	        }
	        System.out.println(n-(2*len));
	        t--;
	    }
	}
}