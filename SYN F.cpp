#include<iostream>
using namespace std;
 int main()

{    
    cout<<"MATRIX CALCULATOR "<<endl;
    cout<<endl;
    int n,m;
    double d,det;

    //input order of matrix
    cout<<"Enter the number of rows of the matrix: "<<endl;  
    cin>>n;
    cout<<"Enter the number of columns of the matrix: "<<endl;
    cin>>m;
    int A[n][m];

        //input elements of matrix
    cout<<"enter the elements of matrix"<<endl; 
    for(int i=0 ;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
        cout<<endl;
    }

          //showing the entered matrix
    cout<<"the matrix you have entered"<<endl;  
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }


    //declearing the character to operate the matrix
    label: string x;
    cout<<"the operation to be done on matrix"<<endl;
    cout<<"enter the symbol to operate as :-" <<endl;
	cout<<"  1.(+)= addition " <<endl;
	cout<<" 2.(-)= subtraction "<<endl;
	cout<<" 3.(t)= transpose "<<endl;
	cout<<" 4.(*)= multiplication "<<endl;
	cout<<" 5.(?) {to know whether matrix is Symmetric or Skew Symmetric} "<<endl;
	cout<<" 6.(D)= Determinant "<<endl;
	cout<<" 7.(i)= Inverse "<<endl; 
	cout<<" 8.(x)= Exit "<<endl; 
    cin>>x;
  //print the operation suggested by user
    cout<<"you have entered the following operation:    "<<x<<endl;
     if(x=="D")
   {
	if(n==2 && m==2)
	{
       det=(A[0][0]*A[1][1])-(A[0][1]*A[1][0]);
	cout<<"Determinant = "<<det<<endl;
	}
	else if(n==3 && m==3)
	{
		 d=(A[0][0]*A[1][1]*A[2][2])+(A[0][1]*A[1][2]*A[2][0])+(A[0][2]*A[1][0]*A[2][1])-(A[2][0]*A[1][1]*A[0][2])-(A[2][1]*A[1][2]*A[0][0])-(A[2][2]*A[1][0]*A[0][1]);
	cout<<"Detrminant = "<<d<<endl;
	}
	cout<<endl;
	goto label;
	}
	else if(x=="i")
	{
		if(n==2 && m==2)
		{
			det=(A[0][0]*A[1][1])-(A[0][1]*A[1][0]);
			double adj[2][2];
	adj[0][0]=(A[1][1]);
	adj[1][0]=-(A[1][0]);	
	adj[0][1]=-(A[0][1]);
	adj[1][1]=(A[0][0]);
	if(det==0) {
		cout<<"Inverse does not exist."<<endl;
	} else {
		cout<<"Inverse: "<<endl;
		for(int i=0; i<2; i++) {
			for(int j=0; j<2; j++) {
				cout<<(adj[i][j])/det<<" "<<flush;
			}
			cout<<endl;
		}	
		}
	}
		if(n==3 && m==3)
		{
			d=(A[0][0]*A[1][1]*A[2][2])+(A[0][1]*A[1][2]*A[2][0])+(A[0][2]*A[1][0]*A[2][1])-(A[2][0]*A[1][1]*A[0][2])-(A[2][1]*A[1][2]*A[0][0])-(A[2][2]*A[1][0]*A[0][1]);
			double bdj[3][3];
	bdj[0][0]=(A[1][1]*A[2][2])-(A[2][1]*A[1][2]);
    bdj[1][0]=-((A[1][0]*A[2][2])-(A[2][0]*A[1][2]));
	bdj[2][0]=(A[1][0]*A[2][1])-(A[2][0]*A[1][1]);
	bdj[0][1]=-((A[0][1]*A[2][2])-(A[2][1]*A[0][2]));
	bdj[1][1]=(A[0][0]*A[2][2])-(A[2][0]*A[0][2]);
	bdj[2][1]=-((A[0][0]*A[2][1])-(A[2][0]*A[0][1]));
	bdj[0][2]=(A[0][1]*A[1][2])-(A[1][1]*A[0][2]);
	bdj[1][2]=-((A[0][0]*A[1][2])-(A[1][0]*A[0][2]));
	bdj[2][2]=(A[0][0]*A[1][1])-(A[0][1]*A[1][0]);
	if(d==0) {
		cout<<"Inverse does not exist."<<endl;
	} else {
		cout<<"Inverse: "<<endl;
		for(int i=0; i<3; i++) {
			for(int j=0; j<3; j++) {
				cout<<(bdj[i][j])/d<<" "<<flush;
			}
			cout<<endl;
		}
    }

		}
		cout<<endl;
		goto label;
	}
       //if user want to add another matrix to the given matrix
      else if(x=="+"){
        cout<<"enter the matrix to be added"<<endl;    //input the matrix to be added
        int B[n][m];
        for(int i=0 ;i<n;i++){
            for(int j=0;j<m;j++){
            cin>>B[i][j];
        }
        cout<<endl;
    }

    int ans1[n][m];       //declearing the answer data type to print as answer
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              ans1[i][j] = 0;
          }
      }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans1[i][j] = A[i][j] + B[i][j];
        }
    }

      cout<<"the matrix as an answer"<<endl;   //print the answer
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    goto label;
    }

        // if user want to subtract a matrix from given matrix
    else if(x=="-"){
        int C[n][m];
        cout<<"enter the matrix to be subtracted"<<endl;   //input the matrix by that given matrix is to be subtracted
            for(int i=0 ;i<n;i++){
            for(int j=0;j<m;j++){
            cin>>C[i][j];
        }
        cout<<endl;
    }

    int ans2[n][m];
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              ans2[i][j] = 0;
          }
      }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans2[i][j] = A[i][j] - C[i][j];
        }
    }

      cout<<"the matrix as an answer"<<endl;   // print the answer
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    goto label;
    }
      //if user want to multiply the given matrix by another matrix
    else if(x=="*"){
        int p;
        cout<<"number of coloumns of matrix to be multiplied"<<endl;
        cin>>p;
        int D[m][p];
         cout<<"enter the matrix to be multiplied"<<endl;
            for(int i=0 ;i<m;i++){
            for(int j=0;j<p;j++){
            cin>>D[i][j];
        }
        cout<<endl;
     }

      int ans3[n][p];
       for(int i=0;i<n;i++){
          for(int j=0;j<p;j++){
              ans3[i][j] = 0;
          }
      }

       for(int i=0;i<n;i++){
           for(int j=0;j<p;j++){
               for(int k=0; k<m;k++){
                   ans3[i][j] += ((A[i][k])*(D[k][j]));
               }
           }
       }
            cout<<"the answer matrix is:"<<endl;   //print the answer
       for(int i=0;i<n;i++){
           for(int j=0;j<p;j++){
               cout<<ans3[i][j]<<" ";
           }
           cout<<endl;
       }
       cout<<endl;
       goto label;
    }
      
        // if user to transpose the matrix
    else if(x=="t"){
           cout<<"the transpose of given matrix is:"<<endl;   // input answer
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<A[j][i]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        goto label;
    }
    else if(x=="?")
    if(m==n){
    int a=1;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(A[i][j]!=A[j][i]) {
				a=0;
				break;
			} else {
				a=1;
			}break;
		}
	}cout<<endl;
	int b=1;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(A[i][j]!=-A[j][i]) {
				b=0;
				break;
			} else {
				b=1;
			}break;
		}
	}cout<<endl;
	if(a==0 && b==0)
	{
		cout<<"Matrix is neither symmetric nor Skew-Symmetric "<<endl;
	}
	else if(a==1 && b==0)
	{
		cout<<"Matrix is symmetric "<<endl;
	 }
	 else if(a==0 && b==1)
	 {
	 	cout<<"Matrix is skew symmetric "<<endl;
	  } 
	  else if(a==1 && b==1)
	  {
	  	cout<<"Matrix is symmetric a well as skew symmetric "<<endl;
	  }
	  cout<<endl;
	  goto label;
   }
   else if(x=="x")
   {
   	return 0;
   }
	return 0;
}

