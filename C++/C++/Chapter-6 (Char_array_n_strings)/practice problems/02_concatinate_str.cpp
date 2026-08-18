// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char name[10] = "Rutik";
//     char surname[] = "Shinde";

//     strcat(name,surname);
//     cout << name;
//     return 0;
// }

#include<iostream>
using namespace std;

int getlength(char arr[])
{
    int count = 0;
    int index = 0;
    while(arr[index] != '\0'){
        count++;
        index++;
    }
    return count;
}

void conacatarr(char a[],char b[]){
    int aIndex = getlength(a);
    int bIndex = 0;

    while(b[bIndex] != '\0'){
        a[aIndex] = b[bIndex];
        aIndex++;
        bIndex++;
    }
    a[aIndex]='\0';
}

int main(){
    char a[10] = "Rutik";
    char b[10] = "Shinde";
    
    conacatarr(a,b);
    cout << "printing a: " << a << endl;
    return 0;
}