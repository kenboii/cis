+--------------+
|  Insert(key, |
|    value)    |
+--------------+
    |
    v
+--------------+
|   Create     |
|     Hash     |
|    using     |
| (Hash Func ) |
+--------------+
    |
    v
+-----------------+
| while condition |
| if not NULL     |
| and key is not  |
| already created |
+-----------------+
    |  (true)
    v
+---------------------+
| creates a new index |
| or finds next       |
| avaliable index     |
+---------------------+
    |
    v
+-----------------+
| If conditional  |
| checks for      |
| existing        |
| HashEntry       |
+-----------------+
    | (true)
    v
+-------------------+
| Deletes exisiting | 
| HashEntry         |
+-------------------+
    |
    v
+-----------------+
| Creates a new   |
| HashEntry       |
+-----------------+
    |
    v
+----------------+
| Print Element  |
| Inserted       |
+----------------+
