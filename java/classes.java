class Outerclass {
    int x = 50;
    class Innerclass {
        int y = 84;
    }
}

public class classes {
    public static void main(String[] args) {
        Outerclass obj1 = new Outerclass();
        Outerclass.Innerclass obj2 = obj1.new Innerclass();
        System.out.println(obj1.x + obj2.y);
    }
}
