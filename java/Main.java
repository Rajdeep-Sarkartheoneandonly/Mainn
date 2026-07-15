public class Main {

    public static void main(String[] args) {
        int studentID = 12345;
        double score = 95.5;
        char grade = 'A';
        System.out.println("Student ID: " + studentID);
        System.out.println("Score: " + score);
        System.out.println("Grade: " + grade);
        int x = 10;
        String str = x > 4 && x < 8
                ? "x less than 8 and more than 4"
                : x > 8
                        ? "x greater than 8"
                        : "x less than 4";
        System.out.println(str);
        String line = "Hello everyone!";
        System.out.println(line);
        String[] words = line.split(" ");
        System.out.println(words.length);
        for (String word : words) {
            System.out.print(word + " ");
        }
        Second myobj = new Second();
        myobj.x = 50;
        System.out.println(myobj.x + myobj.y);
    }
}
