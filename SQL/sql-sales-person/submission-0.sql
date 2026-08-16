-- Write your query below
SELECT s.name
FROM sales_person s
WHERE NOT EXISTS (
    SELECT o.sales_id
    FROM orders o JOIN company c
    ON c.com_id = o.com_id
    WHERE s.sales_id = o.sales_id AND c.name = 'CRIMSON'
)