#include<iostream>

using namespace std;
int main(){
    int n1,r=2,f=0;
    int b[3][3],n=1,t=0,c[100];
    char a[3][3];
    for (int i = 0; i < 43; i++)
    {
        cout<<" ";
    }
    for (int i = 0; i < 43; i++)
    {
        cout<<"x";
    }
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int space = 0; space < 43; space++)
        {
            cout<<" ";
        }
        for (int x = 0; x < 1; x++)
        {
            cout<<"x";
        }
        if (i == 1)
        {
            cout<<"\t"<<"!*!*!*!  TIC TAC TOE GAME !*!*!*!  ";
        }
        if (i == 1)
        {
            for (int space = 0; space < 3; space++)
            {
                cout<<" ";
            }
        }
        else
        {
            for (int space = 0; space < 41; space++)
            {
                cout<<" ";
            }
        }

        for (int x = 0; x < 1; x++)
        {
            cout<<"x";
        }
        cout<<endl;
    }
    for (int i = 0; i < 43; i++)
    {
        cout<<" ";
    }
    for (int i = 0; i < 43; i++)
    {
        cout<<"x";
    }    
    cout<<endl<<endl;
    
    while(n<=9){
        int p=1;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
            b[i][j]=p;
            p++;
            cout<<'|'<<b[i][j];
        }
        cout<<'|';
        cout<<endl;
        }
        

        cout<<"enter your choice as given in the matrix"<<endl;
        cin>>n1;
        


        for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(b[i][j]==n1){
                        if(r%2==0){
                

                            a[i][j]='*';
                            r=r+1;
                            break;
                        }
                        else{


                            a[i][j]='0';
                            r=r+1;
                            break;
                        }
                    }
                }
            }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(a[i][j]=='*' || a[i][j]=='0'){
                    cout<<'|'<<a[i][j];
                }
                else{
                    cout<<"";
                }
            
            }
        cout<<'|';
        cout<<endl;
        } 
        if(n>4){
            if((a[0][0]==a[0][1] && a[0][1]==a[0][2] && a[0][2]==a[0][1])){
                
                if(a[0][0]=='*'){
                    cout<<"player 1 has won";

                }
                else{
                    cout<<" player 2 has won";
                }
                f=1;
                break;
            }
            else if((a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][2]==a[1][1])){
                if(a[1][0]=='*'){
                    cout<<"player 1 has won";

                }
                else{
                    cout<<" player 2 has won";
                }
                
                f=1;
                break;
            }
            else if((a[2][0]==a[2][1] && a[2][1]==a[2][2] && a[2][2]==a[2][0])){
                if(a[2][0]=='*'){
                    cout<<"player 1 has won";

                }
                else{
                    cout<<" player 2 has won";
                }
                
                f=1;
                break;
            }
            else if((a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[2][0]==a[0][0])){
                if(a[0][0]=='*'){
                    cout<<"player 1 has won";

                }
                else{
                    cout<<" player 2 has won";
                }
                
                f=1;
                break;
            }
            else if((a[0][1]==a[1][1] && a[1][1]==a[2][1] && a[2][1]==a[0][1])){
                if(a[0][1]=='*'){
                    cout<<"player 1 has won";

                }
                else{
                    cout<<" player 2 has won";
                }
                
                f=1;
                break;
            }
            else if((a[0][2]==a[1][2] && a[1][2]==a[2][2] && a[2][2]==a[0][2])){
                if(a[0][2]=='*'){
                    cout<<"player 1 has won";

                }
                else{
                    cout<<" player 2 has won";
                }
                
                f=1;
                break;
            }
            else if((a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[2][0]==a[0][0])){
                if(a[0][0]=='*'){
                    cout<<"player 1 has won";

                }
                else{
                    cout<<" player 2 has won";
                }
                
                f=1;
                break;
            }
            else if((a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[2][0]==a[0][0])){
                if(a[0][0]=='*'){
                    cout<<"player 1 has won";

                }
                else{
                    cout<<" player 2 has won";
                }
                
                f=1;
                break;
            }
            else if((a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[2][2]==a[0][0])){
                if(a[0][0]=='*'){
                    cout<<"player 1 has won";

                }
                else{
                    cout<<" player 2 has won";
                }
                
                f=1;
                break;
            }
            else if((a[2][0]==a[1][1] && a[1][1]==a[0][2] && a[0][2]==a[2][0])){
                if(a[2][0]=='*'){
                    cout<<"player 1 has won";

                }
                else{
                    cout<<" player 2 has won";
                }
                
                f=1;
                break;
            }
            
            
            
           
        }
        n=n+1;
        cout<<endl;


                 
    }
    if(f!=1){
        cout<<"match tied";
    }
}


    
