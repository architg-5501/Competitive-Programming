// let con = ['hello', 'my', 'name', 'is', 'x'];
// for (let i = 0; i < con.length; i++) {
//     console.log(con[i]);     //normal way to print array elements
// }

// for (let sub of con) {
//     console.log(sub);     //using for..of loop
// }

// ___________________****___________________________



const seatingChart = [['jay', 'kid', 'hid'], ['tih', 'kio', 'leo'], ['kim', 'coi', 'pop']];
for (let i = 0; i < seatingChart.length; i++) {
    let row = seatingChart[i];
    for (let j = 0; j < row.length; j++) {
        console.log(row[j]);
    }
}

for (let row of seatingChart) {
    for (let element of row) {
        console.log(element);
    }
}

for (let char of "virat kohli") {
    console.log(char);
}