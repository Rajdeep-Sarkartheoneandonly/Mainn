class Outerclass {
    int x = 50;

    static class Innerclass {
        int y = 84;
    }
}

public class classes2 {
    public static void main(String[] args) {
        Outerclass obj1 = new Outerclass();
        Outerclass.Innerclass obj2 = new Outerclass.Innerclass();
        System.out.println(obj1.x + obj2.y);
    }
}
