#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int queue[20], n, head, i, j, k, seek = 0, max, diff, temp, queue1[20], queue2[20], temp1 = 0, temp2 = 0, seek_count, current_track;
    float avg;

    printf("Enter the max range of disk\n");
    scanf("%d", &max);

    printf("Enter the initial head position\n");
    scanf("%d", &head);

    printf("Enter the size of queue request\n");
    scanf("%d", &n);

    printf("Enter the queue of disk positions to be read\n");
    for (i = 1; i <= n; i++) {
        scanf("%d", &temp);
        if (temp >= head) {
            queue2[temp2] = temp;
            temp2++;
        } else {
            queue1[temp1] = temp;
            temp1++;
        }
    }

    // Sort queue1 in descending order
    for (i = 0; i < temp1; i++) {
        for (j = 0; j < temp1 - i - 1; j++) {
            if (queue1[j] < queue1[j + 1]) {
                temp = queue1[j];
                queue1[j] = queue1[j + 1];
                queue1[j + 1] = temp;
            }
        }
    }

    // Sort queue2 in ascending order
    for (i = 0; i < temp2; i++) {
        for (j = 0; j < temp2 - i - 1; j++) {
            if (queue2[j] > queue2[j + 1]) {
                temp = queue2[j];
                queue2[j] = queue2[j + 1];
                queue2[j + 1] = temp;
            }
        }
    }

    // Merge queue1 and queue2 into queue
    for (i = 1, j = 0; j < temp1; i++, j++) {
        queue[i] = queue1[j];
    }
    queue[i] = 0; // End of disk
    i++;
    for (j = 0; j < temp2; i++, j++) {
        queue[i] = queue2[j];
    }

    queue[0] = head; // Starting head position

    // Calculate the total seek time
    for (j = 1; j <= n + 1; j++) {
        current_track = queue[j];
        diff = fabs(head - current_track);
        seek += diff;
        printf("Disk head moves from %d to %d with seek %d\n", head, current_track, diff);
        head = current_track;
    }

    printf("Total seek time is %d\n", seek);

    return 0;
}
