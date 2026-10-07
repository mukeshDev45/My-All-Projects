

// Develop a program that prints the multiplication table for a given number.


import java.util.Scanner;

public class multiplicationTable {



    public static void printMultiplicationTable(int num) {
        int i=1;
        while (i <= 10) {
            System.out.println(num + " * " + i + " = " + (num * i) );
            i++;
        }
    }


    public static void main(String[] args) {
        Scanner source = new Scanner(System.in);
        System.out.print("Please enter your number:");
        int num = source.nextInt();
        printMultiplicationTable(num);
        source.close();
    }
    
}