import java.util.Scanner;

public class bank {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Username e código: ");
        String username = scanner.nextLine();

        double balance = 10000.75; //saldo inicial

        boolean continuar = true;

        while (continuar) {
            System.out.println("Bem-vindo, " + username);
            System.out.println("Escolhe uma das opções:");
            System.out.println("Prima 1 para ver o saldo");
            System.out.println("Prima 2 para fazer um levantamento");
            System.out.println("Prima 3 para fazer um deposito");
            System.out.println("Opção escolhida: ");

            int escolha = scanner.nextInt();

            if (escolha == 1) {
                System.out.println("O saldo disponivel é: " + balance);

            } else if (escolha == 2) {
                System.out.println("Quanto pretende levantar?: ");
                double withdraw = scanner.nextDouble();
                if (withdraw <= balance) {
                    balance = balance - withdraw;
                    System.out.println("Processado, o saldo atual é: " + balance);
                } else {
                    System.out.println("O seu saldo é inferior ao requerido");

                }
            } else if (escolha == 3) {
                System.out.println("Quanto pretende depositar?: ");
                double deposit = scanner.nextDouble();
                balance = balance + deposit;
                System.out.println("Valor depositado com sucesso! O saldo atual é: " + balance);
            } else {
                System.out.println("Escolhe entre 1 e 3");

            }

            System.out.println("Deseja realizar uma nova operação? (1=sim, 0=não): ");
            int resposta = scanner.nextInt();
            if (resposta == 0) {
                System.out.println("Obrigada por nos escolher " + username);
                continuar = false;
            } else if (resposta == 1) {
                System.out.println("Escolha a nova opção");
            }


        }

    }
}













