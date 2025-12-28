import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0){
		    String s=sc.next();
		    char[] arr = s.toCharArray();
		    int n=arr.length;
		    int j=1;
		    int count=0;
		    if(arr[0]=='u'){
		        arr[0]='s';
		        count++;
		    }
		    if(arr[n-1]=='u'){
		        arr[n-1]='s';
		        count++;
		    }
		    while(j<n-1){
		        if(arr[j]=='u'){
		            if(arr[j+1]=='u'){
		                arr[j+1]='s';
		                count++;
		            }
		            j++;
		        }
		        else if(arr[j]=='s'){
		            j++;
		        }
		    }
		    System.out.println(count);
		  
		    t--;
		} 
		}
}