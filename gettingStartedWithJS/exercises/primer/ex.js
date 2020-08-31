// TODO: define addFavoriteBook(..) function

// TODO: define printFavoriteBooks() function

var favoriteBooks = [];

function addFavoriteBook(bookName) {
    let check;
    for (let i = 0; i <= favoriteBooks.length; i++) {
        if (bookName.includes(favoriteBooks[i]) === true) {
            check = true;
        }
    }
    if (check === true) {
        return;
    } else {
        return favoriteBooks.push(bookName);
    }
}

function printFavoriteBooks(bookNumber) {
    console.log(favoriteBooks[bookNumber]);
}

addFavoriteBook("A Song of Ice and Fire");
addFavoriteBook("The Great Gatsby");
addFavoriteBook("Crime & Punishment");
addFavoriteBook("Great Expectations");
addFavoriteBook("Great Expectations");
addFavoriteBook("You Don't Know JS");

// TODO: print out favorite books

for (let i = 0; i <= favoriteBooks.length; i++) {
    console.log(favoriteBooks[i]);
}
