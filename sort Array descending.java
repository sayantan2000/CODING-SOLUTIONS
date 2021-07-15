
//to sort Arrays in descending order;
/*
sample input {0,2,4,6}
output 6,4,2,0;
*/
import java.util.Scanner;
import java.util.Arrays;

public class SortArray {
	static Scanner inp=new Scanner(System.in);

	public static void main(String[] args) {
		int arr[]=new int[20];
		int temp;
	    System.out.println("enter the array elements");
		for(int i=0;i<arr.length;i++) {
			arr[i]=inp.nextInt();
		}
		for(int i=0;i<arr.length;i++) {
			for(int j=i+1;j<arr.length;j++) {
				if(arr[i]<arr[j]) {
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		
		
		for(int i=0;i<arr.length;i++) {
			System.out.print(arr[i]+",");
		}
		

	}

}