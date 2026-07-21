import java.util.Scanner;

public class mine {
    public static void main(String[] args) {
        Scanner add = new Scanner(System.in);
        double sum = 0;

        System.out.println("enter 5 numbers:");
        for (int i = 0; i < 5; i++) {
            System.out.print("number " + i + ": ");
            sum += add.nextDouble();
        }

        System.out.println("welcome");
        System.out.println("the total sum is " + sum);
        add.close();
    }
}