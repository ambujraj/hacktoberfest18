#include <iostream>
#include "../include/Queue.hpp"

using std::cout;

int main(){
	Queue<int> q;
	for(int i = 1; i < 6; i++){
		q.push(i);
	}
	long l = 0;
	while(!q.empty()){
		l = q.getSize();
		cout<< "front: " << q.front() << " back: " << q.back() 
				<< " size: " << l << '\n';
		q.pop();
	}
	q.push(20);
	q.pop();
	l = q.getSize();
	cout<< q.front() << ' ' << q.back() << ' ' << l << '\n';
	
	
	cout<< std::endl;
	cout<<'This is a queue';
    return 0;
}
