document.addEventListener('deviceready', onDeviceReady, false);
document.getElementById('Show').addEventListener('click', ShowPassword, false);

function onDeviceReady() {
    
}

function ShowPassword() {
    var btn = document.getElementById("Password");
    var img = document.getElementById("Show-img");

    if (btn.type == "password") {
        btn.type = "text";
        img.src = "img/hide.png";
    } else {
        btn.type = "password";
        img.src = "img/view.png";
    }
}
