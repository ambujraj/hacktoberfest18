// Testing:

f=

// Golfed code:

n=>[...`11111113ss17ss1pp11117pp3ppp
97dj3dj7822j78z213e17z3v8397gm78212
7f3kf3k1z27k7z20021200k17fppk1z001z
d7983987j2287jz2ss1lss2aabj3d7987j2aa3aza`.replace(/[123]/g,x=>[,777,'77z',77][x])].map(a=>isNaN(i=parseInt(a,36))?a:'- /\\_|'[n%2?i%6:~~(i/6)]).join``

// Testing:

;document.body.appendChild(document.createElement('pre')).innerHTML=f(0);
document.body.appendChild(document.createElement('pre')).innerHTML=f(1);
document.body.appendChild(document.createElement('pre')).innerHTML=f(2);
document.body.appendChild(document.createElement('pre')).innerHTML=f(35);
