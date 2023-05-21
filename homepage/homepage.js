document.addEventListener('DOMContentLoaded',function(){
    let playbutton=document.getElementById('play');
    let video=document.getElementById('video');
    playbutton.addEventListener('click',function(){
        if(video.paused)
        {
            video.play();
            playbutton.textContent='Pause';
        }
        else
        {
            video.pause();
            playbutton.textContent='Play';
        }
    })
})