
SELECT euni.unique_id, e.name FROM Employees e LEFT JOIN employeeuni euni on e.id = euni.id;