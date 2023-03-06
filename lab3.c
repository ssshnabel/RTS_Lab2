#include <stdio.h>
#include <pthread.h>
#include <sched.h>
#include <sys/neutrino.h>
#include "flow.h"

struct sched_param param1 = {1};
struct sched_param param2 = {9};

int main (void)
{
  printf("Program threads PID %d \n", getpid());
  pthread_mutex_init (&mutex, NULL);

  pthread_setschedparam(thread_id1, SCHED_RR, &param1);
  pthread_setschedparam(thread_id2, SCHED_FIFO, &param2);

  pthread_create(&thread_idl, NULL, long_thread1, NULL);
  pthread_create(&thread_id2, NULL, long_thread2, NULL);

  pthread_join(thread_id1, NULL);
  pthread_join(thread_id2, NULL);

  pthread_mutex_destroy(&mutex);
  printf("Counter is equal: %d \n", counter);

return 0;
}
