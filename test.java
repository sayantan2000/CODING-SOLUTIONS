import java.util.ArrayList;
import java.util.List;

/*
code to get the all divisors of a number & return the sum of all divisors
we can use the below code to get the sum of all divisors of a number/*
*
we are accepting the number from the user & then we are storing the divisors in an arraylist
using for loop we are iterating through the arraylist and adding the divisors to the sum variable
*/ 
class test{
    public static void main(String[] args) { //main method

        /**
         * div method returns a arraylist of all divisors of a number
         * the method prints accepted the list as parameter
         * prints the sum of all divisors from the list
         */
        print(div(84));
    }

    public static ArrayList<Integer> div(int num) { // num = 84
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                list.add(i);
            }
        }
        return list;
    }
    public static void print(ArrayList<Integer> list) { // list = [1, 2, 3, 4, 6, 12, 24, 48, 84]
        int sum=0;
        for (int i = 0; i < list.size(); i++) {
            sum+=list.get(i);
           // System.out.println(list.get(i));
            
        }
        System.out.println("sum="+sum);
       // System.out.println(sum);
    }

     
      
}