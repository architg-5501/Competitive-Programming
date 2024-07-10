for (let i = 0; i < 5; i++) {
    console.log("my name");
}
console.log(i);
for (var i = 0; i < 5; i++) //var function reduces the problem of blocked scope
{
    console.log("my name");
}
console.log(i);