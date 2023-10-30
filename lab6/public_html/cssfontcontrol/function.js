function intToPx(value) {
    return value + "px";
}
function color_changer() {
    var border_R = document.getElementById("border_R").value;
    var border_G = document.getElementById("border_G").value;
    var border_B = document.getElementById("border_B").value;
    var b_width = document.getElementById("b_width").value;
    var bg_R = document.getElementById("bg_R").value;
    var bg_G = document.getElementById("bg_G").value;
    var bg_B = document.getElementById("bg_B").value;
    var para = document.getElementById("para");
    var b_width = document.getElementById("b_width").value; 
    b_width = intToPx(b_width)
    para.style.borderColor = `rgb(${border_R},${border_G},${border_B})`;
    para.style.borderWidth = b_width;
    para.style.backgroundColor = `rgb(${bg_R},${bg_G},${bg_B})`;
}
