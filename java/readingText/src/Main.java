package readingText.src;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        try{
            FileWriter fw = new FileWriter("fileToWriteTo.txt");
            FileReader fr = new FileReader("test.txt");
            Scanner scn = new Scanner(fr);
            while(scn.hasNext()) {
                String word = scn.next();
                System.out.println(word);
                fw.append(word + "\n");
            }
            fw.close();
            scn.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
}
