#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
// This works in LINUX Machine
#define N 5  

sem_t chopstick[N];
sem_t room;   

void* philosopher(void* num) {
    int id = *(int*)num;

    while (1) {
        printf("Philosopher %d is thinking\n", id);
        sleep(1);

        printf("Philosopher %d is HUNGRY and waiting to enter the room\n", id);

        sem_wait(&room); 

        sem_wait(&chopstick[id]);
        printf("Philosopher %d picked up left chopstick\n", id);

        sem_wait(&chopstick[(id + 1) % N]);
        printf("Philosopher %d picked up right chopstick\n", id);

        printf("Philosopher %d is EATING\n", id);
        sleep(2);

        sem_post(&chopstick[id]);
        sem_post(&chopstick[(id + 1) % N]);

        printf("Philosopher %d finished eating\n", id);

        sem_post(&room);
    }
}

int main() {
    pthread_t thread_id[N];
    int phil_num[N];

    sem_init(&room, 0, N - 1);

    for (int i = 0; i < N; i++)
        sem_init(&chopstick[i], 0, 1);

    for (int i = 0; i < N; i++) {
        phil_num[i] = i;
        pthread_create(&thread_id[i], NULL, philosopher, &phil_num[i]);
    }
    
    for (int i = 0; i < N; i++)
        pthread_join(thread_id[i], NULL);

    return 0;
}
