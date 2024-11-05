public class Car {
    private String make;
    private String model;
    private int year;

    public Car(String make, String model, int year) {
        this.make = make;
        this.model = model;
        this.year = year;
    }

    public boolean isSameCar(Car otherCar) {
        return make.equals(otherCar.make) && model.equals(otherCar.model) && year == otherCar.year;
    }

    public void displayInfo() {
        System.out.println("Make: " + make + ", Model: " + model + ", Year: " + year);
    }

    public static void main(String[] args) {
        Car car1 = new Car("Toyota", "Corolla", 2020);
        Car car2 = new Car("Toyota", "Corolla", 2020);

        car1.displayInfo();
        car2.displayInfo();

        if (car1.isSameCar(car2)) {
            System.out.println("Cars are the same.");
        } else {
            System.out.println("Cars are different.");
        }
    }
}
