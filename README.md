
![image](https://github.com/user-attachments/assets/e7fa9893-27af-46ad-a430-f82523f46eb7)


🍝 𝙋𝙝𝙞𝙡𝙤𝙨𝙤𝙥𝙝𝙚𝙧𝙨


🔹 𝙊𝙗𝙟𝙚𝙘𝙩𝙞𝙫𝙚𝙨:

* 𝙇𝙚𝙖𝙧𝙣 𝙩𝙝𝙚 𝙗𝙖𝙨𝙞𝙘𝙨 𝙤𝙛 𝙩𝙝𝙧𝙚𝙖𝙙𝙞𝙣𝙜 𝙖 𝙥𝙧𝙤𝙘𝙚𝙨𝙨
* 𝐋𝐞𝐚𝐫𝐧 𝐚𝐛𝐨𝐮𝐭 𝐜𝐫𝐞𝐚𝐭𝐢𝐧𝐠 𝐭𝐡𝐫𝐞𝐚𝐝𝐬 𝐚𝐧𝐝 𝐦𝐮𝐭𝐞𝐱𝐞𝐬


𝘾𝙤𝙣𝙩𝙚𝙣𝙩𝙨:

* Introduction

* The rules

* The Mandatory part

* External functions to learn

* Pseudo code

* Evaluation Checklist
 
* References


🔷 𝙄𝙣𝙩𝙧𝙤𝙙𝙪𝙘𝙩𝙞𝙤𝙣:


𝑪𝒓𝒆𝒂𝒕𝒆 𝒂 𝒔𝒊𝒎𝒖𝒍𝒂𝒕𝒊𝒐𝒏 𝒐𝒇 𝒑𝒉𝒊𝒍𝒐𝒔𝒑𝒉𝒆𝒓𝒔 𝒅𝒊𝒏𝒊𝒏𝒈:

One or more philosophers sit at a round table.

There is a large bowl of spaghetti in the middle of the table.

The philosophers alternatively eat, think, or sleep.

𝑾𝒉𝒊𝒍𝒆 𝒕𝒉𝒆𝒚 𝒂𝒓𝒆 𝒆𝒂𝒕𝒊𝒏𝒈, 𝒕𝒉𝒆𝒚 𝒂𝒓𝒆 𝒏𝒐𝒕 𝒕𝒉𝒊𝒏𝒌𝒊𝒏𝒈 𝒏𝒐𝒓 𝒔𝒍𝒆𝒆𝒑𝒊𝒏𝒈;

while thinking, they are not eating nor sleeping;

and, of course, while sleeping, they are not eating nor thinking.

There are also forks on the table. There are as many forks as philosophers.

Because serving and eating spaghetti with only one fork is very inconvenient, a philosopher takes their right and their left forks to eat, one in each hand.

When a philosopher has finished eating,

they put their forks back on the table and start sleeping.

Once awake, they start thinking again.

The simulation stops when a philosopher dies of starvation.

Every philosopher needs to eat and should never starve.

Philosophers don’t speak with each other.

Philosophers don’t know if another philosopher is about to die.

No need to say that philosophers should avoid dying!

🔷 𝙏𝙝𝙚 𝙍𝙪𝙡𝙚𝙨:

1️⃣ 𝐍𝐨 𝐠𝐥𝐨𝐛𝐚𝐥 𝐯𝐚𝐫𝐢𝐚𝐛𝐥𝐞𝐬

2️⃣ 𝐘𝐨𝐮𝐫(𝐬) 𝐩𝐫𝐨𝐠𝐫𝐚𝐦(𝐬) 𝐬𝐡𝐨𝐮𝐥𝐝 𝐭𝐚𝐤𝐞 𝐭𝐡𝐞 𝐟𝐨𝐥𝐥𝐨𝐰𝐢𝐧𝐠 𝐚𝐫𝐠𝐮𝐦𝐞𝐧𝐭𝐬:

1. 🔸 𝒏𝒖𝒎𝒃𝒆𝒓_𝒐𝒇_𝒑𝒉𝒊𝒍𝒐𝒔𝒐𝒑𝒉𝒆𝒓𝒔:

The number of philosophers and also

the number of forks.

2. 🔸 𝒕𝒊𝒎𝒆_𝒕𝒐_𝒅𝒊𝒆 (𝒊𝒏 𝒎𝒊𝒍𝒍𝒊𝒔𝒆𝒄𝒐𝒏𝒅𝒔):

If a philosopher didn’t start eating time_to_die milliseconds since the beginning of their last meal or the beginning of the simulation, they die.

3. 🔸 𝒕𝒊𝒎𝒆_𝒕𝒐_𝒆𝒂𝒕 (𝒊𝒏 𝒎𝒊𝒍𝒍𝒊𝒔𝒆𝒄𝒐𝒏𝒅𝒔):

The time it takes for a philosopher to eat.

During that time, they will need to hold two forks.

4. 🔸 𝒕𝒊𝒎𝒆_𝒕𝒐_𝒔𝒍𝒆𝒆𝒑 (𝒊𝒏 𝒎𝒊𝒍𝒍𝒊𝒔𝒆𝒄𝒐𝒏𝒅𝒔):

The time a philosopher will spend sleeping.

5. 🔸 𝒏𝒖𝒎𝒃𝒆𝒓_𝒐𝒇_𝒕𝒊𝒎𝒆𝒔_𝒆𝒂𝒄𝒉_𝒑𝒉𝒊𝒍𝒐𝒔𝒐𝒑𝒉𝒆𝒓_𝒎𝒖𝒔𝒕_𝒆𝒂𝒕 (𝒐𝒑𝒕𝒊𝒐𝒏𝒂𝒍 𝒂𝒓𝒈𝒖𝒎𝒆𝒏𝒕):

If all philosophers have eaten at least number_of_times_each_philosopher_must_eat times, the simulation stops.

If not specified, the simulation stops when a philosopher dies.

3️⃣ 𝙀𝙖𝙘𝙝 𝙥𝙝𝙞𝙡𝙤𝙨𝙤𝙥𝙝𝙚𝙧 𝙝𝙖𝙨 𝙖 𝙣𝙪𝙢𝙗𝙚𝙧 𝙧𝙖𝙣𝙜𝙞𝙣𝙜 𝙛𝙧𝙤𝙢 1 𝙩𝙤 𝙣𝙪𝙢𝙗𝙚𝙧_𝙤𝙛_𝙥𝙝𝙞𝙡𝙤𝙨𝙤𝙥𝙝𝙚𝙧𝙨.

4️⃣ 𝙋𝙝𝙞𝙡𝙤𝙨𝙤𝙥𝙝𝙚𝙧 𝙣𝙪𝙢𝙗𝙚𝙧 1 𝙨𝙞𝙩𝙨 𝙣𝙚𝙭𝙩 𝙩𝙤 𝙥𝙝𝙞𝙡𝙤𝙨𝙤𝙥𝙝𝙚𝙧 𝙣𝙪𝙢𝙗𝙚𝙧 𝙣𝙪𝙢𝙗𝙚𝙧_𝙤𝙛_𝙥𝙝𝙞𝙡𝙤𝙨𝙤𝙥𝙝𝙚𝙧𝙨.

Any other philosopher number N sits between philosopher number N - 1 and philosopher number N + 1.

5️⃣ 𝘼𝙗𝙤𝙪𝙩 𝙩𝙝𝙚 𝙡𝙤𝙜𝙨 𝙤𝙛 𝙮𝙤𝙪𝙧 𝙥𝙧𝙤𝙜𝙧𝙖𝙢:

🔸 𝑨𝒏𝒚 𝒔𝒕𝒂𝒕𝒆 𝒄𝒉𝒂𝒏𝒈𝒆 𝒐𝒇 𝒂 𝒑𝒉𝒊𝒍𝒐𝒔𝒐𝒑𝒉𝒆𝒓 𝒎𝒖𝒔𝒕 𝒃𝒆 𝒇𝒐𝒓𝒎𝒂𝒕𝒕𝒆𝒅 𝒂𝒔 𝒇𝒐𝒍𝒍𝒐𝒘𝒔: 

timestamp_in_ms X has taken a fork

timestamp_in_ms X is eating

timestamp_in_ms X is sleeping

timestamp_in_ms X is thinking

timestamp_in_ms X died

🔸 Replace timestamp_in_ms with the current timestamp in milliseconds and X with the philosopher number.

🔸 A displayed state message should not be mixed up with another message.

🔸 A message announcing a philosopher died should be displayed no more than 10 ms after the actual death of the philosopher.

🔸 Again, philosophers should avoid dying!

🔸 Your program must not have any data races.

 𝑾𝒉𝒂𝒕 𝒂𝒓𝒆 𝒅𝒂𝒕𝒂 𝒓𝒂𝒄𝒆𝒔?

A data race occurs in concurrent programming when two or more threads (or processes) access shared data simultaneously, 
and at least one of the accesses is a write. 
This can lead to unpredictable behavior, as the outcome of operations depends on the relative timing of the threads, which is usually non-deterministic.

𝙆𝙚𝙮 𝙋𝙤𝙞𝙣𝙩𝙨 𝙖𝙗𝙤𝙪𝙩 𝘿𝙖𝙩𝙖 𝙍𝙖𝙘𝙚𝙨:

𝑪𝒐𝒏𝒄𝒖𝒓𝒓𝒆𝒏𝒕 𝑨𝒄𝒄𝒆𝒔𝒔: Multiple threads access the same memory location at the same time.

𝑨𝒕 𝑳𝒆𝒂𝒔𝒕 𝑶𝒏𝒆 𝑾𝒓𝒊𝒕𝒆: One or more of these accesses is writing to the memory location.

𝑳𝒂𝒄𝒌 𝒐𝒇 𝑺𝒚𝒏𝒄𝒉𝒓𝒐𝒏𝒊𝒛𝒂𝒕𝒊𝒐𝒏: The access to the shared data is not properly synchronized 

(e.g., through locks, mutexes, or atomic operations), leading to potential conflicts.

🔷 𝙈𝙖𝙣𝙙𝙖𝙩𝙤𝙧𝙮 𝙧𝙪𝙡𝙚𝙨:

1️⃣ 𝙀𝙖𝙘𝙝 𝙥𝙝𝙞𝙡𝙤𝙨𝙤𝙥𝙝𝙚𝙧 𝙨𝙝𝙤𝙪𝙡𝙙 𝙗𝙚 𝙖 𝙩𝙝𝙧𝙚𝙖𝙙.

𝙒𝙝𝙖𝙩 𝙞𝙨 𝙖 𝙩𝙝𝙧𝙚𝙖𝙙?

Threads are the smallest units of execution within a process in a computer program. 

They allow a program to perform multiple tasks concurrently by splitting its execution into separate,

independent sequences of instructions.

𝑷𝒓𝒐𝒄𝒆𝒔𝒔 𝒗𝒔. 𝑻𝒉𝒓𝒆𝒂𝒅:

𝘼 𝙥𝙧𝙤𝙘𝙚𝙨𝙨 𝙞𝙨 𝙖𝙣 𝙞𝙣𝙙𝙚𝙥𝙚𝙣𝙙𝙚𝙣𝙩 𝙥𝙧𝙤𝙜𝙧𝙖𝙢 𝙩𝙝𝙖𝙩 𝙧𝙪𝙣𝙨 𝙞𝙣 𝙞𝙩𝙨 𝙤𝙬𝙣 𝙢𝙚𝙢𝙤𝙧𝙮 𝙨𝙥𝙖𝙘𝙚.

𝘼 𝙩𝙝𝙧𝙚𝙖𝙙 𝙞𝙨 𝙖 𝙨𝙢𝙖𝙡𝙡𝙚𝙧 𝙪𝙣𝙞𝙩 𝙬𝙞𝙩𝙝𝙞𝙣 𝙖 𝙥𝙧𝙤𝙘𝙚𝙨𝙨 𝙩𝙝𝙖𝙩 𝙨𝙝𝙖𝙧𝙚𝙨 𝙩𝙝𝙚 𝙨𝙖𝙢𝙚 𝙢𝙚𝙢𝙤𝙧𝙮 𝙨𝙥𝙖𝙘𝙚 𝙗𝙪𝙩 𝙘𝙖𝙣 𝙧𝙪𝙣 𝙞𝙣𝙙𝙚𝙥𝙚𝙣𝙙𝙚𝙣𝙩𝙡𝙮.

𝐇𝐨𝐰 𝐭𝐨 𝐜𝐫𝐞𝐚𝐭𝐞 𝐚 𝐭𝐡𝐫𝐞𝐚𝐝?

We use the <pthread.h> library.

🔸Call pthread_create() to create a thread.

🔸Give pthread_create() a function to run.

the function will run in it's own thread.

🔸Call pthread_join() to join the newly created thread back to the main thread.

pthread_join() by the time it runs, will pause and wait until the created thread finishes execution if it hasn't already



2️⃣ 𝙏𝙝𝙚𝙧𝙚 𝙞𝙨 𝙤𝙣𝙚 𝙛𝙤𝙧𝙠 𝙗𝙚𝙩𝙬𝙚𝙚𝙣 𝙚𝙖𝙘𝙝 𝙥𝙖𝙞𝙧 𝙤𝙛 𝙥𝙝𝙞𝙡𝙤𝙨𝙤𝙥𝙝𝙚𝙧𝙨.

Therefore, if there are several philosophers, each philosopher has a fork on their left side and a fork on their right side.

If there is only one philosopher, there should be only one fork on the table.

3️⃣ 𝙏𝙤 𝙥𝙧𝙚𝙫𝙚𝙣𝙩 𝙥𝙝𝙞𝙡𝙤𝙨𝙤𝙥𝙝𝙚𝙧𝙨 𝙛𝙧𝙤𝙢 𝙙𝙪𝙥𝙡𝙞𝙘𝙖𝙩𝙞𝙣𝙜 𝙛𝙤𝙧𝙠𝙨, 𝙮𝙤𝙪 𝙨𝙝𝙤𝙪𝙡𝙙 𝙥𝙧𝙤𝙩𝙚𝙘𝙩 𝙩𝙝𝙚 𝙛𝙤𝙧𝙠𝙨 𝙨𝙩𝙖𝙩𝙚 𝙬𝙞𝙩𝙝 𝙖 𝙢𝙪𝙩𝙚𝙭 𝙛𝙤𝙧 𝙚𝙖𝙘𝙝 𝙤𝙛 𝙩𝙝𝙚𝙢.


𝙒𝙝𝙖𝙩 𝙖𝙧𝙚 𝙢𝙪𝙩𝙚𝙭𝙚𝙨?

Short for mutual exclusion, a mutex is a synchronization mechanism to control access to shared resources, allowing only one thread or process at a time to execute a critical section of code.

We can allow one thread to access a section of code (e.g. a thread function) at a time, by locking it. This way, only one thread can execute said code at any given time.

We create a lock before the citical code

And release the lock after the critical code is done executing.

What happens then, is when the first thread reaches the lock in the code, that thread aquires the lock.

Any subsequent threads when reaching this lock, will pause, and wait until the lock has been released, in order to aquire it.

Basically, how a mutex works is, a thread will aquire a lock, run the execution of the code, then release the lock when done.

𝙀𝙭𝙖𝙢𝙥𝙡𝙚 𝙤𝙛 𝙪𝙨𝙞𝙣𝙜 𝙖 𝙢𝙪𝙩𝙚𝙭:

In main() We make a mutex variable;

In main() Initialize the mutex;

In main() Destroy the mutex when done;

In thread function() Use the mutex to create the lock;

In thread function() Release the lock when done executing;


```c
pthread_mutex_t mutex; //Variable 'mutex'

//Initialize 'mutex' taking in a pointer to our mutex variable, and NULL (default configuration values)
pthread_mutex_init(&mutex, NULL);

pthread_mutex_destroy(&mutex); //When we're done with it, destroy it

//Inside a function or block of code, create a lock
pthread_mutex_lock(&mutex);

//After the code execution, still inside the function or code block, release the lock
pthread_mutex_unlock(&mutex);
```


- What happens is, the function is running at the same time in multiple threads:
	- One thread will reach the lock statement first, aquire the lock, run the code, then unlock.
	- Meanwhile, another thread will reach the lock statement, but it will pause, and wait for the lock to be released.
	- Once the next thread aquires the lock, it'll execute the code, with the updated variables/data. 


# 🔷 External functions to learn:

1. 🔸 **usleep:** _Suspend the execution of a program to introduce a delay for a specified number of microseconds._
2. 🔸 **gettimeofday:** _Obtain the current time._
3. 🔸 **pthread_create:** _Create a new thread within a program._
4. 🔸 **pthread_detach:**_ Detach the newly created thread to allow it to run independently._
5. 🔸 **pthread_join:** _Wait for the thread with ID thread_id to finish its execution._
6. 🔸 **pthread_mutex_init:** _Initialize a mutex._
7. 🔸 **pthread_mutex_destroy:** _Destroy the mutex after it has been used._
8. 🔸 **pthread_mutex_lock:** _Lock the mutex before accessing and updating the shared data._
9. 🔸 **pthread_mutex_unlock:** _Unlock the mutex, allowing other threads to access the shared resource._



Also permitted:
**memset, printf, malloc, free, write**

<table>
	<tr>
		<th> 🔸 usleep() </th>
		<th> </th>
	</tr>
	<tr>
		<th> Use </th>
		<td> Suspend the execution of a program to introduce a delay for a specified number of microseconds </td>
	</tr>
	<tr>
		<th> Library & Syntax </th>
		<td> 

```c


<unistd.h>

int usleep(useconds_t microseconds);
``` 
</td>
		</tr>
		<tr>
		<th> Example </th>
		<td>

```c


#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int main(void) 
{
	printf("Sleeping for 2 seconds...\n");

	int result = usleep(2000000);

	if (result == 0) 
		printf("Woke up after sleeping.\n");
	else 
	{
		perror("Error in usleep");
		return (-1);
	}
	return (0);
}
```

</td>
		</tr>
</table>

<table>
	<tr>
		<th> 🔸 gettimeofday() </th>
		<th> </th>
	</tr>
	<tr>
		<th> Use </th>
		<td> Obtain the current time </td>
	</tr>
	<tr>
		<th> Library & Syntax </th>
		<td> 

```c



<sys/time.h>

int gettimeofday(struct timeval *tv, struct timezone *tz);
``` 
</td>
		</tr>
		<tr>
		<th> Example </th>
		<td>

```c
#include <stdio.h>
#include <sys/time.h>

int main(void) 
{
	struct timeval current_time;

	// Get the current time
	if (gettimeofday(&current_time, NULL) == 0) 
		printf("Current Time: %ld microseconds\n", current_time.tv_usec);
	else 
	{
		perror("Error getting time");
		return (-1);
	}
	return (0);
}
```
</td>
		</tr>
</table>

<table>
	<tr>
		<th> 🔸 pthread_create() </th>
		<th> </th>
	</tr>
	<tr>
		<th> Use </th>
		<td> Create a new thread within a program </td>
	</tr>
	<tr>
		<th> Library & Syntax </th>
		<td> 

```c


<pthread.h>

int	pthread_create(pthread_t *thread_id, const pthread_attr_t *attr,
					void *(*thread_function) (void *), void *arg);
``` 
</td>
		</tr>
		<tr>
		<th> Example </th>
		<td>

```c
#include <pthread.h>
#include <stdio.h>

void	*thread_function(void *arg) 
{
	// Casting the void pointer *arg being passed in, to 'long *'
	long	*arg_num = (long *)(arg); 

	printf("Arg: %ld\n", *arg_num);
	return (NULL);
}


int main(void) 
{
	pthread_t	id_1;
	pthread_t	id_2; // Multiple threading
	
	// An example value we want to pass in thread_function via a pointer
	long		value1 = 1; 
	long		value2 = 2;

	// Create a new thread, accessing the memory address of value1&2, casting it to 'void *'
	// Call the thread_function twice, with two different values, running in two different threads
	pthread_create(&id_1, NULL, thread_function, (void *) &value1);
	pthread_create(&id_2, NULL, thread_function, (void *) &value2);

	// Wait for the thread to finish
	pthread_join(id_1, NULL);
	pthread_join(id_2, NULL);

	return (0);
}
```
</td>
		</tr>
</table>

<table>
	<tr>
		<th> 🔸 pthread_detach() </th>
		<th> </th>
	</tr>
	<tr>
		<th> Use </th>
		<td> 



Detach the newly created thread (thread_id) 
- This means that the resources associated with the thread will be automatically released when the thread exits, and the main thread does not need to explicitly join it.
- The difference is, `pthread_join()` is used when you want the main thread to wait for the completion of a specific thread. 
	- This is useful when the main thread needs the results produced by the other thread or when synchronization is necessary.
- Whereas, `pthread_detach()` is used when you want to detach a thread and let it run independently. 
	- The resources associated with the thread will be automatically released when the thread exits. 
	- This is useful when you don't need to wait for the thread to finish and don't need its return value.
</td>
	</tr>
	<tr>
		<th> Library & Syntax </th>
		<td> 

```c
<pthread.h>

int pthread_detach(pthread_t thread_id);
``` 
</td>
		</tr>
		<tr>
		<th> Example </th>
		<td>

```c
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void *thread_function(void *arg) 
{
	// Thread logic goes here
	printf("Thread is running...\n");
	usleep(200000);
	printf("Thread is done.\n");

	pthread_exit(NULL);
}


int main(void) 
{
	pthread_t thread_id;
		
	pthread_create(&thread_id, NULL, thread_function, NULL);

	// Detach the thread to allow it to run independently
	pthread_detach(thread_id);

	printf("Main thread is continuing its execution...\n");

	// Main thread doesn't need to join the detached thread

	return (0);
}
```

</td>
		</tr>
</table>

<table>
	<tr>
		<th> 🔸 pthread_join() </th>
		<th> </th>
	</tr>
	<tr>
		<th> Use </th>
		<td> Wait for the thread with ID thread_id to finish its execution </td>
	</tr>
	<tr>
		<th> Library & Syntax </th>
		<td> 

```c

<pthread.h>

int pthread_join(pthread_t thread_id, void **retval);
```#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void* thread_function(void* arg) {
    int* num = (int*)arg;
    printf("Thread received argument: %d\n", *num);
    int* result = malloc(sizeof(int));
    *result = (*num) * 2; // Example computation: multiply input by 2
    pthread_exit((void*)result); // Exit and return result
}

