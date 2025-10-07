// script.js
document.addEventListener("DOMContentLoaded", () => {
    const fileInput = document.createElement("input");
    fileInput.type = "file";
    fileInput.accept = "image/*";

    const imgPreview = document.createElement("img");
    imgPreview.style.maxWidth = "500px";
    imgPreview.style.display = "block";
    imgPreview.style.marginTop = "20px";

    document.body.appendChild(fileInput);
    document.body.appendChild(imgPreview);

    fileInput.addEventListener("change", (event) => {
        const file = event.target.files[0];
        if (!file) return;

        const reader = new FileReader();
        reader.onload = (e) => {
            imgPreview.src = e.target.result;
        };
        reader.readAsDataURL(file);
    });
});
