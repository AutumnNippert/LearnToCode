package listDir.src;

import java.io.File;

public class Main {
    public static void main(String[] args){
        File f = new File(".");
        System.out.println(f.getAbsolutePath());
    }
}
