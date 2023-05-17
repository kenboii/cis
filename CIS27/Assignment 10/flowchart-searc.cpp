+--------------+
|  Search(key) |
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
| and key is not  |
| created         |
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
    |  (true)
    v
+-----------------+
| Return -1       |
| (key not found )| 
+-----------------+
    |
    v
+-----------------+
| Else            |
| Return value of |
| found key       | 
+-----------------+