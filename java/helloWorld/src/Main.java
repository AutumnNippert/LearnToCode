package helloWorld.src;
public class Main {
    public static void main(String[] args){
        int a = 5;
        int b = 10;
        int sum = add(a, b);
        System.out.println(sum);
    }

    public static int add(int a, int b){
        int sum = a + b;
        return sum;
    }
}