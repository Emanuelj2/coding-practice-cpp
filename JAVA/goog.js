const fetch = require('node-fetch');  // Import node-fetch

async function print(docURL) {
  try {
    // Check if the URL includes "/edit" and convert it to export format
    if (docURL.includes("/edit")) {
      docURL = docURL.replace("/edit", "/export?format=txt");
    }

    // Fetch the content from the URL
    const response = await fetch(docURL);
    if (!response.ok) {
      console.log("Failed to fetch the document");
      return;
    }

    // Read the document text
    const text = await response.text();
    const lines = text.trim().split('\n');  // Fixed the line split to use '\n' instead of '/n'

    const points = [];

    // Parse the content into an array of points
    for (const line of lines) {
      if (line.trim() === "") {
        continue;
      }

      const parts = line.split(/\s+/);
      if (parts.length !== 3) {
        continue;
      }

      const [char, xStr, yStr] = parts;

      const x = parseInt(xStr, 10);
      const y = parseInt(yStr, 10);

      points.push({ char, x, y });
    }

    // If no points were found, return
    if (points.length === 0) {
      console.log("No points found in the document");
      return;
    }

    // Calculate max X and Y to initialize the grid size
    const maxX = Math.max(...points.map(p => p.x));
    const maxY = Math.max(...points.map(p => p.y));

    // Initialize the grid with spaces
    const grid = Array.from({ length: maxY + 1 }, () => Array(maxX + 1).fill(' '));

    // Place characters in the grid based on points
    for (const { char, x, y } of points) {
      grid[y][x] = char;
    }

    // Print the grid row by row
    for (const row of grid) {
      console.log(row.join(''));
    }
  } catch (error) {
    console.log(error);
  }
}

// Test the function with a real Google Docs URL
const docURL = 'https://docs.google.com/document/d/e/2PACX-1vQGUck9HIFCyezsrBSnmENk5ieJuYwpt7YHYEzeNJkIb9OSDdx-ov2nRNReKQyey-cwJOoEKUhLmN9z/pub';
print(docURL);
