<h1>Leetcode Question Bank (HacktoberFest 2021 ⭐)</h1>
<h4>This is hacktoberfest 2021 valid repository! </h4>
<p>Do contribute and earn swags </p>
All the leetcode questions and solutions
<a href="https://leetcode.com/code1511/">My Leetcode Handle</a>
<h4>Some greate articles to learn DP</h4>
<a href="https://github.com/code1511/Leetcode_Sol/blob/main/Dynamic%20Programming/DP.md">Link</a>

<a href="https://leetcode.com/problems/house-robber-iii/discuss/79330/Step-by-step-tackling-of-the-problem">Link 2</a>

<h2>Implementation of a Hash-map data structure</h2>
<br>
<h3>What is a HashMap?</h3>
<p>
A HashMap is a data structure that is able to map certain keys to certain values. The keys and values could be anything. For example, if I were making a game, I might link every username to a friends list, represented by a List of Strings.

Why use a HashMap?

HashMaps are much faster for retreiving data than arrays and linked lists. A sorted array could find a particular value in O(log n) with binary search. However, a HashMap can check if it contains a particular key in O(1). All keys must be unique.

How do HashMaps work?

HashMaps use an array in the background. Each element in the array is another data structure (usually a linked list or binary search tree). The HashMap uses a function on the key to determine where to place the key's value in the array. For example, if my HashMap accepts Strings...possible hash functions can be:

A. Return the ASCII value of the first letter.
B. Return the sum of the ASCII values of every character in the String.
C. Return the ASCII value of the last character in the String.
The value returned will determine the index in which the value goes into the array.

But Wait! There's a Problem!

It is possible that the returned value will be outside of the array's bounds. Therefore, we are supposed to mod the returned value by the arrays length.

return Math.abs(number%hashMapArray.length);
Collisions:

Isn't it possible that multiple keys will make the hash function generate the same index? Yes. For example, if we used the first hash function shown above in a hash map of strings...any two Strings that start with the same letter will be given the same array index.

This is called a collision.

How do we handle collisions?

One collision handling technique is called Chaining. Since every element in the array is a linked list (or similar data structure), multiple keys that have the same hash value will be placed in the same linked list or "bucket". Afterwards, the hash map is able to retrieve values by calculating the hash code with the hash function, and searching the particular linked list to see if it contains a value with the same key.

A good hash function must be written to avoid collisions.

Advantages to Chaining:

-Array cannot overflow

-Data can be easily removed

Disadvantages to Chaining:

-May suffer a performance hit if buckets contain very long linked lists.

The total number of entries to the number of buckets is called the load factor. If the load factor is too low, a lot of space is wasted. If the load factor is too high, the advantage of hashing is lost. A good compromise on load factor is .75
  </p>

