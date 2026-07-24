/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package visualeffectapp;
import static java.lang.Math.random;
import javafx.animation.KeyFrame;
import javafx.animation.KeyValue;
import javafx.animation.Timeline;
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.StackPane;
import javafx.scene.Group;
import javafx.scene.Node;
import javafx.scene.shape.*;
import javafx.scene.Parent;
import javafx.scene.effect.BlendMode;
import javafx.scene.effect.Bloom;
import javafx.scene.effect.BoxBlur;
import javafx.scene.paint.Color;
import javafx.scene.paint.CycleMethod;
import javafx.scene.paint.LinearGradient;
import javafx.scene.paint.Stop;
import javafx.stage.Stage;
import javafx.util.Duration;
//import javafx.animation.*;
//import javafx.application.*;
//import javafx.css.*;
//import javafx.event.*;
//import javafx.geometry.*;
//import javafx.stage.*;
//import javafx.scene.*;

/**
 *
 * @author TheRorkeGuy
 */
public class Visualeffectapp extends Application {

    /**
     * @param primaryStage
     * @param args the command line arguments
     */
    
    @Override
    public void start(Stage primaryStage) {
        // Create new group
        Group root = new Group();
        // Create new window
        Scene scene1 = new Scene(root, 800, 600, Color.BLACK);
        primaryStage.setTitle("Visual Effect App");
        primaryStage.setScene(scene1);
        
        // Create circles
        Group circles = new Group();
        // Iterate and draw circles on screen
        for (int i = 0; i < 9; i++) {
            Circle circle = new Circle(150, Color.web("White", 0.05));
            circle.setStroke(Color.web("White", 0.16));
            circle.setStrokeType(StrokeType.OUTSIDE);
            circle.setStrokeWidth(8);
            circles.getChildren().add(circle);
        }
        
    
        
        // Add a visual effect/s
        Bloom bloom = new Bloom();
        bloom.setThreshold(4);
        circles.setEffect(new BoxBlur(10, 10, 3));
        circles.setEffect(bloom);

        // Create Background Gradient
     Rectangle colors = new Rectangle(scene1.getWidth(), scene1.getHeight(),
     new LinearGradient(0f, 1f, 1f, 0f, true, CycleMethod.NO_CYCLE, new 
         Stop[]{
            new Stop(0, Color.web("Blue")),
            new Stop(0.14, Color.web("Orange")),
            new Stop(0.28, Color.web("Yellow")),
            new Stop(0.43, Color.web("Brown")),
            new Stop(0.57, Color.web("Red")),
            new Stop(0.71, Color.web("Green")),
            new Stop(0.85, Color.web("#ef504c")),
            new Stop(1, Color.web("#f2660f")),}));
    colors.widthProperty().bind(scene1.widthProperty());
    colors.heightProperty().bind(scene1.heightProperty());
    
    // Apply blend mode to colors and circles
    Group blendModeGroup = 
        new Group(new Group(new Rectangle(scene1.getWidth(), scene1.getHeight(),
            Color.BLACK), circles), colors);
    colors.setBlendMode(BlendMode.OVERLAY);
    root.getChildren().add(blendModeGroup);
    
    // Add animation
    Timeline timeline = new Timeline();
    for (Node circle: circles.getChildren()) {
        timeline.getKeyFrames().addAll(
            new KeyFrame(Duration.ZERO, // set start positiona at 0
                new KeyValue(circle.translateXProperty(), random() * 800),
                new KeyValue(circle.translateYProperty(), random() * 600)
            ),
            new KeyFrame(new Duration(70000), // set end position at 40s
                new KeyValue(circle.translateXProperty(), random() * 800),
                new KeyValue(circle.translateYProperty(), random() * 600)
            )
        );
    }
    // play 40s of animation
    timeline.play();
    
        primaryStage.show();
    }
    
    public static void main(String[] args) {
        launch(args);
    }
    
}
