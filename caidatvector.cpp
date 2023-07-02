#include <iostream>
using namespace std;
template <typename T>
class Vector
{
public:
	// initCapacity la dung luong ban dau cua
	// vector, co gia tri ngam dinh bang 16.
	Vector(int initCapacity = 16)
	{
	    size = 0;
	    capacity = initCapacity;
	    array = new T[capacity];
	}
	
	~Vector() 
	{
	    delete[] array;
	}
	
	// rhs (right-hand side) la vector ve phai cua phep gan.
	// this la con tro toi vector hien hanh, tuc la ve trai.
	Vector & operator=(Vector & rhs) 
	{
	    if (this != &rhs) // ngan can tu sao chep
		{
	        delete[] array;          // xoa mang hien tai
	        size = rhs.size;         // dat kich thuoc moi
	        capacity = rhs.capacity; // dat dung luong moi
	        array = new T[capacity]; // tao mang moi
	        
			// Sao chep cac phan tu tu phai sang trai
	        for (int i = 0; i < size; i++)
	            array[i] = rhs.array[i];
	    }
	    
	    return *this; // tra ve vector ve trai sau khi gan xong
	}
	
	// Tra ve kich thuoc vector.
	int getSize() 
	{
	    return size;
	}
	
	// Tra ve true neu vector rong, nguoc lai tra ve false.
	bool isEmpty() 
	{
	    return (size == 0);
	}
	
	// index la chi so cua phan tu can truy nhap.
	T & operator[](int index) 
	{
	    return array[index];
	}
	
	// newElement la phan tu moi can chen vao cuoi vector.
	void pushBack(T newElement) 
	{
	    // Gap doi dung luong neu vector day
	    if (size == capacity)
	        expand(2 * size);
	    
	    // Chen phan tu moi vao ngay sau phan tu cuoi cung
	    array[size] = newElement;
	
	    // Tang kich thuoc
	    size++;
	}
	
	// pos (position) la vi tri chen.
	// newElement la phan tu moi can chen.
	void insert(int pos, T newElement)
	{
	    // Gap doi dung luong neu vector day
	    if (size == capacity)
	        expand(2 * size);
	    
		// Dich cac phan tu sang phai de tao cho trong cho viec chen
	    for (int i = size; i > pos; i--)
	        array[i] = array[i - 1];
	        
	    // Dat phan tu moi vao vi tri chen
	    array[pos] = newElement;
	    
	    // Tang kich thuoc
	    size++;
	}
	
	// Xoa phan tu o cuoi vector.
	void popBack() 
	{
	    size--;
	}
	
	// Xoa tat ca cac phan tu.
	void clear() 
	{
	    size = 0;
	}
	
	// pos (position) la vi tri cua phan tu can xoa.
	void erase(int pos)
	{
	    // Dich cac phan tu sang trai de lap day cho trong de lai do viec xoa
	    for (int i = pos; i < size - 1; i++)
	        array[i] = array[i + 1];
	
	    // Giam kich thuoc
	    size--;
	}
	
	// In cac phan tu ra man hinh.
	void print()
	{
		for (int i = 0; i < size; i++)
			cout << array[i] << " ";
		cout << endl;
	}
		
private:
	int size;     // kich thuoc vector (so phan tu hien co)
    int capacity; // dung luong vector (suc chua)
    T * array;	  // con tro toi mang chua cac phan tu
        
    // Day la thao tac tro giup cho cac thao tac chen.
	// newCapacity la dung luong moi (phai lon hon kich thuoc).
	void expand(int newCapacity)
	{ 
	    if (newCapacity <= size)
	        return;
	
	    T * old = array;            // old tro toi mang cu
	    array = new T[newCapacity]; // array tro toi mang moi
	    
	    for (int i = 0; i < size; i++)
	        array[i] = old[i];      // sao chep phan tu tu mang cu sang mang moi
	    
		delete[] old;               // xoa mang cu
	    capacity = newCapacity;     // dat dung luong moi
	}
};

int main()
{
	Vector<int> v;
	v.pushBack(6);
	v.pushBack(2);
	v.pushBack(9);
	v.pushBack(1);
	v.pushBack(8);
	
	cout << "Cac phan tu: ";
	v.print();                                     // se in ra 6 2 9 1 8
	cout << "Kich thuoc: " << v.getSize() << endl; // se in ra 5
	
	v.insert(2, 7);
	cout << "Sau khi chen 7 vao vi tri 2: ";
	v.print();                                     // se in ra 6 2 7 9 1 8	
	
	v.popBack();
	v.erase(1);
	cout << "Sau khi xoa 8 va 2: ";
	v.print();                                     // se in ra 6 7 9 1
	
	return 0;
}