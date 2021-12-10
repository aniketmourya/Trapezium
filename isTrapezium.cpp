// Language Used: C++
#include<bits/stdc++.h>
using namespace std;

// structure to create a point
struct Point{
// x, y coordinates of a point
 double x;
 double y;  
// constructor to store a point
    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }
};

bool isTrapezium(struct Point P1, struct Point P2, struct Point P3, struct Point P4){
	// finding slope of line formed by Points 1 & 2
	double slope12 = (P1.y - P2.y) / (P1.x - P2.x);
		    
	// finding slope of line formed by Points 3 & 4
	double slope34 = (-P3.y + P4.y) / (-P3.x + P4.x);
		   
	// finding slope of line formed by Points 1 & 4
	double slope14 = (P1.y - P4.y) / (P1.x - P4.x) ;
	   
	// finding slope of line formed by Points 2 & 3
	double slope23 = (P2.y - P3.y) / (P2.x - P3.x) ;
		   
		     
	// two sides are parallel if the corresponding slope of sides are same
	/*Finding and checking if slope of line  formed by P1 and P2 is same as 
	  that of line formed by P3 and P4 and if parallel sides are parallel to X-axis.*/        
	  
	/* Finding and checking if slope of line  formed by P1 and P4 is same as 
	  that of line formed by P2 and P3 and if parallel sides are parallel to X-axis.*/
     
	if((slope12==slope34) && ((P1.y-P2.y)==0) || ((slope14==slope23) && ((-P3.y + P4.y) == 0))){
		return true;
	}
	else{			// if it not a trapezium  OR parallel side not Parallel to X-axis
		return false;
	}
}




int main(){
	double x,y;
	cout<<"Enter 4 points: "<<endl;
	cin>>x>>y;
	Point P1(x,y);
	cin>>x>>y;
	Point P2(x,y);
	cin>>x>>y;
	Point P3(x,y);
	cin>>x>>y;
	Point P4(x,y);
	bool checkTrapezium =  isTrapezium(P1, P2, P3, P4); // check if points form a trapezium      
		    if(checkTrapezium){
		        cout<<"Points form a Trapezium with parallel side parallel to X-axis"<<endl;
		    }
		    else{
		        cout<<"Points do not form a Trapezium OR Tapezium is not parallel to X-axis"<<endl;
		    }
	return 0;
}
