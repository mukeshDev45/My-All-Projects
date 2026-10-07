
import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Please enter your number :");
        int input = sc.nextInt();
        int fact = 1;
        // factorial of the given numbers
        for(int i=1; i<=input; i++){
            fact *= i;
        }
        System.out.println("Factorial of " + input + " is : " + fact);

    }
}
