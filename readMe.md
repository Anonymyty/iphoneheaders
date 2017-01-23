<h3> Welcome to my main GitHub repository! </h3>

This is home to my Cydia repository as well as my main site. 

If you have any questions, feel free to [reach out](https://ipadkid358.github.io/#contact) in whatever way's convenient 

_____

If you're poking around this repo, I'll quickly explain what everything does: 

- **assests** - this has everything that allows my [front end site](https://ipadkid358.github.io/) to look nice
- **debs** - this folder contains all the Debian package on my Cydia repo
- **js** - lets Cydia know that this is an acceptable Cydia repository 
- **CydiaIcon.png** - icon that shows up in Cydia under Sources and at the bottom of packages hosted on my repo
- **Packages.bz2** - this is a specially compressed file for Cydia to decide what packages should be available from my repo
- **Release** - some more stuff for Cydia. Under Sources, the repo name is displayed. At the bottom of packages hosted on my repo, another name and a description is displayed. 
- **apple-touch-icon.png** - iOS devices use this as the picture used on Safari "Favorites" and when adding a site to the homescreen 
- **basicRepo.zip** - Pretty-much set-up Cydia repo
- **dpkg-gettext.pl** - used by dpkg-scanpackages 
- **dpkg-scanpackages** - script to create Packages which is a pain to do by hand, even for just one package 
- **favicon.ico** - picture used for bookmarks and tab thumbnails
- ***[anything]****.html** - previously mentioned front end site
- **packageMe** - script to run dpkg-scanpackges, put that packages file in the correct format, and push everything out to this GitHub repo
- **push** - similar script, just doesn't deal with the packages 
- **readMe.md** - this readMe, hopefully