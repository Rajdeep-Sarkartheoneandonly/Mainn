import java.util.Scanner;
import java.util.ArrayList;

public class arraylists {
    public static void main(String[] args) {
        ArrayList<String> cars = new ArrayList<String>();
        cars.add("Volvo");
        System.out.println(cars);
        Scanner inputObj = new Scanner(System.in);
        String carinput = inputObj.nextLine();
        cars.add(carinput);
        System.out.println(cars);
        inputObj.close();
    }
}
