import java.util.*;
public class Main
{
	public static void main(String[] args) {
		String str= new String();
		Scanner sc=new Scanner(System.in);
		str=sc.nextLine();
		int size=str.length();
		int center=size/2;
		for(int i=0;i<size;i++){
		    for(int j=0;j<size-1-i;j++){
		        System.out.print(" ");
		    }
		    for(int j=0;j<=i;j++){
		       int p=center+j;
		        if(p>=size){
		            p=p-size;
		        }
		             System.out.print(str.charAt(p));
		       
		    }
		    System.out.println("\n");
		}
	}
}