int main() {
    pthread_t thread;
    int arg = 5;
    void* retval;

    // Create a new thread
    if (pthread_create(&thread, NULL, thread_function, &arg)) {
        fprintf(stderr, "Error creating thread\n");
        return 1;
    }

    // Wait for the thread to finish and get the result
    if (pthread_join(thread, &retval)) {
        fprintf(stderr, "Error joining thread\n");
        return 2;
    }

    // Retrieve and print the result
    int* result = (int*)retval;
    printf("Thread returned result: %d\n", *result);

    // Free the allocated memory in the thread
    free(result);

    return 0;
}


</td>
		</tr>
		<tr>
		<th> Example </th>
		<td> See example in pthread_create() </td>
		</tr>
</table>

<table>
	<tr>
		<th> 🔸 pthread_mutex_init() </th>
		<th> </th>
	</tr>
	<tr>
		<th> Use </th>
		<td> Initialize a mutex </td>
	</tr>
	<tr>
		<th> Library & Syntax </th>
		<td> 

```c
<pthread.h>

int pthread_mutex_init(pthread_mutex_t *mutex, const pthread_mutexattr_t *attr);
``` 
</td>
		</tr>
		<tr>
		<th> Example </th>
		<td>

```c


#include <pthread.h>
#include <stdio.h>

int main(void) 
{
	//Declare mutex variable
	pthread_mutex_t my_mutex;

	// Initialize the mutex for synchronization
	pthread_mutex_init(&my_mutex, NULL);

	// Destroy the mutex when it's no longer needed
	pthread_mutex_destroy(&my_mutex);

	return (0);
}
```
</td>
		</tr>
