import javax.swing.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner key = new Scanner(System.in);
        System.out.println("enter your birth year:");
        int birth_year = 2024 - key.nextInt();
        JOptionPane.showMessageDialog(null, "You are: " + birth_year + " years old");
    }
}
