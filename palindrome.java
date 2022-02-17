import java.io.BufferedReader;
import java.io.InputStreamReader;

public class palindrome{
	public static void main(String [] args){
      InputStreamReader reader=new InputStreamReader(System.in);
      BufferedReader inp=new BufferedReader(reader);
      String str=new String("madam");
      char []tr=str.toCharArray();
     System.out.println((palinDrome(tr,0,tr.length-1)?"yes":"No"));


	}
	static boolean palinDrome(char[] str,int s,int e){

		//int s=0,e=str.length;
		if(s>e)
			return true;
		if(str[0]!=str[e]) return false;

		else return palinDrome(str,s++,e--);

		


	}
}