</table>

<table>
	<tr>
		<th> 🔸 pthread_mutex_destroy() </th>
		<th> </th>
	</tr>
	<tr>
		<th> Use </th>
		<td> Destroy the mutex after it has been used </td>
	</tr>
	<tr>
		<th> Library & Syntax </th>
		<td> 

```c


<pthread.h>

int pthread_mutex_destroy(pthread_mutex_t *mutex);
``` 
</td>
		</tr>
		<tr>
		<th> Example </th>
		<td>

```c
#include <pthread.h>
#include <stdio.h>

void *thread_function(void *arg) 
{
	// Thread logic using the mutex goes here
	pthread_mutex_lock(&my_mutex);
	printf("Thread inside the critical section.\n");
	pthread_mutex_unlock(&my_mutex);

	pthread_exit(NULL);
}


int main(void) 
{
	//Declare mutex variable
	pthread_mutex_t my_mutex;

	// Initialize the mutex for synchronization
	pthread_mutex_init(&my_mutex, NULL);

	pthread_t thread_id;

	pthread_create(&thread_id, NULL, thread_function, NULL);

	// Thread function is called on &thread_id

	// Wait for the thread to finish
	pthread_join(thread_id, NULL);

	// Destroy the mutex when it's no longer needed
	pthread_mutex_destroy(&my_mutex);

	return (0);
}
```

