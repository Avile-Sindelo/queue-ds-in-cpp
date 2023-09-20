#include<iostream>
#define MAX 100
using namespace std;

class QueueOfChar {
	private :
			char queue[MAX];
			int front;
			int back;
			
	public :
			QueueOfChar();
			void enqueue(char ch);
			char dequeue();
			bool isFull();
			bool isEmpty();
};

QueueOfChar::QueueOfChar(){
	front = -1;
	back = -1;
}

bool QueueOfChar::isEmpty(){
	return (back == -1);
}

bool QueueOfChar::isFull(){
	return (back == MAX - 1);
}

void QueueOfChar::enqueue(char ch){
	//check if the queue is empty
	if(isEmpty()){
		//make front point to the first slot of the queue - index 0
		front++;
		//make back also point to the same slot of index 0 since the queue is empty to start with
		back++;
		//add the character value at the back of the queue
		queue[back] = ch;
	} else if(isFull()){
		cout << "Cannot enqueue - the queue is full" << endl;	
	} else { //Queue is NOT empty and NOT full
		//increment back to point to the next index of the queue
		back++;
		//add the character where back is now pointing to
		queue[back] = ch;
	}
}

char QueueOfChar::dequeue(){
	//check if the queue is not empty
	if(isEmpty()){
		cout << "Cannot dequeue - the queue is empty" << endl;
	} else {
		//create a variable to return
		char ch;
		//take the front element of the queue and store it in the new variable
		ch = queue[front];
		//increment the front of the queue to point to the next value from the head of the queue
		front++;
	}
}

int main(){
	QueueOfChar queue;
	queue.enqueue('L');
	queue.enqueue('i');
	queue.enqueue('m');
	queue.enqueue('a');
	queue.dequeue();	
	
	return 0;
}





































