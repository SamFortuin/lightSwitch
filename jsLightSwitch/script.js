var btn = document.createElement('button');
btn.style.margin = '10px';
btn.innerHTML = '...';
document.body.appendChild(btn);

// schijf hier tussen je code

// init
btn.innerHTML = 'Switch light ON';
document.body.style.backgroundColor = 'black';
btn.value = 'off';

btn.addEventListener('click', ()=>{
    if (btn.value === 'off'){
        btn.innerHTML = 'Switch light OFF'
        btn.value = 'on';
        document.body.style.backgroundColor = 'yellow';
    }
    else if (btn.value === 'on'){
        btn.value = 'off';
        document.body.style.backgroundColor = 'black';
        btn.innerHTML = 'Switch light ON'
    }
    console.log(btn.value)
})


// schijf hier tussen je code