</td>
		</tr>
</table>

<table>
	<tr>
		<th> 🔸 pthread_mutex_lock() </th>
		<th> </th>
	</tr>
	<tr>
		<th> Use </th>
		<td> Lock the mutex before accessing and updating the shared data </td>
	</tr>
	<tr>
		<th> Library & Syntax </th>
		<td> 

```c
<pthread.h>

int pthread_mutex_lock(pthread_mutex_t *mutex);
``` 
</td>
		</tr>
		<tr>
		<th> Example </th>
		<td> See example in pthread_mutex_destroy() </td>
		</tr>
</table>

<table>
	<tr>
		<th> 🔸 pthread_mutex_unlock() </th>
		<th> </th>
	</tr>
	<tr>
		<th> Use </th>
		<td> Unlock the mutex, allowing other threads to access the shared resource </td>
	</tr>
	<tr>
		<th> Library & Syntax </th>
		<td> 

```c
<pthread.h>

int pthread_mutex_unlock(pthread_mutex_t *mutex);
``` 
</td>
		</tr>
		<tr>
		<th> Example </th>
		<td> See example in pthread_mutex_destroy() </td>
		</tr>
</table>


# 🔷 Pseudo code:
```c
//We need data structs:

	//For each philo, containing:
		//Philo ID, a thread
		//Fork pointers
		//Mutex
		//Whatever relevant to rules

	//For each fork
		//Mutex
		//ID

	//For the simulation data
		//Handle the mandatory rules
		//A pointer to the philo array (of structs)
		//A pointer to the fork array (of mutexes)
		//Mutex


//Write a skeleton in main()

	//Parse inputs
		//Convert each "time_to" inputs to milliseconds
		//Handle input errors
		//Handle the optional input of the total meals a philo must eat

	//Initialize data

		//malloc an array of philos
			//Initalize the philo data
			//Initialize the philo mutex before use

		//malloc an array of forks
			//Initialize the fork mutex before use
			//Assign left and right forks for each philo
			//Handle a single philo thread
	
	//Execute the simulation

		//Create a thread for each philo
		//Create a thread to check for deaths

		//Synchronise the philos eating to avoid deadlock/resouce contention
			//All even numbered philos eat while odds wait, and alternate
			//Utilize delay mechanisms like usleep() to avoid philos attempting busy forks

		//Print to the STDOUT the philo states with their timestamps
		//Don't forget to use pthread_join to wait for all threads to complete execution (the dining)
		
	//Clean up and free things to avoid memory leaks
```


