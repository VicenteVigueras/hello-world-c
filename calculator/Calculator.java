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
        
        int input = -1;
        int a = -1;
        int b = -1;
        while(input != 0) {
            System.out.println("====================");
            System.out.println("1. Add");
            System.out.println("2. Subtract");
            System.out.println("3. Multiply");
            System.out.println("4. Divide");
            System.out.println("0. Exit");
            System.out.print(">> ");
            input = scan.nextInt();
            if(functions.contains(input)) {
                System.out.print(">> Select A: ");
                a = scan.nextInt();
                System.out.print(">> Select B: ");
                b = scan.nextInt();
                if(input == 1) {
                    System.out.println("The sum is: " + calculator.add(a,b));
                    break;
                }
                if(input == 2) {
                    System.out.println("The difference is: " + calculator.subtract(a,b));
                    break;
                }
                if(input == 3) {
                    System.out.println("The product is: " + calculator.multiply(a,b));
                    break;
                }
                if(input == 4) {
                    System.out.println("The quotient is: " + calculator.divide(a,b));
                    break;
                }
            }
        }
        System.out.println("====================");
        scan.close();
    }
}