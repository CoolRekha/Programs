package dsa.Stacks;

import dsa.Stacks.Exceptions.StackEmptyException;

public class StackUsingArray {
    private int data[];
    private int top; //is index of topmost element of stack

    public StackUsingArray(){
        data = new int[10];
        top = -1;
    }

    public StackUsingArray(int capacity){
        data = new int[capacity];
        top = -1;
    }

    public boolean isEmpty(){
        return (top == -1);
    }    //O(1)

    public int size(){
        return  top+1;
    }    //O(1)

    public int getTop() throws StackEmptyException {   //O(1)
        if (top == -1 || size() == 0) {
            //StackEmptyException
            StackEmptyException e = new StackEmptyException();
            throw e;
        }
        return data[top];
    }

    public void push(int elem) throws StackFullException {     //O(1) || O(n) worst case
        if (size() == data.length){
            //every time we need to add more elements we can double our array capacity.
            doubleCapacity();
        }
        top++;
        data[top] = elem;
    }

    private void doubleCapacity() {        //O(n)
        int temp[] = data;
        data = new int[data.length * 2];
        for (int i = 0; i < temp.length; i++) {
            data[i] = temp[i];
        }
    }

    public int pop() throws StackEmptyException{      //O(1)
        if (size() == 0){
            //StackEmptyException
            StackEmptyException e = new StackEmptyException();
            throw e;
        }
        int temp = data[top];
        top--;
        return temp;
    }
}
