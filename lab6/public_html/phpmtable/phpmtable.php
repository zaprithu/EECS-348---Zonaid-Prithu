<?php
if (isset($_POST['size'])) { 
    $n = intval($_POST['size']);
    $n = $n + 1;
    echo "<table border='1'>";
    for ($i = 0; $i < $n; $i++) {
        echo "<tr>";
        for ($j = 0; $j < $n; $j++) {
            if ($i == 0) {
                echo "<td>" . $j . "</td>";
            }
            else if ($j == 0) {
                echo "<td>" . $i . "</td>";
            }
            else {
                echo "<td>" . ($i*$j) . "</td>";
            }
        }
        echo "</tr>";
    }
    echo "</table>";
}
?>