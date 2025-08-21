select s.name 
from salesperson s
where s.name not in(
SELECT s.name
FROM SalesPerson s
LEFT JOIN Orders o
  ON s.sales_id = o.sales_id
LEFT JOIN Company c
  ON o.com_id = c.com_id
where c.name='RED')

