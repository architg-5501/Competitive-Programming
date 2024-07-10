let todo = prompt("enter whatever you want");
let todos = ['do your work', 'mind your own buisness']
while (todo !== "quit") {
    if (todo === "list") {
        for (let i = 0; i < todos.length; i++) {
            console.log(`${i}: ${todos[i]}`);
        }
    }
    else if (todo === "new") {
        let input = prompt("enter items to add in the list");
        todos.push(input);
        console.log(`${input} has been added in the list`);
    }
    else if (todo === "delete") {
        let index = parseInt(prompt("enter the index you want to delete"));

        let deleted = todos.splice(index, 1);
        console.log(`ok deleted ${deleted[0]} `);
    }
    todo = prompt('enter again');
}
console.log("ok you decided to quit");