#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> senhasGeradas;
    queue<int> senhasAtendidas;
    int contadorSenhas = 0;
    int opcao = -1;

    while (true) {
        cout << "\nSistema de Atendimento\n";
        cout << "0. Sair\n";
        cout << "1. Gerar senha\n";
        cout << "2. Realizar atendimento\n";
        cout << "Senhas aguardando atendimento: " << senhasGeradas.size() << "\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 0) {
            if (senhasGeradas.empty()) {
                cout << "Quantidade de senhas atendidas: " << senhasAtendidas.size() << "\n";
                cout << "Encerrando o sistema.\n";
                break;
            } else {
                cout << "Ainda existem senhas aguardando atendimento. Por favor, atenda todas antes de sair.\n";
            }
        } else if (opcao == 1) {
            contadorSenhas++;
            senhasGeradas.push(contadorSenhas);
            cout << "Senha gerada: " << contadorSenhas << "\n";
        } else if (opcao == 2) {
            if (!senhasGeradas.empty()) {
                int senhaAtendida = senhasGeradas.front();
                senhasGeradas.pop();
                senhasAtendidas.push(senhaAtendida);
                cout << "Atendendo senha: " << senhaAtendida << "\n";
            } else {
                cout << "Nao ha senhas para atender.\n";
            }
        } else {
            cout << "Opcao invalida. Tente novamente.\n";
        }
    }

    return 0;
}
