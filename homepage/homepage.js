document.addEventListener('DOMContentLoaded',function(){
    let playbutton=document.getElementById('play');
    let mutebutton=document.getElementById('mute');
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
    mutebutton.addEventListener('click',function(){
        if(video.muted)
        {
            video.muted=false;
            mutebutton.textContent='Mute';
        }
        else
        {
            video.muted=true;
            mutebutton.textContent='Unmute';
        }
    })
})