# 🔷 Evaluation Checklist:

🔸 **Error Handling:**
1. Does not crash or have undefined behaviour.
2. Does not have memory leaks.
3. No norm errors.
4. No global variables.
5. Defend if the program doesn't work on slower machines and test with modifying the thinking_time multiplier.

🔸 **Code checks and rationale for each:**
1. There is one thread per philosopher.
2. There is one fork per philosopher.
3. There is a mutex per fork. The mutex is used to check the fork value and/or change it.
4. The output view is never scrambled.
5. The death of a philospher can be checked.
6. There is a mutex to protect when a philosopher dies and starts eating at the same time.

🔸 **Testing:**
1. Should not test with more than 200 philosphers.
2. Should not test when either `time_to_die`, `time_to_eat` or `time_to_sleep` is under 60`ms`.
3. Test with `1 800 200 200`: the philosopher should not eat and should die.
4. Test with `5 800 200 200`: no one should die.
5. Test with `5 800 200 200 7`: no one should die, and the simulation should stop when all the philosophers has eaten at least 7 times each.
6. Test with `4 410 200 200`: no one should die.
7. Test with `4 310 200 100`: one philosopher should die.
8. Test with 2 philosphers and check the different times: a death delayed by more than 10 ms is unacceptable.
9. Test with any values of your choice to verify all the requirements. Ensure philosophers die at the right time, that they don't steal forks, etc.
          

# 🔷 References:

- [Introduction To Threads (pthreads)](https://www.youtube.com/watch?v=ldJ8WGZVXZk)
An introduction on how to use threads in C with the pthread.h library (POSIX thread library)

- [Unix Threads in C](https://youtube.com/playlist?list=PLfqABt5AS4FmuQf70psXrsMLEDQXNkLq2&si=0QgGb_xmrDESzk62)
Playlist of all things threads related

- [DexTutor: Dining Philosopher Problem program in C](https://www.youtube.com/watch?v=27lu1lwvoGY&t=49s)
Demonstration of creating threads

