body {
    background-color: #f4f4f4;
}

* {
    padding: 0;
    box-sizing: content-box;
    font-family: Arial, Helvetica, sans-serif;
}

header {
    text-align: center;
}

@media only screen and (min-width: 600px){ /* Számítógepes nézet */

* {
    margin: 0 0 0 20px;
}

header {
    margin: 50px 0 0 0;
}

section {
    display: grid;
    grid-template-columns: repeat(3, 1fr);
    grid-template-rows: repeat(4, 1fr);
    gap: 15px;
    place-content: center;
    margin: 150px 10px 0 0;
}

article {
    width: 80%;
    padding: 15px;
    box-shadow: 10px 10px 10px 1px lightgrey;
    background-color: #fcfcfc;
    border-radius: 15px;
}

article:nth-of-type(1) {
    grid-column: 2/3;
    grid-row: 1/3;
}

article:nth-of-type(2) {
    grid-column: 1/2;
    grid-row: 2/4;
}

article:nth-of-type(3) {
    grid-column: 2/3;
    grid-row: 3/5;
}

article:nth-of-type(4) {
    grid-column: 3/3;
    grid-row: 2/4;
}

img {
    margin: 100px 0 0 400px;
}

}

@media only screen and (max-width: 600px) { /*Mobilos nézet*/
    * {
        margin: 0 0 0 1%;
    }
}
