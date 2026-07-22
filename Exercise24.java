import java.util.Scanner;

public class Exercise24 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String[] names = new String[5];

        System.out.println("Enter 5 student names:");
        for (int i = 0; i < names.length; i++) {
            names[i] = input.nextLine();
        }

        System.out.println("Student Names:");
        for (int i = 0; i < names.length; i++) {
            System.out.println(names[i]);
        }
    }
}