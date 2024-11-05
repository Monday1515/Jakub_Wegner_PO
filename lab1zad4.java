import java.util.ArrayList;
import java.util.Random;

public class Parrot {
    private ArrayList<String> phrases;

    public Parrot(String initialPhrase) {
        phrases = new ArrayList<>();
        phrases.add(initialPhrase);
    }

    public void say(int repeatCount) {
        Random rand = new Random();
        String phrase = phrases.get(rand.nextInt(phrases.size()));
        for (int i = 0; i < repeatCount; i++) {
            System.out.println(phrase);
        }
    }

    public void addPhrase(String newPhrase) {
        phrases.add(newPhrase);
    }

    public static void main(String[] args) {
        Parrot myParrot = new Parrot("Hello!");
        myParrot.say(1);
        myParrot.addPhrase("I'm a parrot!");
        myParrot.say(3);
    }
}
