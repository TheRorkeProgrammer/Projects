/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package tutorial.calculatorapp;
import java.util.Scanner;
import uimenu.UIMenu;
import calculator.Calculator;

class MainCalculator implements Calculator {
    protected double a;
    protected double b;
    protected double sum;
    
    @Override
    public double addition() {
        Scanner input = new Scanner(System.in);
        
        try {  
        
        System.out.println("Enter first number: ");
        a = input.nextInt();
        
        System.out.println("Enter second number: ");
        b = input.nextInt();
        
        sum = a + b;
        System.out.println("Sum: " + sum);
        
        return sum;
        
        } catch (ArithmeticException e) {
            System.out.println("Operation not valid");
            return 1;
        }
    }
    
    @Override
    public double subtraction() {
        Scanner input = new Scanner(System.in);
        try {  
        
        System.out.println("Enter first number: ");
        a = input.nextInt();
        
        System.out.println("Enter second number: ");
        b = input.nextInt();
        
        sum = a - b;
        System.out.println("Sum: " + sum);
        
        return sum;
        
        } catch (ArithmeticException e) {
            System.out.println("Operation failed");
            return 1;
        }
    }
    
    @Override
    public double multiplication() {
        Scanner input = new Scanner(System.in);
        
        try {  
        
        System.out.println("Enter first number: ");
        a = input.nextInt();
        
        System.out.println("Enter second number: ");
        b = input.nextInt();
        
        sum = a * b;
        System.out.println("Sum: " + sum);
        
        return sum;
        
        } catch (ArithmeticException e) {
            System.out.println("Operation failed");
            return 1;
        }
    }
    
    @Override
    public double division() {
        Scanner input = new Scanner(System.in);
        
        try {  
        
        System.out.println("Enter first number: ");
        a = input.nextInt();
        
        System.out.println("Enter second number: ");
        b = input.nextInt();
        
        sum = a / b;
        System.out.println("Sum: " + sum);
        
        return sum;
        
        } catch (ArithmeticException e) {
            System.out.println("Operation failed");
            return 1;
        }
    }
}

//class MainCalculator implements Calculator {
//    private double a;
//    private double b;
//    
//    // Helper methos to get input
//    public void getNumbers(Scanner input) {
//        System.out.println("Enter first number: ");
//        a = input.nextDouble();
//        
//        System.out.println("Enter second number: ");
//        b = input.nextDouble();
//    }
//    
//    // Addition
//    @Override
//    public double addition() {
//        return a + b;
//    }
//    
//    // Subtraction
//    @Override
//    public double subtraction() {
//        return a - b;
//    }
//    
//    // Multiplication
//    @Override
//    public double multiplication() {
//        return a * b;
//    }
//    
//    // Division
//    @Override
//    public double division() {
//        if (b == 0) {
//            throw new ArithmeticException("Division by zero");
//        }
//        
//        return a / b;
//    }
//}

public class Calculatorapp {
    public static void main(String[] args) {
        UIMenu ui = new UIMenu();
        MainCalculator calc = new MainCalculator();
        Scanner input = new Scanner(System.in);
        
        while (true) {
            try { 
            ui.displayMenu();
            System.out.println("Enter your choice: ");
            int choice = input.nextInt();
            
//            double result = 0;
//            boolean validOperation = true;
            
                switch (choice) {
                case 1 -> {
                    calc.addition();
//                    calc.getNumbers(input);
//                    result = calc.addition();
//                    System.out.println("Result: " + result);
                    break;
                }
                
                case 2 -> {
                    calc.subtraction();
//                    calc.getNumbers(input);
//                    result = calc.subtraction();
//                    System.out.println("Result: " + result);
                    break;
                }
                
                case 3 -> {
                    calc.multiplication();
//                    calc.getNumbers(input);
//                    result = calc.multiplication();
//                    System.out.println("Result: " + result);
                    break;
                }
                
                case 4 -> {
                    calc.division();
//                    calc.getNumbers(input);
//                    result = calc.division();
//                    System.out.println("Result: " + result);
                    break;
                }
                
                case 0 -> {
                    System.out.println("Exiting calculator");
                    input.close();
                    System.exit(0);
                }
                
                default -> {
                    System.out.println("Invalid choice! Please Try Again!");
//                    validOperation = false;
                    break;
                }
            }
        } catch (Exception e) {
            System.out.println("Please enter valid numbers");
            input.nextLine();
        }
        }
    }
}