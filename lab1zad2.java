public class Car {
    private String make;
    private String model;
    private int year;
    private int currentYear;

    public Car(String make, String model, int year, int currentYear) {
        this.make = make;
        this.model = model;
        this.year = year;
        this.currentYear = currentYear;
    }

    public int getCarAge() {
        return currentYear - year;
    }

    public void displayInfo() {
        System.out.println("Make: " + make + ", Model: " + model + ", Year: " + year);
    }

    public static void main(String[] args) {
        Car myCar = new Car("Toyota", "Corolla", 2020, 2024);
        myCar.displayInfo();
        System.out.println("Car age: " + myCar.getCarAge() + " years");
    }
}
