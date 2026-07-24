/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
import java.util.Scanner;
/**
 *
 * @author TheRorkeGuy
 */
public class Main {
    public static void main(String[] args) {
        int number;
        
        while (true) {
            try {
            Scanner input = new Scanner(System.in);
            
            switch (number = input.nextInt()) {
                case 1 -> {
                    System.out.println("hello sindiswa");
                    break;
                }
                
                case 2 -> {
                    System.out.println("hello me");
                    break;
                }
                
                case 0 -> {
                    System.exit(number);
                    break;
                }
            }
            } catch (Exception e) {
                System.out.println("Error");
            }
        }
    }
}