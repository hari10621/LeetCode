SELECT p.firstName,p.lastName,a.city,a.state
FROM Person as p 
LEFT JOIN Address as a ON p.personID = a.personID;