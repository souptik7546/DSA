import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int t= sc.nextInt();
		while(t>0){
		   int n=sc.nextInt();
		   int max=0;
		   int tempmax=0;
		   int temp=0;
		   for(int i=0;i<n;i++){
		       temp=sc.nextInt();
		       
		       if(temp==0){
		           tempmax++;
		       }
		       
		       if(temp==1){
		           tempmax=0;
		       }
		       if(tempmax>max){
		               max=tempmax;
		           }
		   }
		   System.out.println(max);
		    t--;
		}
	}
}