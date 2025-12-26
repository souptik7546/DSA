
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0){
		    int n=sc.nextInt();
		    int[] arr=new int[n];
		    int max=0;
		    int min=0;
		    for(int i=0;i<n;i++){
		        arr[i]=sc.nextInt();
		        if(arr[i]>arr[max]){
		            max=i;
		        }
		        else if(arr[i]<arr[min]){
		            min=i;
		        }
		    }

		    if(arr[min]==arr[max]){
		        System.out.println("NO");
		    }
		    else if(arr[max]!=arr[min]){
		        System.out.println("YES");
		        int temp=0;
		        temp=arr[0];
		        arr[0]=arr[max];
		        arr[max]=temp;
		        temp=0;
		        temp=arr[1];
		        arr[1]=arr[min];
		        arr[min]=temp;
		        for(int i=0;i<n;i++){
		            System.out.print(arr[i]+" ");
		        }
		        System.out.println("");
		    }
		    t--;
		}
	}
}