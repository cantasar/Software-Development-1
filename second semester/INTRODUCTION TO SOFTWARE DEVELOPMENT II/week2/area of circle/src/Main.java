import javax.swing.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner key = new Scanner(System.in);
        System.out.println("circle area enter r:");
        int r = key.nextInt();
        int area = 3*r*r;
        JOptionPane.showMessageDialog(null, "Area: " + area);
    }
}