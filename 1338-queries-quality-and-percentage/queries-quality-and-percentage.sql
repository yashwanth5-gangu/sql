SELECT query_name,
    ROUND((SUM(rating/position)/COUNT(query_name)),2) AS quality,
    ROUND(SUM(IF(rating<3,1,0))/COUNT(query_name)*100,2) AS poor_query_percentage
FROM queries
GROUP BY query_name;



