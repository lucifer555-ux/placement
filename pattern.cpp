#include<iostream>
using namespace std;
void pattern1(int n)

    {
    for(int i = 1; i <= n; i++){
        for(int j =1; j<=n; j++){
            cout<<"* ";
        } 
        cout<<endl;
    }
    }
void pattern2(int n)

    {
    for(int i = 1; i <= n; i++){
        for(int j =1; j<=n; j++){
            cout<<i;
        }  // i is repeating j number of times
        cout<<endl;
    }
    }
void pattern3(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j =1; j<=n; j++){
            cout<<"j";
        } // j is repeating j number of times 
        cout<<endl;
    }
    }
void pattern4(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j =1; j<=n; j++){
            cout<<char(i + 64) << " ";
        } 
        cout<<endl;
    }
    }
void pattern5(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j =1; j<=n; j++){
            cout<<char(j + 64) << " ";
        } 
        cout<<endl;
    }
    }
void pattern6(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j = n; j>=1; j--){
            cout<<j << " ";
        } 
        cout<<endl;
    
    }
    }
void pattern7(int n)
    {
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= 1; j--){
            cout<<i << " ";
        } 
        cout<<endl;
    }
    }
void pattern8(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j << " ";
        } // j will run upto i number of times 
        // when i = 1; j = 1 which is equal to i print 1 j++
        // when i = 2; j = 1 then it will run till 2 print 1 2 
        // when i = 3; j = 1 to 3 print 1 2 3
        cout<<endl;
    }
    }
void pattern9(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j =1; j<=i; j++){
            cout<<i<<" ";
        } 
        cout<<endl;
    }
    }
void pattern10(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j =1; j<=i; j++){
            cout<<"* ";
        } 
        cout<<endl;
    }
    }
void pattern11(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j =1; j<= i; j++){
            cout<<char(j + 64)<<" ";
        } 
        cout<<endl;
    }
    }
void pattern12(int n)
    {
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= i; j--){
            cout<<j << "  ";
        } 
        cout<<endl;
    }
    }
void pattern13(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j =i; j>=1; j--){
            cout<<j<<" ";
        } 
        cout<<endl;
    }
    }
void pattern14(int n)
    {
    for(int i = n; i >= 1; i--){
        for(int j =1; j<= i; j++){
            cout<<j<<" ";
        } 
        cout<<endl;
    }
    }
void pattern15(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j =i; j<= n; j++){
            cout<<j<<" ";
        } 
        cout<<endl;
    }
    }
void pattern16(int n)
    {
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= i; j--){
            cout<<j<<" ";
        } 
        cout<<endl;
    }
    }
void pattern17(int n)

    {
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout<<j<<" ";
        } 
        cout<<endl;
    }
    }
void pattern18(int n)
    {
    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            cout<<j<<" ";
        } 
        cout<<endl;
    }
    }
void pattern19(int n)
    {
    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            cout<<j<<" ";
        } 
        cout<<endl;
    }
    }
void pattern20(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j = i; j >= 1; j--){
            cout<<char(j +  64)<<" ";
        } 
        cout<<endl;
    }
    }
void pattern21(int n)

    {
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout<<char(j +  64)<<" ";
        } 
        cout<<endl;
    }
    }
void pattern22(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            cout<<char(j +  64)<<" ";
        } 
        cout<<endl;
    }
    }
void pattern23(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout<<char(j +  64)<<" ";
        } 
        cout<<endl;
    }
    }
void pattern24(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout<<char(j +  64)<<" ";
        } 
        cout<<endl;
    }
    }
void pattern25(int n)
    {
    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            cout<<char(j +  64)<<" ";
        } 
        cout<<endl;
    }
    }
void pattern26(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<"* ";
        } 
        cout<<endl;
    }
    }
void pattern27(int n)
    {
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout<<"* ";
        } 
        cout<<endl;
    }
    }
void pattern28(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == 1 || i == 5 || j == 1 || j ==5)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }  
    }
      cout<<endl;
    }
    }
void pattern29(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j == 1 || i == n || i == j)
            {
            cout<<"*";
            }
            else
            {
                cout<<" ";
            }  
    }
      cout<<endl;
    }
    }
void pattern30(int n)
    {
    for(int i = 1; i <= n; i++){
        for(int j =1; j<= i; j++){
            cout<<j % 2<<" ";
        } 
        cout<<endl;
    }
    }
void pattern31(int n)
    {
    int k = 1 ;
    for(int i = 1; i <= n; i++){
        for(int j =1; j<= i; j++){
            cout<< k++ <<" ";
        } 
        cout<<endl;
    }
    }
void pattern32(int n)
    {
    int k = 1 ;
    for(int i = 1; i <= n; i++){
        for(int j =1; j<= i; j++){
            cout<< (k++)%2 <<" ";
        } 
        cout<<endl;
    }
    }
