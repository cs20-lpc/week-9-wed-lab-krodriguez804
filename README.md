# Week 9 Wed Lab

## Directions

You will be implementing the Queue ADT as a circular array-based class. The `Queue` abstract class is already given to you, along with the header file for the `ArrayQueue` class, and a skeleton of its implementation file.

You are also in charge of writing your own driver program to test your `ArrayQueue` class. Be thorough with your testing by checking all the operations in different scenarios and with various data types.

## Notes

- If you need to access the `length` attribute in your `ArrayQueue` class, you need to write it as `this->length`
- The `buffer` attribute is meant to be a fixed-size, dynamic array
- The class needs to keep track of the indices for the front and back of the queue (that's what the `frontIndex` and `backIndex` attributes are for, respectively)
- There are a number of operations that need to consider if it's invalid for it to be called: in those scenarios, make sure to `throw` a `string` exception explaining the error, like this
```C++
throw string("message goes here");
```

