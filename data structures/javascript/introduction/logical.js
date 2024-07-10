let password = prompt("enter your password");
if (password.length >= 6 && password.indexOf('') === -1) {
    console.log("valid password horarah")
} else {
    console.log("invalid sorry")
}