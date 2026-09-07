Select x, y, z, CASE when x + y > z and y + z > x and x + z > y then 'Yes'
ELSE 'No' END AS "triangle" from triangle;
