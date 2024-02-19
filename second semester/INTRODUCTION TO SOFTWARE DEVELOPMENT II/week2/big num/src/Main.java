import javax.swing.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner key = new Scanner(System.in);
        System.out.println("enter first num:");
        int a = key.nextInt();
        System.out.println("enter second num:");
        int b = key.nextInt();
        System.out.println("enter third num:");
        int c = key.nextInt();
        int big;
        if (a>b){
            if (a>c)
                big = a;
            else
                big = c;
        }else {
            if (b > c)
                big = b;
            else
                big = c;
        }
        JOptionPane.showMessageDialog(null, "biggest num is" + big);
    }
}
