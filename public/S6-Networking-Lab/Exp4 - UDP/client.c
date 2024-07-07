#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 12345
#define MAX_BUFFER_SIZE 1024

int main() {
    int clientSocket;
    struct sockaddr_in serverAddr;

    // Create a UDP socket
    clientSocket = socket(AF_INET, SOCK_DGRAM, 0);
    if (clientSocket < 0) {
        perror("Error creating client socket");
        exit(EXIT_FAILURE);
    }

    // Initialize server address structure
    memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(PORT);
    inet_pton(AF_INET, "127.0.0.1", &serverAddr.sin_addr);

    // Send a "TimeRequest" message to the server
    char *requestMessage = "TimeRequest";
    ssize_t sentBytes = sendto(clientSocket, requestMessage, strlen(requestMessage), 0, (struct sockaddr *)&serverAddr, sizeof(serverAddr));
    if (sentBytes < 0) {
        perror("Error sending data to server");
        close(clientSocket);
        exit(EXIT_FAILURE);
    }

    // Receive response from the server
    char buffer[MAX_BUFFER_SIZE];
    ssize_t receivedBytes = recvfrom(clientSocket, buffer, sizeof(buffer), 0, NULL, NULL);
    if (receivedBytes < 0) {
        perror("Error receiving data from server");
        close(clientSocket);
        exit(EXIT_FAILURE);
    }

    // Null-terminate the received data to make it a valid C string
    buffer[receivedBytes] = '\0'; 
    printf("Received time from server: %s\n", buffer);

    // Close the client socket
    close(clientSocket);
    return 0;
}
