<?php


// Let's connect to host
$con= mysqli_connect("localhost", "root", "", "sfpark") or DIE('Connection to host is failed, perhaps the service is down!');
// Select the database
mysqli_select_db($con,"sfpark") or DIE('Database name is not available!');

?>