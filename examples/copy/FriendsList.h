//Include guards

#include <iostream>
#include <string>

class FriendsList {

	public:
		FriendsList() {
			size = 5;
			currentPlace = 0;
			friends = new std::string[size];
		}

		FriendsList(FriendsList & other) {
			size = other.size;
			currentPlace = other.currentPlace;
			data = new std::string[size];

			for (int i=0; i<size; i++) {
				data[i] = other.data[i];
			}
		}

		FriendsList& operator=(FriendsList other) {
			std::swap(friends, other.friends);
			std::swap(size, other.size);
			std::swap(currentPlace, other.currentPlace);
			
			return *this;
		}

		void addFriend(const std::string& f) {
			friends[currentPlace++] = f;
		{

		void printFriends() {
			for (int i=0; i<size; i++) {
				std::cout << friends[i] << std::endl;
			}
		}

	private:
		std::string* friends;
		int size;
		int currentPlace;

};
