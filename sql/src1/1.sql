SELECT
    a.name AS author_name,
    b.title AS book_title
FROM
    authors AS a
INNER JOIN
    authored AS au ON a.id = au.author_id
INNER JOIN
    books AS b ON au.book_id = b.id
LIMIT 1