Q-1: What is the purpose of a C++ list?
Ans: To store elements in a doubly linked-list data structure.


Q-2: Which of the following operations can be performed on a C++ list?
Ans: 
✔ Insertion and deletion at the beginning
✔ Insertion and deletion at the end
✔ Insertion and deletion at a specific position (iterator ব্যবহার করে)
সবই করা যায়।
Correct Answer: ☑ All of the above


Q-3: Which function is used to insert an element at the beginning of a C++ list?
Ans: 
list<int> myList;
myList.push_front(10);


Q-4: Which function is used to remove a value from C++ list using the value only?
Ans: 
list<int> myList = {10, 20, 30, 20, 40};
myList.remove(20);


Q-5: What is the time complexity for accessing an element in a C++ list by index (without head and tail)?
Ans: O(n)


Q-6: Which function is used to sort a C++ list in ascending order?
Ans: 
list<int> myList = {40, 10, 30, 20};
myList.sort();

Descending order-এ sort করতে চাইলে:
myList.sort(greater<int>());


Q-7: Which function is used to reverse the order of elements in a C++ list?
Ans: 
list<int> myList = {10, 20, 30, 40};
myList.reverse();
20 40 10 30


Q-8: What is the time complexity for inserting an element at the end of a C++ list?
Ans: O(1)


Q-9: Which function is used to remove duplicate elements from a C++ list?
Ans: 
list<int> myList = {10, 10, 20, 20, 30, 30};
myList.unique();
10 20 30


Q-10: Which function is used to check if a C++ list is empty?
Ans: 
list<int> myList;
    if (myList.empty())
        cout << "List is empty";
    else
        cout << "List is not empty";

    Output: List is empty