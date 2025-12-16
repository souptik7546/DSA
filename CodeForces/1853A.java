
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0){
		    int n=sc.nextInt();
		    int[] arr=new int[n];
		    for(int i=0;i<n;i++){
		        arr[i]=sc.nextInt();
		    }
		    int diff=Integer.MAX_VALUE;
		    for(int i=0;i<n-1;i++){
		        int j=i+1;
		        if((arr[j]-arr[i])<diff){
		            diff=arr[j]-arr[i];
		        }
		    }
		    if(diff<0){
		        System.out.println(0);
		    }
		    if(diff==0){
		        System.out.println(1);
		    }
		    else if(diff>0){
		        if(diff%2==0){
		            System.out.println((diff/2)+1);
		        }
		        else if(diff%2==1){
		            System.out.println((diff+1)/2);
		        }
		    }
		    t--;
		}
	}
}