

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
	    int d=sc.nextInt();
	    int ydiff=d-b;
	    if(ydiff<0){
	        System.out.println(-1);
	    }
	    if(ydiff>=0){
	        a=a+ydiff;
	        int xdiff=c-a;
	        if(xdiff>0){
	            System.out.println(-1);
	        }
	        else{
	           System.out.println((-xdiff)+ydiff); 
	        }
	    }
	    t--;
	}
	}
}