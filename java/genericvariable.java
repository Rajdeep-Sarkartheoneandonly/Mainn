import java.util.Scanner;

class Box<T> {
    T value;

    void setval(T value) {
        this.value = value;
    }

    T getval() {
        return value;
    }
}

public class genericvariable {
    public static void main(String[] args) {
        Box<String> stringbox = new Box<>();
        Scanner inpobj = new Scanner(System.in);
        String boxstringinput = inpobj.nextLine();
        stringbox.setval(boxstringinput);
        Box<Integer> intbox = new Box<>();
        int boxintinput = inpobj.nextInt();
        inpobj.nextLine();
        intbox.setval(boxintinput);
        System.out.println(intbox.getval());
        System.out.println(stringbox.getval());
        inpobj.close();
    }
}
