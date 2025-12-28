import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0){
		    String s=sc.next();
		    int yCount=0;
		    for(int i=0;i<s.length();i++){
		        if(s.charAt(i)=='Y'){
		            yCount++;
		        }
		    }
 
		    if(yCount>1){
		        System.out.println("NO");
		    };
		    if(yCount<=1){
		        System.out.println("YES");
		    }
		    t--;
		} 
		}
}
