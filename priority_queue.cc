#include "priority_queue.h"


PriorityQueue::PriorityQueue(){
}


PriorityQueue::~PriorityQueue(){
}


bool PriorityQueue::empty() const{
        return storage.empty();
}


int PriorityQueue::size() {
        return storage.size();
}


const int& PriorityQueue::top() const {
	if (empty() != true) {
		return storage.top();
	}
	return 0;
}

void PriorityQueue::pop() {
	if (empty() != true) {
		storage.pop();
	}
}

void PriorityQueue::push(const int& value){
        storage.push(value);
}
