function selectionSort(arr) {
    const n = arr.length;
    for (let i = 0; i < n; i++) {
        let min_index = i;
        for (let j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        [arr[i], arr[min_index]] = [arr[min_index], arr[i]];
    }
    return arr;
}

function bubbleSort(arr) {
    let swapped;
    let n = arr.length - 1;

    do {
        swapped = false;
        for (let j = 0; j < n; j++) {
            if (arr[j] > arr[j + 1]) {
                [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
                swapped = true;
            }
        }
        n--;
    } while (swapped);

    return arr;
}

const array = [10, 7, 8, 9, 1, 5];

console.log(selectionSort(array));

console.log(bubbleSort(array));