#ifndef PRIORITY_QUEUE_H_
#define PRIORITY_QUEUE_H_

#include <queue>

class PriorityQueue {
	public:
		PriorityQueue();
		~PriorityQueue();
		bool empty() const;
		const int& top() const;
		int size();
		void push(const int& value);
		void pop();
	private:
		std::priority_queue<int> storage;

};

#endif  // PRIORITY_QUEUE_H_