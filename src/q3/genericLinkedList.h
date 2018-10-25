
typedef void(*printData) (void *data);//defining the printer function

typedef struct listElementStruct {
	void* data;//changed the char* to void*
	size_t size;
	printData print;
	struct listElementStruct* next;
} listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(char* data, size_t size, printData print);

//Prints out each element in the list
void traverse(listElement* start);

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* after, char* data, size_t size, printData print);

//Delete the element after the given el
void deleteAfter(listElement* after);

int length(listElement* list);
void push(listElement** list, char* data, size_t size, printData print);
listElement* pop(listElement** list);void enqueue(listElement** list, char* data, size_t size, printData print);listElement* dequeue(listElement* list);
