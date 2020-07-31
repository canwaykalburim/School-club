function getParameterByName(name, url) {
  if(!url)  url = window.location.href;
  name = name.replace(/[\[\]]/g, '\\$&');
  var regex = new RegExp('[?&]' + name + '(=([^&#]*)|&|#|$)'), results = regex.exec(url);
  if(!results)  return null;
  if(!results[2])  return '';
  return decodeURIComponent(results[2].replace(/\+/g, ' '));
}

var name = getParameterByName('name');
var number = getParameterByName('number'); 

function changeUser() {
  document.getElementById('info').innerHTML = 
  `<div class="user">` +
  `<div class="data">${number}</div>` +
  `<div class="data">${name}</div>` +
  `</div>`;
}