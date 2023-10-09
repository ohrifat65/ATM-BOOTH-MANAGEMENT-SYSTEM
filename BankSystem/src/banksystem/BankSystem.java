package banksystem;

import java.util.Scanner;

public class BankSystem {

    static Scanner sc = new Scanner(System.in);

    static String accountNumbers;
    static String accountHolders;
    static double accountBalances = 0;

    void createAccount() {
        System.out.println("Enter Account Number  : ");
        accountNumbers = sc.next();
        System.out.println("Account Holder Number : ");
        accountHolders = sc.next();
        System.out.println("Initial Deposit ammount        : ");
        accountBalances = accountBalances + sc.nextDouble();
    }

    void deposit() {
        System.out.print("Enter amount : ");
        double amount = sc.nextInt();
        accountBalances = accountBalances + amount;
        System.out.println("Deposit Successfull...\n");
    }

    void withdraw() {
        System.out.print("Enter amount : ");
        double amount = sc.nextInt();
        accountBalances -= amount;
        System.out.println("Withdraw Successfull...\n");
    }

    void checkBalance() {
        System.out.println("-------------------------------------------------------------------------------");
        System.out.println("        Account Number : " + accountNumbers);
        System.out.println("        Account Holder : " + accountHolders);
        System.out.println("        Balance Taka   : $" + accountBalances + "BDT");
        System.out.println("-------------------------------------------------------------------------------");
    }

    public static void main(String[] args) {
        System.out.println("-------------------------------------------------------------------------------");

        System.out.println("*************************** Welcome to our banking ****************************");
        System.out.println("*******************************************************************************");
        while (true) {
            System.out.println("\n**** CREATE ACCOUNT **** DEPOSIT **** WITHDRAW **** CHECK BALANCE **** EXIT ***");
            System.out.println("*******   1   *************  2   *******  3   *********  4   *******   5   ****");
            System.out.println("-------------------------------------------------------------------------------");
            System.out.println("\nChoose an option : ");
            int choose = sc.nextInt();
            BankSystem ob = new BankSystem();
            switch (choose) {
                case 1:
                    ob.createAccount();
                    break;
                case 2:
                    ob.deposit();
                    break;
                case 3:
                    ob.withdraw();
                    break;
                case 4:
                    ob.checkBalance();
                    break;
                case 5:
                    System.out.println("Exiting...\n");
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.\n");
            }
        }
    }

}
