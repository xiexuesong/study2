#include <iostream>
#include "ch1/Sales_item.h"
#include <string.h>
using namespace std;
int main01() {
/*    Sales_item salesItem;
    cin >> salesItem;
    cout << salesItem << endl;*/

/*    Sales_item salesItem1 , salesItem2;
    cin >> salesItem1 ;
    cout << endl;
    cin >> salesItem2;
    Sales_item sum = salesItem1 + salesItem2;
    cout << sum << endl;
    salesItem1.operator+=(salesItem2);
    cout << salesItem1 << endl;*/
  /*  Sales_item salesItem;
    Sales_item bookNo[20];
    Sales_item[20] bookList = {};
    int count = 0 ;
    while (true){
        cin >> salesItem;
        int equals = strcmp(salesItem.isbn().c_str() , "c");
        if(equals != 0){
            break;
        }
        if(count >= 20){
            break;
        }
        bookNo[count] = salesItem;
        count ++;
    }
    for(int i = 0 ; i < bookNo)*/
    return 0;
}

int main(){
    int a = 20 , b = 21;
    int *p1 = &a;
    int *p2 = p1;
    cout << *p2 << endl;
    return  0;
}


