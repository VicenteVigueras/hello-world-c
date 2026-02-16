import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Calculator {

    public int add(int a, int b) {
        return a + b;
    }
    public int subtract(int a, int b) {
        return a - b;
    }

    public int multiply(int a, int b) {
        return a * b;
    }

    public int divide(int a, int b) {
        return a / b;
    }

    public static void main(String[] args) {
        Calculator calculator = new Calculator();
        Scanner scan = new Scanner(System.in);
        Set<Integer> functions = new HashSet<>(Set.of(1,2,3,4));
        
        while(true) {
            System.out.println("====================");
            System.out.println("1. Add");
            System.out.println("2. Subtract");
            System.out.println("3. Multiply");
            System.out.println("4. Divide");
            System.out.println("0. Exit");
            System.out.print(">> ");
            int input = scan.nextInt();

            if(input == 0) break;
            
            if(functions.contains(input)) {
                System.out.print(">> Select A: ");
                int a = scan.nextInt();
                System.out.print(">> Select B: ");
                int b = scan.nextInt();
                if(input == 1) {
                    System.out.println("The sum is: " + calculator.add(a,b));
                }
                if(input == 2) {
                    System.out.println("The difference is: " + calculator.subtract(a,b));
                }
                if(input == 3) {
                    System.out.println("The product is: " + calculator.multiply(a,b));
                }
                if(input == 4) {
                    System.out.println("The quotient is: " + calculator.divide(a,b));
                }
            }
        }
        System.out.println("====================");
        scan.close();
    }
}