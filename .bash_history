sh /mnt/chromeos/MyFiles/Downloads/Koco_unix_2_9_29-tr-20240902_with_jre.sh 
pwd
ls
ln -s /mnt/chromeos/MyFiles/Downloads .
cp Downloads/EZCUT0.6.25 .
chmod +x EZCUT0.6.25 
./EZCUT0.6.25 
cp Downloads/gcodeFiles-20240923T175418Z-001.zip .
cp Downloads/workFiles-20240923T175408Z-001.zip .
ls
gunzip *.zip
cp /mnt/chromeos/archive/gcodeFiles-20240923T175418Z-001.zip/gcodeFiles .
cp -r /mnt/chromeos/archive/gcodeFiles-20240923T175418Z-001.zip/gcodeFiles .
cp -r /mnt/chromeos/archive/workFiles-20240923T175408Z-001.zip/workFiles .
ls
rm -rf *.zip
ls
./EZCUT0.6.25 
ls
ls workFiles/
ls -ltr workFiles/
pwd
ls
ls -tr Downloads
sh Downloads/Koco_unix_2_9_29-tr5-20241009_with_jre.sh 
alias
kojo
koco
ll
la
cat .bashrc
vim .bash_aliases
cat > .bash_aliases
cat .bash_aliases 
koco
source .bash_aliases 
kojo
koco
pwd
shell
csh
bash
bash
sudo apt update
sudo apt upgrade
sudo get
sudo apt get
sudo apt list
ls
sudo apt list > sudo_apt_list.out
grep emacs sudo_apt_list.out 
sudo apt get emacs
sudo apt emacs
sudo apt install emacs
ls
emacs &
h
history
ll
cd src
ls
ln -s kojo-denemeler/devinim .
ls
koco
ls
ls -la
more .bashrc
ls
ln -s Koco/bin/kojo .
./kojo &
ls
ls -l
git
cd src
ls
git clone https://github.com/bulent2k2/kojo.git
ls
cd kojo
ls
git status
git branch
it help branch
git branch -a
git status
cd src/kojo
git branch -a
git checkout turkish_keywords_2.13.x
git status
df -h
df -h .
ls
koco
bg
java -version
h
history
sh Downloads/Koco_unix_2_9_30-r9-tr-1-20241214_with_jre.sh 
koco
pwd
ls
cd src
ls
cd cpp
ls
make
fibo
./fibo
fibo -all
./fibo -all 10
./fibo -all 100
./fibo 100
pwd
ls
emacs &
git
pwd
ls
pwd
emacs &
cd
git branch -m main
git status
which emacs
gs
git status
git remote add origin https://github.com/kocoyla/dev-in-crostini.git
git push -u origin main
git pull
git pull origin main
git config pull.ff only
git pull origin main
git config pull.rebase false
git pull origin main
git pull --rebase origin main
git push -u origin main
alias gs='git status'
gs
git push
git config help
git config user
git config
git config --global
git config --get user
git config --global --get user
git config --global user.name "Ben Bulent Basaran"
git config --global user.email kocoyla.ogren@gmail.com
git config --global user.name "Kocoyla Ogren"
cat .git/config 
git push
git remote -v
git remote set-url origin git@github.com:kocoyla/dev-in-crostini
git push
git remote -v
git remote set-url origin https://github.com/kocoyla/dev-in-crostini.git
git remote -v
git push
cd 
sh Downloads/Koco_unix_2_9_30-r9-tr-3-20250118_with_jre.sh
git pull
git pull --rebase
git config --global credential.helper store
git config --global credential.helper cache
git push
cd src
ls
ll
git clone https://github.com/kocoyla/koco.git
ls
ll
du -h *
cd koco
ls
git branch
git branch -r
git co origin/turkish_keywords_2.13.x
git checkout origin/turkish_keywords_2.13.x
gs
git checkout master
git remote -v
git branch -r
git branch
git switch origin/turkish_keywords_2.13.x
git remote -v
git branch -r
git fetch
git branch -v -a
git switch turkish_keywords_2.13.x
sudo apt-list
sudo apt-get
sudo apt-get update
sudo apt-get upgrade
sudo apt-get list
sudo apt list
exit
curl -fL https://github.com/coursier/coursier/releases/latest/download/cs-x86_64-pc-linux.gz | gzip -d > cs && chmod +x cs && ./cs setup
sudo apt-get update
sudo apt-get dist-upgrade -y
sudo apt-get install default-jdk
sudo apt-get install sbt
sudo apt-get install scala
scala
java -v
java --version
curl -fL https://github.com/coursier/coursier/releases/latest/download/cs-x86_64-pc-linux.gz | gzip -d > cs && chmod +x cs && ./cs setup
curl -s https://get.coursier.io | bash -s -- -v
echo "deb https://repo.scala-sbt.org/scalasbt/debian all main" | sudo tee /etc/apt/sources.list.d/sbt.list
echo "deb https://repo.scala-sbt.org/scalasbt/debian /" | sudo tee /etc/apt/sources.list.d/sbt_old.list
curl -sL "https://keyserver.ubuntu.com/pks/lookup?op=get&search=0x2EE0EA64E40A89B84B2DF73499E82A75642AC823" | sudo apt-key add
sudo apt-get update
pwd
mkdir tmp
cd tmp
sbt
echo "deb https://repo.scala-sbt.org/scalasbt/debian all main" | sudo tee /etc/apt/sources.list.d/sbt.list
echo "deb https://repo.scala-sbt.org/scalasbt/debian /" | sudo tee /etc/apt/sources.list.d/sbt_old.list
curl -sL "https://keyserver.ubuntu.com/pks/lookup?op=get&search=0x2EE0EA64E40A89B84B2DF73499E82A75642AC823" | sudo apt-key add
sudo apt-get update
sudo apt-get install sbt
sbt
cd ../src/koco/
./sbt.sh clean package
sbt
exit
emacs &
java
uname -a
sudo apt install curl
top
gs
git push
gs
sudo apt-get install curl
sudo apt-get install zip
curl -s "https://get.sdkman.io" | bash
sdk help
bash
sdk help
sdk install leiningen
pwd
bash
lein
pwd
ls
cd src
ls
mkdir clj
cd clj
lein new app clojure-noob
ls
cd clojure-noob/
lein run
cd ~/
mv .emacs .emacs.d/ tmp/
exit
cd src/clj/
cd clojure-noob/
gs
lein
sdk install lein
sdk install leiningen
sdk update leiningen
leiningen
lein
lein
pwd
which lein
echo $JAVA_CMD
$JAVA_CMD -version
emacs &
j
jobs
exit
gs
emacs &
ls .emacs.d/
rm -rf .emacs.d/
ls tmp/
ls -a tmp/
mv Downloads/emacs-for-clojure-book1.zip .
unzip emacs-for-clojure-book1.zip 
ls
mv emacs-for-clojure-book1 .emacs.d
ls .emacs.d/
echo "[200~{:user {:plugins [[cider/cider-nrepl "0.8.1"]]}}
emacs &
lein
bash
exit
lein
scala
:help
ls
gs
