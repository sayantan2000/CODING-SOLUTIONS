import java.util.Arrays;

public class Anagram_String {

	public static void main(String[] args) {
		System.out.println(isAnaGram("rat", "art"));
		System.out.println(isAnaGram("listen", "silent"));
		System.out.println(isAnaGram("r    at", "ar    t"));
		System.out.println(isAnaGram("l   is  ten", "sil   en    t"));
		System.out.println(isAnaGram("pant", "tank"));
		System.out.println(isAnaGram("cat","act"));
		

	}
	public static boolean isAnaGram(String s,String a) {
		
	String str1=s.replaceAll("\\s", "");
	String str2=a.replaceAll("\\s", "");
	if(str1.length()!=str2.length()) 
		return false;
	
	else {
		char s1[]=str1.toLowerCase().toCharArray();
		char s2[]=str2.toLowerCase().toCharArray();
		Arrays.sort(s1);
		Arrays.sort(s2);
		 return Arrays.equals(s1, s2);
	}
	

}
}
