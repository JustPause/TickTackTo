package Java;

import java.util.Scanner;

public class Input {
    
    public static char[] Icon = new char [2];
    public static Scanner sc = new Scanner(System.in);

    public static void GetIcon() {
        System.out.println("Select your icons, only one char:"); 
        System.out.print("p1: ");
        Scanner s = new Scanner(System.in);
        char Icon_temp = s.next().charAt(0);
        Icon[0] = Icon_temp;
        System.out.print("p2: ");
        s = new Scanner(System.in);
        Icon_temp = s.next().charAt(0);
        Icon[1] = Icon_temp;
    }

    public static void GetInput(char Board[][], char Icon) {
        System.out.println("Let Go & Play ");
        int i = sc.nextInt();
    }

}