void pattern33(int n)
    {
    int k;
    for(int i = 1; i <= n; i++){
        // for printing spaces 
        for(k = n; k >=i;k--){
            cout<<" ";
        }
        for(int j =1; j<= i; j++){
            cout<<j;
        } 
        cout<<endl;
    }
    }
void pattern34(int n)
    {
    int k;
    for(int i = 1; i <= n; i++){
        // for printing spaces 
        for(k = n; k >=i;k--){
            cout<<" ";
        }
        for(int j =n; j<= i; j++){
            cout<<j<<" ";
        } 
        cout<<endl;
    }
    }
void pattern35(int n){
    int spaces = 2*(n-1);
      
      // Outer loop for the number of rows.
      for(int i=1;i<=n;i++){
          
          // for printing numbers in each row
          for(int j=1;j<=i;j++){
              cout<<j;
          }
          
          // for printing spaces in each row
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          // for printing numbers in each row
          for(int j=i;j>=1;j--){
              cout<<j;
          }
          
          // As soon as the numbers for each iteration are printed, we move to the
          // next row and give a line break otherwise all numbers
          // would get printed in 1 line.
          cout<<endl;
          
          // After each iteration nos. increase by 2, thus
          // spaces will decrement by 2.
          spaces-=2;
      }
    }
void pattern36(int n)
    {
        int k,z = 1;
    for(int i = 1; i <= n; i++){
        // for spaces 
        for(int j = n-1; j >= i; j--){
            cout<<" ";
        }
        // for star *
        for(k = 1; k<=z; k++){
            cout<<char(k+64);
        }
        z+= 2;
        cout<<endl;
    }
    } 
void pattern37(int n)
    {
        int k,z = 1;
        //outerloop
    for(int i = 1; i <= n; i++){
        // for spaces 
        for(int j = n-1; j >= i; j--){
            cout<<" ";
        }
        // for star *
        for(k = 1; k<=z; k++){
            cout<< z;
        }
        z+= 2;
        cout<<endl;
    }
    } 
void pattern38(int n)
    {
        int k,z = 1;
        //outerloop
    for(int i = 1; i <= n; i++){
        // for spaces 
        for(int j = n-1; j >= i; j--){
            cout<<" ";
        }
        // for star *
        for(k = 1; k<=z; k++){
            cout<< abs(k - i);
        }
        z+= 2;
        cout<<endl;
    }
    } 
void pattern39(int n)
    {
        int k,z = 1;
        //outerloop
    for(int i = 1; i <= n; i++){
        // for spaces 
        for(int j = n-1; j >= i; j--){
            cout<<" ";
        }
        // for star *
        for(k = 1; k<=z; k++){
            cout<< abs(k - i);
        }
        z+= 2;
        cout<<endl;
    }
    }
void pattern40(int n)
    {
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= i; j--){
            cout<<char(j +64)<<" ";
        } 
        cout<<endl;
    }
    }
void pattern41(int n)
    {
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= i; j--){
            cout<<char(j +64)<<" ";
        } 
        cout<<endl;
    }
    }
void pattern42(int n)
{
int i,j;
    for(i =1;i<=n ;i++)
	{
		for(j=i;j<=n;j++)
		{	   
        	cout<<"*";
		}
		for(j=1;j<=(i*2-2);j++)
		{                                 
	       cout<<" ";
		}
		for(j=i;j<=n;j++)
		{
	        cout<<"*";
		}
            cout<<endl;
	}
	

	/*loop to print lower half of the pattern*/
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{                          
   	        	cout<<"*";
		}
		for(j=1;j<=(n*2-i*2);j++)
		{		                       		 
                cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
		        cout<<"*";
		}
		cout<<endl;
	}
}
void pattern43(int n)
    {
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i * 2; j++){
            cout<<"*";
          for(int j = 1; j <= i * 2 - i; j++){
            cout<<" ";
        }
        } 
      
        cout<<endl;
    }
    }
void pattern44(int n)
{
 for(int i=0;i<n;i++){
         
         // inner loop for printing the stars at borders only.
         for(int j=0;j<n;j++){
             
             if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
                
             // if not border index, print space.
             else cout<<" ";
         }
         
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
     }
      
}
void pattern45(int n)
{
     // Outer loop for no. of rows
     for(int i=0;i<2*n-1;i++){
         
         // inner loop for no. of columns.
         for(int j=0;j<2*n-1;j++){
             
             // Initialising the top, down, left and right indices of a cell.
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             
             // Min of 4 directions and then we subtract from n
             // because previously we would get a pattern whose border
             // has 0's, but we want with border N's and then decreasing inside.
             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
         }
         
         // As soon as the numbers for each iteration are printed, we move to the
         // next row and give a line break otherwise all numbers
         // would get printed in 1 line.
         cout<<endl;
     }
      
}
int main(){
    int n = 5;
    pattern45(n);
    return 0;
    }

