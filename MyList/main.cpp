#include "iostream"

using namespace std;

struct list
{
	/** 
    * структура
    */
	list *next;
	int value;  /*! численные данные*/
};

struct list *_begin = 0; /*! блаблабла */
struct list *_end = 0;

void set_element( struct list **_list, int n )
{
	list *present;
	for ( int i = 0; i < n; i++ ){
		present = (list*)malloc(1*sizeof(list));
		cout<< "Enter new integer element ";
		cin>> present->value;
		if ( i == 0 )
		{
			_begin = (*_list) = present;
		}
		else 
		{
			(*_list)->next = present;
			(*_list) = present;
		}
	}
	_end = (*_list);
}

void display_list( struct list _list, int n ) /*! блаблабла */
{
	_list = *_begin;
	cout<< "Display\n";
	for ( int i = 0; i < n; i++ ){
		cout<< _list.value <<"\n";
		if ( _list.next != _end->next )
			_list = (*_list.next);
	}
}

void delete_element( struct list **_list, int n ) /*! тут надо было подумать над этой функцией*/
{
	(*_list) = _begin;/*! блаблабла */
	list *present;
	int i, j;
	cout<< "enter element, that you want delete ";
	cin>> j;

	if ( j == 1 )
	{
		present = (*_list);
		if ( n > 1 )
			(*_list) = present->next;
		_begin = (*_list);
		free(present);
	}
	else
		for ( i = 1; i <= n; i++ ) //много блаблабла*/ 
		{
			if ( i + 1 == j )
			{
				present = (*_list)->next;
				if ( j != n);
					(*_list)->next = present->next;
				
				free( present );
				break;
			}
			if ( (*_list)->next != _end->next )
				(*_list) = (*_list)->next;
		}
		if ( j == n && n > 1)
			_end = (*_list);

}

/** 
* это задание было не на полтора часа
*/

void main()
{
	int N;
	struct list *_list = 0;
	cout<< "Enter number of elements ";
	cin>> N;

	set_element( &_list, N );
	display_list( *_list, N );
	
	while (1)	//ещёблаблабла*/ 
	{
		getchar();
		char c;
		cout<< "do you want delete element then enter y?\n";
		c = getchar();
		if ( c == 'y' ){
			delete_element ( &_list, N );
			N -= 1;
		}
		else break;
		display_list ( *_list, N );
	}
	system("pause"); /*! сделай паузу, скушай твикс */
}