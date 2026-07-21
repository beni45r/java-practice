import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Display menu
        System.out.println("Select operation:");
        System.out.println("1. Sum");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");
        
        System.out.print("Enter choice (1-4): ");
        int choice = scanner.nextInt();

        // Get numbers
        System.out.print("Enter first number: ");
        double num1 = scanner.nextDouble();

        System.out.print("Enter second number: ");
        double num2 = scanner.nextDouble();

        // Calculate based on choice
        if (choice == 1) {
            System.out.println("Result: " + (num1 + num2));
        } else if (choice == 2) {
            System.out.println("Result: " + (num1 - num2));
        } else if (choice == 3) {
            System.out.println("Result: " + (num1 * num2));
        } else if (choice == 4) {
            System.out.println("Result: " + (num1 / num2));
        } else {
            System.out.println("Invalid choice!");
        }

        scanner.close();
    }
}