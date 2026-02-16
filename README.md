# Data-Structure-Classification



TASK 2: Reasons where the data structure types are applied and reasons why.

1. Array:
Applications:Image processing, spreadsheets, database records.
Reason:
-O(1) random access
-Contiguous memory
-Very fast data retrieval

2. Linked List:
Applications:Browser history, music playlists, undo features.
Reason:
-Dynamic size
-Easy insertion and deletion anywhere

3. Stack:
Applications: Function calls, undo/redo, browser back button
Reason:
-Follows LIFO (Last In, First Out)
-Matches natural “last action first” behavior

4. Queue:
Applications: Printer jobs, task scheduling, customer service lines.
Reason:
-Follows FIFO (First In, First Out)
-Ensures fairness in processing

5. Tree:
Applications: File systems, XML/JSON parsing, database indexes
Reason:
-Hierarchical structure
-Efficient searching (O(log n))

6. Graph:
Applications: Social networks, GPS routing, recommendation systems
Reason:
-Represents relationships and connections
-Models real-world networks effectively



TASK 3: Give examples of applications that are using the data structure type and algorithm. Give reasons why.

1.	Array
•	Application Example: Microsoft Excel.
•	Algorithm: Binary Search.
•	Reason: Has fast lookup in huge table data.

2.	Linked List
•	Application Example: Spotify Playlist.
•	Algorithm: Transversal between songs.
•	Reason: Dynamic song removal/addition.

3.	Stack
•	Application Example: Chrome.
•	Algorithm: Push/Pop on page visit.
•	Reason: Perfect for ”go back” history.

4.	Queue
•	Application Example: Netflix (Kafka).
•	Algorithm: Producer-Consumer pattern.
•	Reason: Handles many messages fairly.

5.	Tree
•	Application Example: My SQL Database.
•	Algorithm: B+ Tree Indexing.
•	Reason: Searches through records in milliseconds.

6.	Graph
•	Application Example: Google Maps.
•	Algorithm: BFS.
•	Reason: Finds friends/routes in real-time.


TASK 4: Research how data structures and algorithms work within systems.

Data Structures and Algorithms is the driving force behind every modern system in the following ways:
•	Operating Systems - Queues are used for process scheduling (Round Robin Scheduling). Stack is used in function calls.
•	Databases - B-Trees (special trees) are used for indexing, so queries are done in log time, rather than scanning the whole database.
•	Networks - Graphs are used for routing (shortest path). Queues are used for buffering.
•	AI/ML - Decision Trees are used for image classification. Graphs are used in recommendation systems (Netflix recommends movies based on "similar users").
•	Big Tech - Facebook’s social graph, Google’s Knowledge Graph, Uber’s routing, etc., are built on these very data structures.
