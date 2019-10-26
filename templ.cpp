#include<stdlib.h>
#include<string>
#include<initializer_list>
#include<iostream>

using namespace std;
// function templates
template<typename T>
T myMax(T x, T y){
	return (x>y)?x:y;
}

//funtion template to implement bubble sort
template<class T>
void bubbleSort(T a[], int n)
{
	for (int i=0;i<n-1;i++)
		for(int j=n-1;i<j;j--)
			if(a[j]<a[j-1])
				swap (a[j],a[j-1]);
}


/*class templates are useful when a class defines something that is independent 
of the data type. */

template<typename T>
class Array{
	
private:
	T* ptr;
	int size;
public:
	Array(T arr[],int s);
	void print();

};

template <typename T>
Array<T>::Array(T arr[], int s){
	ptr=new T[s];
	size=s;
	for(int i=0;i<size;i++)
		ptr[i]=arr[i];
}

template<typename T>
void Array<T>::print(){
	for(int i=0;i<size;i++)
		cout<<" " <<*(ptr+i);
	cout<<endl;
};

//more than one arguments to template

template <class T, class U>
class A{
    T m;
    U n;
    public:
    A(){
        cout<<"Contructor called"<<endl;

    }
};

int main(){
	/*cout<<myMax<int >(3,5)<<endl;
	double a[5]={10.14, 5.10, 30, 40, 20};
	int n=sizeof(a)/sizeof(a[0]);

	bubbleSort(a,5);


	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";

	}


	int arr[5]={1,2,3,4,5};
	Array<int> ab(arr,5);
	ab.print();
*/
    A<char, char> p;
    A<int , char> q;
    return 0;

}
