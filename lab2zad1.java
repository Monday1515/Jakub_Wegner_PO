public class Samochod {
    private String marka;
    private String model;
    private int rokProdukcji;

    public Samochod(String marka, String model, int rokProdukcji) {
        this.marka = marka;
        this.model = model;
        this.rokProdukcji = rokProdukcji;
    }

    public Samochod() {
        this.marka = "Nieznana";
        this.model = "Nieznany";
        this.rokProdukcji = 0;
    }

    public void displayInfo() {
        System.out.println("Marka: " + marka + ", Model: " + model + ", Rok produkcji: " + rokProdukcji);
    }

    public static void main(String[] args) {
        Samochod samochod1 = new Samochod("Toyota", "Corolla", 2020);
        samochod1.displayInfo();

        Samochod samochod2 = new Samochod();
        samochod2.displayInfo();
    }
}
