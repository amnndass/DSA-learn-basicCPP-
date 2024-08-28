// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     int count = 0;

//     while(i<n){
//         int j = 1;
//         while(j<=n){
//             cout << count+1 << " ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     } 
// }



// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     char a = '*';

//     while(i<=n){
//         int j = 0;
//         while(j<=i){
//             cout << '*' << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int n ;
//     cin>>n;
//     int i = 1;

//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout << i << " ";
//             j++; 
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     int count = 0;

//     while(i<=n){
//         int j = 1;

//         while(j<=i){
//             cout << count+1 << " ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
   
//     while(i<=n){
//         int value = i;
//          int j = 1;
//         while(j<=i){
//             cout << value +j << ' ' ;
//             j=j+1;
//         }
        
//         cout << endl;
//         i++;
//     }
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout << (i-j+1) << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i =0;
//     while(i<=n){
//         char a = 'a';
//         int j = 1;
//         while(j<=n){
//             char ch = (a+i)-1;
//             cout << ch;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

    
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;

//     while(i<=n){
//         char ch = 'A';
//         int j = 1;
//         while(j<=n){
//             char c = ch+j-1;
//             cout << c << ' ';
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int c = 64;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             char ch = c+=1;
//             cout << ch << ' ';
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }


// what did i do?????????????
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     char c = 'A';

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             char c = c+i-1;
//             cout << c << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i= 1;

//     while(i<=n){
//         int j = 0;
//         while(j<=n){
//             char c = 'A';
//             char ch = c+i+j-1;
//             cout << ch << "  ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream> 
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i= 1;
//     char ch = 'A';

//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             char c = ch + i -1 ;
//             cout << c << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     char c = 'A'-1;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             char ch = c+i+j-1;
//             cout << ch << "  ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     char c = 'A';

//     while(i<=n){
//         int l = n;
//         int j =1 ;
//         while(j<=i){
//             char ch = c+n-i+j;
//             cout << ch;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 16;

    

//     while(n!=0){
//         int mod = n%2;
//         if(mod == 0){
//             n = n/2;
//         }else{
//             cout << "false" << endl;
//             break;
//         }

//         cout << "iteration" << endl;
        
//     }
//     if(n==1){
//         cout << "true" << endl;
//     }
    
    
// }

#include <iostream> 
using namespace std;

int main(){
    
    char operation;
    int num1;
    int num2;

    cout << "enter num 1" << endl;
    cin>>num1;

    cout << "enter num 2" << endl;
    cin>>num2;

    cout << "enter operation " << endl;
    cin>>operation;

    switch (operation)
    {
    case '*':
        
        cout << num1*num2 << " answer" << endl;
        break;

    case '+':
        cout << num1 +num2 << " is the answer" << endl;
        break;

    case '-':
        cout << num1 - num2 << " is the answer" << endl;
        break;

    case '/':
        cout << num1 / num2 << " is the answer" << endl;
        break;

    case '%':
        cout << num1 % num2 << " is the answer" << endl;
        break;
    
    default:
        cout << "enter valid operation symbol" << endl;
        break;
    }

}