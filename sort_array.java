
public class sort_array {
	/*
	 * given a integer array consist of only o,1,2 & then  sort it withoud predefine function
	 * */

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 ,2,2,2,2,2,2,2,2,};
		 sort(arr);
	}
	public static void printarry(int arr[]) {
		for(int i=0;i<arr.length;i++) {
			System.out.print(arr[i]+",");
		}
	}
	public static void sort(int arr[]) {
		int i,cnt0=0,cnt1=0,cnt2=0;
		for( i=0;i<arr.length;i++) {
			switch(arr[i]) {
			case 0:
				cnt0++;
				break;
			case 1:
				cnt1++;
				break;
			case 2:
				cnt2++;
				break;
				
			}
		}
			i=0;
			while(cnt0>0) {
				arr[i++]=0;
				cnt0--;
			}
			while(cnt1>0) {
				arr[i++]=1;
				cnt1--;
			}
			while(cnt2>0) {
				arr[i++]=2;
				cnt2--;
			}
			printarry(arr);
			
			
		}
		
	}


