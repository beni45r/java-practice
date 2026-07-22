import java.util.Scanner;

public class BonusExercise {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter student name: ");
        String name = input.nextLine();

        System.out.print("Enter mark: ");
        int mark = input.nextInt();

        String grade;

        if (mark >= 90)
            grade = "A";
        else if (mark >= 80)
            grade = "B";
        else if (mark >= 70)
            grade = "C";
        else
            grade = "F";

        System.out.println("Student: " + name);
        System.out.println("Grade: " + grade);

        if (mark >= 50)
            System.out.println("Result: Pass");
        else
            System.out.println("Result: Fail");

        input.close();
    }
}