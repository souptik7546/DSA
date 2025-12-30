import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0){
		    int areal=sc.nextInt();
		    int breal=sc.nextInt();
		    int firstCounter=0;
		    int secondCounter=0;
		    int a=areal;
		    int b=breal;
		    for(int i=0;i<100000;i++){
		        if(i%2==0){
		            if((a-((int) Math.pow(2, i)))>=0){
		                firstCounter++;
		            }
		            else if((a-((int) Math.pow(2, i)))<0){
		                break;
		            }
		            a=a-((int) Math.pow(2, i));
		        } 
		        else if(i%2==1){
		            if((b-((int) Math.pow(2, i)))>=0){
		                firstCounter++;
		            }
		            else if((b-((int) Math.pow(2, i)))<0){
		                break;
		            }
		            b=b-((int) Math.pow(2, i));
		        }
		    }
		    
		    
		     a=areal;
		     b=breal;
		    
		    for(int i=0;i<100000;i++){
		        if(i%2==0){
		            if((b-((int) Math.pow(2, i)))>=0){
		                secondCounter++;
		            }
		            else if((b-((int) Math.pow(2, i)))<0){
		                break;
		            }
		            b=b-((int) Math.pow(2, i));
		        } 
		        else if(i%2==1){
		            if((a-((int) Math.pow(2, i)))>=0){
		                secondCounter++;
		            }
		            else if((a-((int) Math.pow(2, i)))<0){
		                break;
		            }
		            a=a-((int) Math.pow(2, i));
		        }
		    }
		    
		    if(secondCounter>firstCounter){
		        System.out.println(secondCounter);
		    }
		    else{
		        System.out.println(firstCounter);
		    }
		    t--;
		}
	}
}