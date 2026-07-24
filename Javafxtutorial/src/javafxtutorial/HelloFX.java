/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javafxtutorial;
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;
import javafx.animation.*;
import javafx.application.*;
import javafx.css.*;
import javafx.event.*;
import javafx.geometry.*;
import javafx.stage.*;
import javafx.scene.*;
/**
 *
 * @author TheRorkeGuy
 */


public class HelloFX extends Application{
    /**
     * @param primaryStage
     * @param secondaryStage
     * @param args the command line arguments
     */
    
    @Override
    public void start(Stage primaryStage) {
        Label helloWorld = new Label("Hello World");
        Button button = new Button("adf");
        Scene scene1 = new Scene(helloWorld, 400, 400);
        

        primaryStage.setTitle("My first javafx app");
        primaryStage.isMaximized();
        primaryStage.setScene(scene1);
        primaryStage.show();
    }
    
    public static void main(String[] args) {
        launch(args);   
    }
}
