#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int pierwsza_grusza = -1;
	int ostatnia_grusza = -1;
	int pierwsza_jablon = -1;
	int ostatnia_jablon = -1;
	int n;
	cin>>n;
	
	for(int i = 0; i < n; i++)
	{
		int temp;
		cin>>temp;
		
		if(temp == 0 && pierwsza_grusza == -1){
			pierwsza_grusza = i;
		}else if(temp == 1 && pierwsza_jablon == -1){
			pierwsza_jablon = i;
		}
		
		if(temp == 0 && pierwsza_grusza != -1){
			ostatnia_grusza = i;
		}else if(temp == 1 && pierwsza_jablon != -1){
			ostatnia_jablon = i;
		}
	}
	cout<<max(ostatnia_jablon - pierwsza_grusza , ostatnia_grusza - pierwsza_jablon);
}
