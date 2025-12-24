import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t= sc.nextInt();
		while(t>0){
		    int n=sc.nextInt();
		    int[] arr=new int[n];
		    int twos=0;
		    for(int i=0;i<n;i++){
		        arr[i]=sc.nextInt();
		        if(arr[i]==2){
		            twos++;
		        }
		    }
		    int low=1;
		    if(twos%2==1){
		        low=-1;
		    }
		    else if(twos%2==0){
		        int half=0;
		        int pos=0;
		        for(int i=0;i<n;i++){
		            if(arr[i]==2&&half<(twos/2)){
		                half++;
		                pos=i;
		            }
		        }
		        low=pos+1;
		    }
		    System.out.println(low);
		    t--;
		}
	}
}