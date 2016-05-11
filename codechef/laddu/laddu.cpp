using namespace std;
#include <bits/stdc++.h>
#define CONTEST_WON 0 
struct activity_struct {
	string name;
	int val;
};

int get_value(struct activity_struct a) {
	if (a.name == "CONTEST_WON") {
		int bonus = 20 - a.val;
		if (bonus < 0) {
			bonus = 0;
		}
		return 300 + bonus;
	} else if (a.name == "TOP_CONTRIBUTOR"){
		return 300;
	} else if (a.name == "CONTEST_HOSTED") {
		return 50;
	} else if(a.name == "BUG_FOUND"){
		return a.val;
	}
	return 0;
}
bool has_value(struct activity_struct a) {
	return  (a.name == "BUG_FOUND" || a.name == "CONTEST_WON");
}

int main(int argc, char const *argv[]) {

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int num_activities;
		string origin;
		cin >> num_activities >> origin;
		struct activity_struct activities[1];
		int total_laddus = 0;
		for (int i = 0; i < num_activities; ++i) {
			cin>>activities[0].name;
			if(has_value(activities[0])) {
				cin>>activities[0].val;
			}
			total_laddus += get_value(activities[0]);
		}
		if (origin == "INDIAN") {
			cout<<total_laddus/200<<endl;
		} else if(origin == "NON_INDIAN") {
			cout<<total_laddus/400<<endl;
		}

	}
	return 0;
}