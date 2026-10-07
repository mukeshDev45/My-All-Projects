import java.util.Scanner;

public class fibonacciSeries {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Please enter your numbers of terms :");
        int input = sc.nextInt();
        
        int first = 0;
        int second = 1;
        System.out.print("Fibonacci Series :");

        for(int i=1; i<=input; i++){
            System.out.print(first + " ");

            int next = first + second;
            second = first;
            first = next;
        }

    }
}


