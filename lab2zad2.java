public class Tablica {
    private int[] tablica;

    public Tablica() {
        tablica = new int[10];
        System.out.println("Tablica o rozmiarze 10 została utworzona.");
    }

    public Tablica(int rozmiar) {
        tablica = new int[rozmiar];
        System.out.println("Tablica o rozmiarze " + rozmiar + " została utworzona.");
    }

    public void setElement(int index, int value) {
        if (index >= 0 && index < tablica.length) {
            tablica[index] = value;
        }
    }

    public void display() {
        for (int i : tablica) {
            System.out.print(i + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Tablica tab1 = new Tablica();
        tab1.setElement(0, 10);
        tab1.display();

        Tablica tab2 = new Tablica(5);
        tab2.setElement(2, 20);
        tab2.display();
    }
}
