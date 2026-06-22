import java.util.Scanner;
public class ToTestInt {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a number: ");
        int n=sc.nextInt();
        Arithmetic a=new Arithmetic();
        System.out.println("Square = "+a.square(n));
    }
}