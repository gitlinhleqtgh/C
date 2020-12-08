#include<iostream>
#include<limits.h>
using namespace std;

int mat[100][100] = {
	{0, 0, 20, 0, 0, 21, 19, 0, 0, 0},
	{0, 0, 0, 0, 0, 21, 19, 0, 8, 0},
	{20, 0, 0, 4, 5, 0, 0, 0, 0, 0},
	{0, 0, 4, 0, 0, 0, 4, 0, 0, 0},
	{0, 0, 5, 0, 0, 0, 0, 0, 0, 4},
	{21, 21, 0, 0, 0, 0, 2, 0, 0, 0},
	{19, 19, 0, 4, 0, 2, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 8, 0, 0, 0, 0, 0, 0, 0, 3},
	{0, 0, 0, 0, 4, 0, 0, 0, 3, 0}
	};
int n = 10;

void printPath(int start, int finish, int back[])
{
	if(start == finish)
	  cout << finish << " -> ";
	else
	{
		printPath(start,back[finish],back);
		cout << finish << " -> ";
	}
}

void dijkstra(int start, int finish)
{
	int back[100], //luu dinh cha
	    weight[100], //luu trong so
	    mark[100]; //danh dau dinh
	//khoi tao
	for(int i = 0; i < 10; i++)
	{
		back[i] = -1;
		mark[i] = 0;
		weight[i] = INT_MAX;
	}
	
	//xuat phat tai dinh dau tien
	back[start] = 0;
	weight[start] = 0;
	//kiem tra do thi co lien thong hay khong
	int connect;
	do
	{
		//dinh bat dau se la dinh 0
		//nen ta gan connect = -1
		connect = -1;
		int min = INT_MAX;
		//lan luot duyet qua tat ca cac dinh trong do thi
		for(int j = 0; j<n;j++)
		
			if(mark[j] == 0) //neu dinh chua duoc danh dau
			{
				//neu ton tai duong di giua dinh start va dinh j
				//weight[j]: tong trong so tu dinh bat dau den dinh dang xet
				//weight[start] + mat[start][j] : trong so dang xet
				if(mat[start][j] != 0 && 
				    weight[j] > weight[start] + mat[start][j])
				{
					//luu lai, dung de so sanh lan sau
					weight[j] = weight[start] = mat[start][j];
					//luu dinh cha
					back[j] = start;
				}
				//dua vao mang weight -> tim duong di ngan nhay hien tai
				if(min > weight[j])
				{
					min = weight[j];
					//dua vao bien connect
					//ta co the quyet dinh duoc dinh tiep theo can duyet
					// va do thi co lien thong khond
					connect = j;
				}
			}
			start = connect;
			mark[start] = 1;
		}while(connect != -1 && start != finish);
		//start != finish: dinh dau va dinh cuoi gap nhau
		//connect != -1: neu khong lien thong thi dung viec tim duong di ngan nhat
		
		//xem trong so vua tim duoc
		cout<< weight[finish] << endl;
		//in duong di
		printPath(0,finish,back);
		cout<< "null\n";
   
}


int main()
{
	dijkstra(0,9);
}
