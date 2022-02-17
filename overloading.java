import java.io.*;


public class overloading{
  
    
    public static void main(String[] args) throws Exception {
         InputStreamReader i=new InputStreamReader(System.in);
         BufferedReader read=new BufferedReader(i);
        gfg h;
      
      System.out.print("enter Input :");
      String input=read.readLine();
      if(input.endsWith("es")){
          h=new sol();
          h.overload();
        h.override();
      }
       else {
        h=new gfg();
        h.overload();
        h.override();

       }
          
    }
    
}
class gfg{
    public  void  overload(){
        System.out.println("overloading method!!");

    }
    public void override(){
        System.out.println("overriding");
    }
}
class sol extends gfg{
    public  void overload(){
        System.out.println("overloading");
    }
    public void override(){
        System.out.println("overridden");
    }
}