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
        System.out.println("The sum is: " + calculator.add(1,2));
        System.out.println("The difference is: " + calculator.subtract(1,2));
        System.out.println("The multiply is: " + calculator.multiply(1,2));
        System.out.println("The divide is: " + calculator.divide(1,2));
    }
}