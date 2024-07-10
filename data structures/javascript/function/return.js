//******* exercise 38-43/


// function multiply(m, n) {
//     return m * n;
// }

// function isShortsWeather(temperature) {
//     if (temperature >= 75) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }

// function lastElement(ipl) {
//     if (ipl.length === 0) {
//         return null;

//     }
//     else {
//         return ipl[ipl.length - 1];
//     }
// }

function argument(string) {
    return string[0].toUpperCase + string.slice(1, string.lenght - 1)
}