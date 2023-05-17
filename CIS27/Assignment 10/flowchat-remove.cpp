+--------------+
|  Remove(key) |
+--------------+
    |
    v
+--------------+
|   Create     |
|  Hash using  |
| (Hash Func ) |
+--------------+
    |
    v
+-----------------+
| while condition |
| if not NULL     |
| and key matches |
+-----------------+
    |  (true)
    v
+-----------------+
| Breaks loop     |
| if key is found |
+-----------------+
    |
    v
+---------------------+
| creates a new index |
| or finds next       |
| avaliable index     |
+---------------------+
    |
    v
+-------------------+
| If index is NULL  | 
| / empty then      | 
| element not found |
| at key            |
+-------------------+
    | 
    v
+--------------------+
| Deletes exisiting  | 
| HashEntry at index |
+--------------------+
    |
    v
+-----------------+
| Print Element   |
| Deleted         |
+-----------------+