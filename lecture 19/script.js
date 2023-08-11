cont URL = 'http://'
cont  btn = document.querySelector('button');
cont catfacts = document.querySelector('.cat-fact');

btn.addEventlistener('click' , ()=>{
    catfacts.innertext = '';
    fatch (URL) 
})