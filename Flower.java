package Nandini;

import java.util.Scanner;

public class Flower {
    String name;
    int petals;
    float price;
    Flower(String name,int petals,float price){
        this.name=name;
        this.petals=petals;
        this.price=price;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getPetals() {
        return petals;
    }

    public void setPetals(int petals) {
        this.petals = petals;
    }

    public float getPrice() {
        return price;
    }

    public void setPrice(float price) {
        this.price = price;
    }

    public static void main(String[] args) {
       Flower obj = null;
        Flower arr[]=new Flower[5];
        Scanner s=new Scanner(System.in);
        for(int i=0;i<5;i++) {
            arr[i]=new Flower(s.next(),s.nextInt(),s.nextFloat());
        }
        for (int i=0;i<5;i++) {
            System.out.println(arr[i].getPrice()+" "+arr[i].getPetals()+" "+arr[i].getName());
        }
    }
}