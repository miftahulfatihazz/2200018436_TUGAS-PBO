import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Deklarasi variabel
        int angka = 5;

        // Penggunaan tipe data
        double bilangan = 3.14;

        // Perulangan for
        for (int i = 0; i < angka; i++) {
            System.out.println("Perulangan ke-" + (i + 1));
        }

        // Percabangan if
        if (angka > 3) {
            System.out.println("Angka lebih dari 3");
        }

        // Perulangan while
        int j = 0;
        while (j < angka) {
            System.out.println("Perulangan while ke-" + (j + 1));
            j++;
        }

        // Perulangan do-while
        int k = 0;
        do {
            System.out.println("Perulangan do-while ke-" + (k + 1));
            k++;
        } while (k < angka);

        // Array satu dimensi
        int[] arr = {1, 2, 3, 4, 5};

        // Array multidimensi
        int[][] matriks = {{1, 2}, {3, 4}};

        // Input
        Scanner input = new Scanner(System.in);
        System.out.print("Masukkan sebuah angka: ");
        angka = input.nextInt();

        // Output
        System.out.println("Angka yang dimasukkan: " + angka);

        // Komentar
        // Ini adalah komentar dalam Java
    }
}
