#include<iostream>

using namespace std;

template<typename T>
class queue {

	T* arr; // pointer to array that internally represents queue

	int f;  // to store the array index at which we have performed
	// the last pop operation

	int r;  // to store the array index at which we have performed
	// the last push operation

	int n;  // to store the maximum queue capacity

	int count; // to store the queue size

public :

	queue(int n) {
		arr = new T[n + 1];
		f = r = 0;
		this->n = n + 1;
		count = 0;
	}

	void push(T val) { 
		if ((r + 1) % n == f) {
			// queue is full
			return;
		}
		r = (r + 1) % n;
		arr[r] = val;
		count++;
	}

	void pop() {

		if (f == r) {
			// queue is empty
			return;
		}

		f = (f + 1) % n; 
		count--;
	}

	T front() {
		return arr[(f + 1) % n];
	}

	bool empty() {
		return f == r; // or count == 0 or size() == 0
	}

	int size() {
		return count;
	}

	void print() {

		// (f+1)%n is the index that repr. the front end of the queue
		// (r+1)%n is the index at which we will perform the next push operation

		for (int i = (f + 1) % n; i != (r + 1) % n; i = (i + 1) % n ) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

};

int main() {

	queue<int> q(5);

	cout << "size : " << q.size() << endl;
	q.empty() ? cout << "Queue is empty!" << endl :
	                 cout << "Queue is not empty!" << endl;

	q.push(10);
	q.push(20);
	q.push(30);

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();
	q.empty() ? cout << "Queue is empty!" << endl :
	                 cout << "Queue is not empty!" << endl;


	// queue<int> q(5);

	// q.push(10);
	// q.push(20);
	// q.push(30);
	// q.push(40);
	// q.push(50);

	// q.print();

	// q.pop();

	// q.print();

	// q.push(60);

	// q.print();

	// q.pop();

	// q.push(70);

	// q.print();

	return 0;
}