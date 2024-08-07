#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <time.h>

int main() {
    char ip[] = "127.0.0.1";
    int port = 5566;
    int server_sock, client_sock;
    struct sockaddr_in server_addr, client_addr;
    socklen_t addr_size;
    char buffer[1024];

    server_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (server_sock < 0) {
        perror("[-] Socket Error");
        exit(1);
    }
    printf("[+]TCP server socket created.\n");

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port);
    server_addr.sin_addr.s_addr = inet_addr(ip);

    int n = bind(server_sock, (struct sockaddr *)&server_addr, sizeof(server_addr));
    if (n < 0) {
        perror("[-] Bind Error");
        exit(1);
    }
    printf("[+]Bind to the port number: %d\n", port);
    listen(server_sock, 5);
    printf("Listening for Connections...\n");
    addr_size = sizeof(client_addr);
    client_sock = accept(server_sock, (struct sockaddr *)&client_addr, &addr_size);
    printf("[+]Client connected.\n");
    while (1){
        time_t currentTime;
        time(&currentTime);
        char *timeString = ctime(&currentTime);
        bzero(buffer, 1024);
        recv(client_sock, buffer, sizeof(buffer), 0);
        printf("Client: %s\n", buffer);
        if (strncmp(buffer, "exit\n", 4) == 0) {
            break;
        } else if (strncmp(buffer, "time\n", 4) == 0) {
            strcpy(buffer, timeString);
        } else {
            strcpy(buffer, "Invalid Command");
        }
        send(client_sock, buffer, strlen(buffer), 0);
        printf("Server: %s\n", buffer);
    }
    close(client_sock);
    printf("[+]Client disconnected.\n\n");
    return 0;
}
