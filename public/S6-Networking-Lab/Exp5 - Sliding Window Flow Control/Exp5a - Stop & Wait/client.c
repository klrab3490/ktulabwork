#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define SERVER_IP "127.0.0.1"
#define PORT 12345

typedef struct packet {
    int number;
} Packet;

typedef struct frame {
    int frame_kind; // SEQ: 1
    int sq_no;
    int ack;
    Packet packet;
} Frame;

int main() {
    int sockfd;
    struct sockaddr_in serverAddr;
    Packet packet_send;
    Frame frame_recv;
    socklen_t addr_size;

    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

	memset(&serverAddr, 0, sizeof(serverAddr));
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(PORT);
    serverAddr.sin_addr.s_addr =       
     inet_addr(SERVER_IP);

    for (int i = 1; i <= 10; ++i) {
        // Prepare packet
        packet_send.number = i;

        // Prepare frame
        Frame frame_send;
        frame_send.frame_kind = 1; // SEQ
        frame_send.sq_no = i;
        frame_send.ack = 0;
        frame_send.packet = packet_send;

        // Send frame
        sendto(sockfd, &frame_send,  
        sizeof(Frame), 0, (struct sockaddr 
        *)&serverAddr, sizeof(serverAddr));
        printf("[+]Sent number: %d\n", i);

        // Wait for acknowledgment
        recvfrom(sockfd, &frame_recv, 
        sizeof(Frame), 0, NULL, NULL);
        printf("[+]Received acknowledgment for: %d\n", frame_recv.sq_no);
    }

    close(sockfd);
    return 0;
}

