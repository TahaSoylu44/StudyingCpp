public class Main{
    public static void main(String[] args) {
        Integer x = new Integer(5);

        changeVar(x);

        System.out.println(x);

    }
    public static int changeVar(int x){
        x = 100;
        return x;
    }
}