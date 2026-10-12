<div align="center">

# my_ls

**La commande ls, recodée avec les appels système.**

<img alt="C" src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"/> <img alt="Make" src="https://img.shields.io/badge/Make-427819?style=for-the-badge&logo=gnu&logoColor=white"/> <img alt="Unix" src="https://img.shields.io/badge/Unix-333333?style=for-the-badge&logo=linux&logoColor=white"/>

<sub>Projet solo · 2022</sub>

</div>

<br/>

<p align="center"><img src=".github/assets/term-my_ls.png" alt="my_ls" width="820"/></p>

## En deux mots

Une version de `ls` écrite avec `opendir`, `readdir` et `stat`.

## Ce que ça fait

- Listing du dossier courant ou d'un chemin
- `-a` : fichiers cachés
- `-l` : permissions, liens, propriétaire, groupe, taille, date

## Sous le capot

On lit le dossier avec `readdir`, puis pour le format long on appelle `stat` sur chaque entrée, et `getpwuid` / `getgrgid` pour le propriétaire et le groupe.

## Lancer le projet

```bash
make
./my_ls -l
```
