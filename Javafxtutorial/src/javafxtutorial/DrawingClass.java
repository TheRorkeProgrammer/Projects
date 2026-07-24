/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package javafxtutorial;
import java.util.*;
import javafx.application.Application; 
import javafx.scene.Group; 
import javafx.scene.Scene; 
import javafx.scene.effect.Bloom; 
import javafx.scene.effect.BoxBlur;
import javafx.scene.paint.Color; 
import javafx.scene.shape.Circle;
import javafx.scene.shape.Rectangle; 
import javafx.stage.Stage; 
import javafx.scene.text.Font; 
import javafx.scene.text.FontWeight; 
import javafx.scene.text.Text;
/**
 *
 * @author TheRorkeGuy
 */

public class DrawingClass extends Application{
    
    @Override
    public void start(Stage stage) {
        // Create text object
        Text text = new Text();
        
        // Set font to the text
        text.setFont(Font.font(null, FontWeight.BOLD, 40));
        
        // Set color of the text
        text.setFill(Color.DARKSEAGREEN);
        
        // Instant the Rectangle class
        Rectangle rectangle = new Rectangle();
        
        // Instant the Circle class
        Circle circle = new Circle();
        
        // Set the position of the circle
        circle.setCenterX(0);
        circle.setCenterY(0);
        
        // set circle measurements
        
        // Set the position of the rectangle
        rectangle.setX(50.0f);
        rectangle.setY(80.0f);
        
        // Set width of the rectangle
        rectangle.setWidth(500.0f);
        
        // Set height of the rectangle
        rectangle.setHeight(120.0f);
        
        // Instant the Bloom class
        Bloom bloom = new Bloom();
        
        // Set threshold for bloom
        bloom.setThreshold(0.1);
        
        // Apply bloom effect to text
        text.setEffect(bloom);
        
        // Create Group object
        Group root = new Group(rectangle, text);
        
        // Add blur to rectangle
        rectangle.setEffect(new BoxBlur(20, 20, 5));
        
        // Create Scene Object
        Scene scene = new Scene(root, 600, 600);
        
        // Set title to the Stage
        stage.setTitle("Sample Application");
        
        // Add scene to the stage
        stage.setScene(scene);
        
        // Display contents of the stage
        stage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
}
