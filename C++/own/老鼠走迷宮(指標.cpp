#include<iostream>

using namespace std;

int count=0;

int n(int** maze,int x, int y, int ex, int ey)
{
	if(maze[x][y]==0)
	{
		maze[x][y]=count+1;
		count+=1;
		if(maze[ex][ey]==0)
		{
			if(!(n(maze,x,y+1,ex,ey)||n(maze,x+1,y,ex,ey)||n(maze,x,y-1,ex,ey)||n(maze,x-1,y,ex,ey)))
			{
				maze[x][y]=0;
				count-=1;
			}
		}
	}
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<7;j++)
		{
			cout<<maze[i][j]<<" "; 
		}
		cout<<endl;
	}
    return maze[ex][ey];
}
int main(void)
{
	int map[7][7]=
		{{2, 2, 2, 2, 2, 2, 2}, 
        {2, 0, 0, 0, 0, 0, 2}, 
        {2, 0, 2, 0, 2, 0, 2}, 
		{2, 0, 0, 2, 0, 2, 2}, 
        {2, 2, 0, 2, 0, 2, 2}, 
        {2, 0, 0, 0, 0, 0, 2}, 
        {2, 2, 2, 2, 2, 0, 0}}; 
	int* maze[7];
	for(int i=0;i<7;i++)
	{
		maze[i]=map[i];
	}
	n(maze,1,1,5,5);
	if(count<2){
		cout<<"µL¸Ñ";
	}
	else{
		for(int i=0;i<7;i++)
		{
			for(int j=0;j<7;j++)
			{
				cout<<maze[i][j]<<" "; 
			}
		cout<<endl;
		}
	}
	return 0;
}

