import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int t= sc.nextInt();
		while(t>0){
		    int n=sc.nextInt();
		    int negative=0;
		    int positive=0;
		    int temp=0;
		    for(int i=0;i<n;i++){
		        temp=sc.nextInt();
		        if(temp== -1){
		            negative++;
		        }
		        else if(temp== 1){
		            positive++;
		        }
		    }
		    int count=0;
		    while(negative>positive||(negative%2)!=0){
		        count++;
		        negative--;
		        positive++;
		    }
		    System.out.println(count);
		    t--;
		}
	}
}