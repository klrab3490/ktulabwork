#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NOF_PACKETS 10

// Renamed rand() function to avoid conflicts with standard library
int custom_rand(int a) {
    int rn = (random() % 10) % a;
    return rn == 0 ? 1 : rn;
}

int main() {
    int packet_sz[NOF_PACKETS], i, clk, b_size, o_rate, p_sz_rm = 0, p_sz, p_time, op;

    // Generating and printing packet sizes
    printf("Generated packet sizes:\n");
    for (i = 0; i < NOF_PACKETS; ++i) {
        packet_sz[i] = custom_rand(6) * 10;
        printf("packet[%d]: %d bytes\n", i, packet_sz[i]);
    }

    // Taking input for output rate and bucket size
    printf("\nEnter the Output rate:");
    scanf("%d", &o_rate);
    printf("Enter the Bucket Size:");
    scanf("%d", &b_size);

    // Processing each packet
    for (i = 0; i < NOF_PACKETS; ++i) {
        if ((packet_sz[i] + p_sz_rm) > b_size) {
            if (packet_sz[i] > b_size) {
                // Packet size exceeds bucket capacity
                printf("\n\nIncoming packet size (%d bytes) is greater than bucket capacity (%d bytes) - PACKET REJECTED\n", packet_sz[i], b_size);
            } else {
                // Bucket capacity exceeded
                printf("\n\nBucket capacity exceeded - PACKETS REJECTED!!\n");
            }
        } else {
            // Packet transmission
            p_sz_rm += packet_sz[i];
            printf("\n\nIncoming Packet size: %d\n", packet_sz[i]);
            printf("Bytes remaining to Transmit: %d\n", p_sz_rm);
            p_time = custom_rand(4) * 10;
            printf("Time left for transmission: %d units\n", p_time);
            for (clk = 10; clk <= p_time; clk += 10) {
                sleep(1);
                if (p_sz_rm) {
                    if (p_sz_rm <= o_rate) {
                        op = p_sz_rm;
                        p_sz_rm = 0;
                    } else {
                        op = o_rate;
                        p_sz_rm -= o_rate;
                    }
                    printf("Packet of size %d Transmitted ---- Bytes Remaining to Transmit: %d\n", op, p_sz_rm);
                } else {
                    printf("Time left for transmission: %d units\n", p_time - clk);
                    printf("No packets to transmit!!\n");
                }
            }
        }
    }
    return 0;
}

