[33mcommit 87dfd60a0ac86774ea9c172e750e01a3c9125f6c[m[33m ([m[1;36mHEAD -> [m[1;32mmain[m[33m)[m
Author: liberation <62626976+mohammedlatrach@users.noreply.github.com>
Date:   Sat Jan 20 00:40:38 2024 +0100

    i tried to make the carousel take all the width when the leftnavcontent ends, but it didn't work, also you might want to separate the section under the carousel into separate components if you want, i made it's background in '' color

[33mcommit 7a2906edd8a89f140f6e8a13d23df018a5e6e6a8[m[33m ([m[1;31morigin/main[m[33m, [m[1;31morigin/HEAD[m[33m)[m
Author: liberation <62626976+mohammedlatrach@users.noreply.github.com>
Date:   Sat Jan 20 00:14:25 2024 +0100

    tried to use *ngFor to display 'owl-items' component, but it doesn't work, something for you to do

[33mcommit 66dffc6636eaeeefdd0202022ab7771394eaccf6[m
Author: liberation <62626976+mohammedlatrach@users.noreply.github.com>
Date:   Fri Jan 19 23:55:22 2024 +0100

    'owl-carousel' component is a separate component now

[33mcommit 185b68f028d3f14f78c6bc2c39183b0b21436269[m[33m ([m[1;32mseparatingOwlIntoComponents[m[33m)[m
Author: liberation <62626976+mohammedlatrach@users.noreply.github.com>
Date:   Fri Jan 19 23:49:32 2024 +0100

    separated 'owl-stage' into a separate component

[33mcommit ea71104e39661337362c2586cb0f2148639fee91[m
Author: liberation <62626976+mohammedlatrach@users.noreply.github.com>
Date:   Fri Jan 19 23:35:23 2024 +0100

     'owl-item' component is separated and it works

[33mcommit ccdd5881bafec732555bf0ef18492011c37839e1[m
Author: liberation <62626976+mohammedlatrach@users.noreply.github.com>
Date:   Fri Jan 19 23:04:58 2024 +0100

    created a 'main' component for the 'home' component, and put some 'home' component code into it

[33mcommit 48c3a97c3d2d776f84964223f7eec3a691a1c2db[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Fri Jan 19 12:33:52 2024 +0100

    added code to home page

[33mcommit 82a5d6518295f64dd8f48b22d9273ead60b59853[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Fri Jan 19 12:33:18 2024 +0100

    changes on globale style.css file

[33mcommit 02ec03b7aab06c549857a037c1b3a5174bac9e96[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Fri Jan 19 11:46:45 2024 +0100

    initialized owl carousel package on the app.component.ts file

[33mcommit edc6f00cc8e6795f93fe8bdd44d5c8e75c2cbb19[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Fri Jan 19 11:45:35 2024 +0100

    added slider fonctionality for shop details page

[33mcommit 85c0474a6a15ab48540f549a06a6c63c07c3fc85[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Fri Jan 19 11:44:57 2024 +0100

    added the package responsable of sliding pictures

[33mcommit e492c0256eb7639f3f46f3051312a277b52d8156[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Fri Jan 19 11:18:08 2024 +0100

    added blog details HTML skeleton and fixed some issues

[33mcommit 9336371089bc0666baa4fb0ee5c1fed2713258ef[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Fri Jan 19 11:03:51 2024 +0100

    cleaned blog's HTML code

[33mcommit c86dda51ad970efe10363920087a04d05404dd24[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Fri Jan 19 10:49:47 2024 +0100

    added the blog HTML skeleton

[33mcommit fa724be88774033022ec0bd77149c162d48bebfb[m
Author: liberation <62626976+mohammedlatrach@users.noreply.github.com>
Date:   Thu Jan 18 21:30:20 2024 +0100

    I put the 'Login' and 'Revenir' icons inside the 'a' tag, so that when whether the text or the icons are clicked, the url changes

[33mcommit 1f298cbad7dbb8cbaee18831df9a32d5f3fe4f29[m
Merge: 638b165 aefc7f4
Author: liberation <62626976+mohammedlatrach@users.noreply.github.com>
Date:   Thu Jan 18 21:21:05 2024 +0100

    Merge branch 'main' of https://github.com/ElazzouziHassan/PharmacyWebApplication

[33mcommit 638b1658ee9356500acbf12f608e0ca4bc658098[m
Author: liberation <62626976+mohammedlatrach@users.noreply.github.com>
Date:   Thu Jan 18 21:18:02 2024 +0100

    usage of location instead of routerLink for 'Revenir' to go back home

[33mcommit aefc7f4096c345c1621ea95568ffde3af3acfae7[m
Author: liberation <62626976+mohammedlatrach@users.noreply.github.com>
Date:   Thu Jan 18 21:18:02 2024 +0100

    routerLink and the usage of Location service to navigate, when both used on the same HTML element, they don't work

[33mcommit 416c9afaf0d1aad49cb6cee18257d0406066cd64[m
Author: liberation <62626976+mohammedlatrach@users.noreply.github.com>
Date:   Thu Jan 18 21:12:40 2024 +0100

    i patched the url not changing when s'inscrire button is clicked, also still needs more refactoring

[33mcommit 70e66a6dbfb127054a88255c95ef8859659dd6ee[m
Author: liberation <62626976+mohammedlatrach@users.noreply.github.com>
Date:   Thu Jan 18 21:07:02 2024 +0100

    i patched the url not changing when login is clicked, bug mentioned by Said, it's just a path though, still needs more refactoring

[33mcommit c5c8b21b40d5ee676f9bf53bdfffc607d8cfabd8[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Thu Jan 18 20:38:37 2024 +0100

    fixed SWAL alert at seaching bar and added success icon to the alert

[33mcommit 8ddb8a60d2a79cd5528d6fb2fd090f0877f27f53[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Thu Jan 18 20:37:52 2024 +0100

    fixed swal at seachbar field

[33mcommit 0928f693b0ae20820beeaf5bfc1e423f79b7f15e[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Thu Jan 18 20:34:46 2024 +0100

    added Swal to the subscribe Button

[33mcommit b8240facec9d100e24abcb21f6bb95d84ac20f85[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Thu Jan 18 20:33:28 2024 +0100

    added Swal to the subscribe Button

[33mcommit 4b1e59eb8e1da72642629963efe6689314525cbf[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Thu Jan 18 20:32:46 2024 +0100

    cleaned Footer subscribe Field

[33mcommit 0d3b03186b010d0a452215f999425bf60582989a[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Wed Jan 17 22:09:27 2024 +0100

    cleaning code

[33mcommit 9f27cad207730d54babf2a64c7479630d75ba891[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Wed Jan 17 11:05:33 2024 +0100

    added some http request methods to users service

[33mcommit f83d126a056ed7c12d1e123dbf113c752b11f666[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Wed Jan 17 11:00:12 2024 +0100

    added some HttpRequests for product Service

[33mcommit 0d001207dcdf686e2a9e75d1118414b1a997499a[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Wed Jan 17 10:59:47 2024 +0100

    added some HttpRequests for category Service

[33mcommit ee6da4826a75a510a0504db8b33489041279873c[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Wed Jan 17 10:45:54 2024 +0100

     updated searchallcategoriesComponant

[33mcommit 694535284ac9860ac94c60a88d521f2ffc835f3e[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Wed Jan 17 10:31:41 2024 +0100

    cleaned Shop Page

[33mcommit ef6c9546ba02f1246813e463be1908a8cc598a22[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Wed Jan 17 09:58:52 2024 +0100

    added services Folders which contains categories,customers,orders,products and users Services

[33mcommit 2b819faa1e0c5e8926563f147fbe2eedb324441c[m
Merge: 721955a d07d107
Author: KabiraEttalbi <kabiraettalbi@gmail.com>
Date:   Tue Jan 16 23:46:32 2024 +0100

    Merge branch 'main' of github.com:ElazzouziHassan/PharmacyWebApplication

[33mcommit 721955ac450cb2d7a79c25e8dfebce49463b486a[m
Author: KabiraEttalbi <kabiraettalbi@gmail.com>
Date:   Tue Jan 16 23:46:19 2024 +0100

    factories and seeders created

[33mcommit d07d107b4eb25cd57ada2a55b0fa26f6172a0afa[m
Merge: 289d86a e53d4ed
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Tue Jan 16 23:33:24 2024 +0100

    Merge branch 'main' of https://github.com/ElazzouziHassan/PharmacyWebApplication

[33mcommit 289d86ab63c2cffb3a9a4e6a61e69288974f128c[m
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Tue Jan 16 23:32:59 2024 +0100

    Le 'SignUpComponent' maintenant s'affiche dans le même page du 'LoginComponent', il reste à 'cleaner'/nettoyer ces deux composants pour pouvoir continuer à avancer dans le projet

[33mcommit e53d4ed909d57727a492137decb025bc6d6711b2[m
Merge: ed65e45 3326f74
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Tue Jan 16 22:43:25 2024 +0100

    Merge branch 'main' of https://github.com/ElazzouziHassan/PharmacyWebApplication

[33mcommit ed65e45d11c49ba48ed11e57ee2ab63cf5390005[m
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Tue Jan 16 22:42:12 2024 +0100

    Modification de la mise en page et des styles des pages 'LoginComponent' et 'SignUpComponent'

[33mcommit 3326f74a02dc48289f2274c469df457fa20b26a7[m
Merge: ca84fde aa5ee2e
Author: KabiraEttalbi <kabiraettalbi@gmail.com>
Date:   Tue Jan 16 22:35:22 2024 +0100

    Merge branch 'main' of github.com:ElazzouziHassan/PharmacyWebApplication

[33mcommit ca84fde8cc87c5efa7d19b4b3725a5765b28db8a[m
Author: KabiraEttalbi <kabiraettalbi@gmail.com>
Date:   Tue Jan 16 22:34:33 2024 +0100

    updates on order_product mogration, Order, Product and OrderProduct models

[33mcommit aa5ee2e3738573273a4a259f460757fd40c29439[m
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Tue Jan 16 22:08:20 2024 +0100

    Le 'SignUpComponent' maintenant s'affiche dans le même page du 'LoginComponent', il reste à 'cleaner'/nettoyer ces deux composants pour pouvoir continuer

[33mcommit 5671eb7d6486efb63e01b7d80eceb6d619b9c80d[m
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Mon Jan 15 18:28:50 2024 +0100

    Modification fini du 'LoginComponent', Veuillez la tester en cliquant sur Login dans le top du page

[33mcommit be6a3637f3a5737114081ab106b21e8928e2de58[m
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Mon Jan 15 18:01:56 2024 +0100

    Ajout de l'affichage conditionnelle du 'LoginComponent'

[33mcommit e578a82cd235a2426bd0cd0e8d926d6d51ca5aba[m
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Mon Jan 15 17:59:49 2024 +0100

    Après le déplacement et la séparation du composant 'top-header' du componsant 'navbar', le parent de 'top-header' est maintenant 'app-root', le but est d'afficher le 'LoginComponent' tous seul

[33mcommit 25a8068f5fddd46780693bd007933d58be2780ad[m
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Mon Jan 15 17:55:37 2024 +0100

    app-front, avant le déplacement de séparer le composant 'top-header' du componsant 'navbar', 'navbar' était le parent, pour que le 'top-header' persiste et s'affiche dans tous les pages, aussi c'est pour régler le composant login pour qu'il s'affiche dans une page à part, le 'top-header' s'affiche aussi dans la page Login

[33mcommit ed0d45e01768ad83b62a54498ce9d1e4e4df3cc1[m
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Sun Jan 14 20:23:01 2024 +0100

    HEAD issue, because of merge

[33mcommit 833c2e9219b4bbbf2a8f194420de61ccd8a01ea1[m
Merge: 0636d37 c1e06f9
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Sun Jan 14 17:59:49 2024 +0100

    fixed the main page layout, maintenant le LeftAside 'Toutes les Catégories' est un component à lui seul, la place ou on cherche les catégories est aussi dans le composant 'searchallcategories', les deux composants reste affichés lorsqu'on navigue de HOME/SHOP/PAGES/BLOG/CONTACT

[33mcommit 0636d37408b24e64701eef027e63f2b26f2ac47c[m[33m ([m[1;32mfixingTheMainLayout[m[33m)[m
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Sun Jan 14 17:46:32 2024 +0100

    fixed the main page layout, maintenant le LeftAside 'Toutes les Catégories' est un component à lui seul, la place ou on cherche les catégories est aussi dans le composant 'searchallcategories', les deux composants reste affichés lorsqu'on navigue de HOME/SHOP/PAGES/BLOG/CONTACT

[33mcommit c1e06f91b428013fb1e61916540cc63b1826790d[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Sun Jan 14 15:28:41 2024 +0100

    changes

[33mcommit 9233872dafe8342ee82265b1c2f5e605c68cf081[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Sun Jan 14 14:58:31 2024 +0100

    changes

[33mcommit a64de8a2b1d3a5d5e901ea65f02757c76bea8180[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Sun Jan 14 14:24:51 2024 +0100

    changes username input

[33mcommit d23b0a487c4ad35d97502ef2e856c04ab384adb6[m
Merge: 4ce93ef a45ca2b
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Sun Jan 14 14:21:43 2024 +0100

    changes

[33mcommit 4ce93efcc96607f143920c8fa40a9f27a5a75dc2[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Sun Jan 14 14:18:12 2024 +0100

    changes in login and sign up pages

[33mcommit a45ca2b40cd2ea7163d5904f813c67f6a0a7a0ad[m
Merge: fb200cd df15c39
Author: KabiraEttalbi <kabiraettalbi@gmail.com>
Date:   Sun Jan 14 14:12:34 2024 +0100

    Merge branch 'main' of https://github.com/ElazzouziHassan/PharmacyWebApplication

[33mcommit df15c39165e273b4b9b683c2da6eb1c086e95d79[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Sun Jan 14 13:59:31 2024 +0100

    changes on login page

[33mcommit fb200cd353c6136475fe044c382ad35088fff3b7[m
Merge: fc04ffd 6895ea2
Author: KabiraEttalbi <kabiraettalbi@gmail.com>
Date:   Sun Jan 14 13:59:06 2024 +0100

    commit

[33mcommit fc04ffd96773eaf2aa250f88517ffcea393835c2[m
Author: KabiraEttalbi <kabiraettalbi@gmail.com>
Date:   Sun Jan 14 13:55:46 2024 +0100

    database migration and models

[33mcommit 190749837dbac8a52d599f186e18b0d3bf31c9ae[m
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Sun Jan 14 13:52:39 2024 +0100

    Modification, pour que le LeftAside 'Toutes Les Catégories' ne fera pas partie de 'navbar' mais ce sera une partie à part

[33mcommit 15678998df757edac3ffd4dbf46400652be4e603[m
Author: Tahiri Said <said.tahiri@hotmail.com>
Date:   Sun Jan 14 13:41:01 2024 +0100

    added routerLink

[33mcommit 6895ea216f4d277311fc7be02d2575c56c514cbc[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Sun Jan 14 13:25:55 2024 +0100

    changes

[33mcommit 2c9a88a25cd3900d0b450e53a905df466f392e50[m
Merge: 667dcd4 3ccff4e
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Sun Jan 14 13:19:43 2024 +0100

    Merge branch 'main' of https://github.com/ElazzouziHassan/PharmacyWebApplication
    merge# the commit.

[33mcommit 3ccff4ec304c02bcd3d9dd0437323c2d1d55b24d[m[33m ([m[1;32mfixingTheNavBarComponent[m[33m)[m
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Sun Jan 14 13:17:11 2024 +0100

    finished fixing

[33mcommit 9d2269fba3dcd940a2b268672fc986b885efd0fc[m
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Sun Jan 14 12:54:57 2024 +0100

    fixed the navbar

[33mcommit 667dcd4a940ff8ef8e44776db4ab2d358af0f4e2[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Sun Jan 14 12:40:01 2024 +0100

    changes

[33mcommit 2b646bdd74a2c33bf755071c5aeff06d836d424b[m[33m ([m[1;32mfixingLoginAndLogoutPage[m[33m)[m
Author: LATRACH MOHAMMED <mohammedlat5@gmail.com>
Date:   Sun Jan 14 12:11:19 2024 +0100

    fixing login page

[33mcommit 0be9d80041a78bb3b7e9a208d44377f975d017d6[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Sun Jan 14 01:47:03 2024 +0100

    changes

[33mcommit 683b4bbce2d1105937519139555dc7267f1d5234[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Sun Jan 14 01:42:32 2024 +0100

    changes

[33mcommit 58e7962500977b3cf81fbe6998be7d44b99272d2[m
Merge: db94ac7 cd1d9fe
Author: = <=>
Date:   Sat Jan 13 20:11:33 2024 +0100

    Resolve merge conflicts

[33mcommit db94ac7ca35809006b1e8fac1dc22281754f7ef3[m
Author: = <=>
Date:   Sat Jan 13 20:07:38 2024 +0100

    Ajouter route login

[33mcommit c8a218bb08957594a3ac5f87f87a5f55b1a386da[m
Author: = <=>
Date:   Sat Jan 13 20:02:54 2024 +0100

    Ajouter un composant 'login'

[33mcommit 01d45ef85325509b0e62dca0d0f0cf39df2e27dc[m
Author: KabiraEttalbi <kabiraettalbi@gmail.com>
Date:   Sat Jan 13 16:25:48 2024 +0100

    commit

[33mcommit 8af562d55d9de30c12c72ef8407ea18e1e0cd35a[m
Merge: f2c89c4 cd1d9fe
Author: KabiraEttalbi <kabiraettalbi@gmail.com>
Date:   Sat Jan 13 16:20:52 2024 +0100

    commit

[33mcommit f2c89c45f5d98520cd645ea7babc277b73073840[m
Author: KabiraEttalbi <kabiraettalbi@gmail.com>
Date:   Sat Jan 13 16:12:34 2024 +0100

    commit

[33mcommit cd1d9feb74fdcde76e65549d73bcca7893ee071c[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Sat Jan 13 15:58:13 2024 +0100

    updated frontend

[33mcommit 72d0350d91cf5ddcf64a824d9a1765fcb53e2b52[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Sat Jan 13 14:13:54 2024 +0100

    edited classes of social media icons

[33mcommit b5815f351ea2408ab09aedfc52223d0e73344978[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Sat Jan 13 14:13:02 2024 +0100

    added font-awsome to the project

[33mcommit b054782f01eccc57c20aaaef796903a77e1becf0[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Sat Jan 13 14:12:16 2024 +0100

    deleted duplecated contact us component

[33mcommit d928d2408703c0056084f8d65785cedd50ae5a67[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Thu Jan 11 19:59:51 2024 +0100

    commit

[33mcommit 344ee17cc9b599e9038c192e8089447ad9f16034[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Thu Jan 11 19:38:49 2024 +0100

    commit

[33mcommit 2ed54564eef685c684cd7dd6a1935876bd8e35b5[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Thu Jan 11 19:30:49 2024 +0100

    commit

[33mcommit fb203cc40b6db612ef6289b47f329d6fa0f3fb56[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Thu Jan 11 19:29:08 2024 +0100

    commit

[33mcommit e5a725fc4a7102cb46ab0a464db4f885fa0fc972[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Thu Jan 11 19:27:40 2024 +0100

    commit

[33mcommit 6461ee5fa358f8f56b371f958208959f051cc208[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Thu Jan 11 19:26:40 2024 +0100

    commit

[33mcommit 8c2fb276415b408483351c4cf71910d1a2b7f557[m
Merge: 6bec59f 16ba17b
Author: wizardy <wizardhassan99@gmail.com>
Date:   Thu Jan 11 19:26:21 2024 +0100

    Merge branch 'main' of https://github.com/ElazzouziHassan/PharmacyWebApplication

[33mcommit 6bec59faec7efa95607573964663b8e566b75af8[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Thu Jan 11 19:26:16 2024 +0100

    commit

[33mcommit 2dadf57254185bf022aa549a689b74db9becda1a[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Thu Jan 11 19:26:11 2024 +0100

    commit

[33mcommit ff850f666b28ef82f23b6b9eb178de6d8f1540ab[m
Author: KabiraEttalbi <kabiraettalbi@gmail.com>
Date:   Mon Jan 8 22:35:56 2024 +0100

    angular

[33mcommit 16ba17b97d9e443ede5c85963a61394581a1017c[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Mon Jan 8 22:35:09 2024 +0100

    added contact us component

[33mcommit e76323eb59a53100c9edb7614c87a83af5faab5a[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Mon Jan 8 20:13:03 2024 +0100

    updated navbar

[33mcommit d9d31a140a77a1609ec2a22cb772ff391a96b63e[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Mon Jan 8 20:02:05 2024 +0100

    test reverting & commiting again

[33mcommit 82498a51ea87ca8863b085a2e6b34a2b5ea4217c[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Mon Jan 8 19:57:09 2024 +0100

    added navbar

[33mcommit 867d74accbb47a3f559e7c08af00ba67d1c022cb[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Mon Jan 8 19:51:43 2024 +0100

    added the upper-navbar

[33mcommit d7381af21d57d4d7558602048a3b8f16678d2e60[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Mon Jan 8 19:42:55 2024 +0100

    Revert "added the upper NavBar"
    
    This reverts commit 848a46c484a4d60bbdced82efa982ae72648f72d.

[33mcommit 23f337f1e991cd03c6547b3bde3016d2d4599a85[m
Author: Tahiri Said <said.tahiiri@gmail.com>
Date:   Mon Jan 8 19:37:43 2024 +0100

    added the upper NavBar

[33mcommit a8fe954f874f4819102fa9f54e504b941e320276[m
Author: Said TAHIRI <said.tahiri@hotmail.com>
Date:   Mon Jan 8 19:06:22 2024 +0100

    cleaned homePage

[33mcommit 3c303fbfa8a22d82b6a44e4393735cf19ffaa94b[m
Author: El Houcine Qara <elhoucineqara114@gmail.com>
Date:   Mon Jan 8 02:20:31 2024 +0100

    Delete and Install app-frontend project, Add navbar component for testing git push

[33mcommit a17f73800f88a39b411d996bca5f17387c8001b0[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Sun Jan 7 20:54:16 2024 +0100

    UI Design - Home Page

[33mcommit 378cd0957989b0b8eb8828b6b2f3f930e4d015df[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Sun Jan 7 20:53:59 2024 +0100

    systeme

[33mcommit 8e808a22796c843f0699890850ce80cc9afec425[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Sun Jan 7 20:53:50 2024 +0100

    system arch v2

[33mcommit cb01d5306926a24230690c302f0937021a293539[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Sun Jan 7 20:53:34 2024 +0100

    d sequences

[33mcommit 3e985223edd01b3b3500b7f98b3f987a1bda6679[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Sun Jan 7 20:53:25 2024 +0100

    d cas d'utilisation v2

[33mcommit d050525e628a2244ca9a1bc1fa5e0642983987df[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Sun Jan 7 20:53:19 2024 +0100

    d cas d'utilisation v1

[33mcommit 250dd32468873a6b7100975c026fd7f711d8207d[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Sun Jan 7 20:52:53 2024 +0100

    class diagram

[33mcommit 432aa6822fc606be00f4df0cd842851d7b0ade6c[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:46:32 2024 +0100

    commit

[33mcommit e758810f400d38ef585b7c42b455b6ea5996825d[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:46:27 2024 +0100

    commit

[33mcommit 228184122b4b76682be8358485885762b18e9f5e[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:46:22 2024 +0100

    commit

[33mcommit 49a3097c21fdef1f26b8d68da219a6d156bd88b3[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:46:17 2024 +0100

    commit

[33mcommit 7135925cb96eb3f6920b5ca6b204996bf4ad26e0[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:46:12 2024 +0100

    commit

[33mcommit 458f2f0f9198305fd359b66af0fece3f47cfd649[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:46:07 2024 +0100

    commit

[33mcommit 1275b5d9a85bc5d77d2630b8b9e6d9f8fb965766[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:46:02 2024 +0100

    commit

[33mcommit 457756377dfaf664852a8a2868de7cdf4caaf1de[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:45:56 2024 +0100

    commit

[33mcommit 894d452bf90a906767c84aaa0fb106c2867d2e91[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:45:52 2024 +0100

    commit

[33mcommit 27c0652bb6b5c4a0f4e41cd747d245f02d7816d8[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:45:47 2024 +0100

    commit

[33mcommit 9ace6048bf699ba823048d9fa627dce6ec0c49fe[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:45:43 2024 +0100

    commit

[33mcommit 92896c805f21c19267b0c8d88c4fdfb331c7558a[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:45:38 2024 +0100

    commit

[33mcommit 2e4eca6d91fa562ff23be72b16ee1c4c90a5f8f0[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:45:33 2024 +0100

    commit

[33mcommit 79e6b94846b73f17556f1398a9b8313c11b99811[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:45:28 2024 +0100

    commit

[33mcommit cc3442db3ec3580cae56eb2cf778f376229ea60d[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:45:23 2024 +0100

    commit

[33mcommit 08f4536f96e0b9d69cdc6286b12c990c2d8d41c0[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:45:18 2024 +0100

    commit

[33mcommit 1eebe37bddb83c25143a22b3711743ac386789f7[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:45:13 2024 +0100

    commit

[33mcommit 0d70a7ae0e3b0aee51ffd40697c453da87775bff[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:45:08 2024 +0100

    commit

[33mcommit bc3e8279b9827df70b431d64519c4d1189243fda[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:45:03 2024 +0100

    commit

[33mcommit 4d6d6a1fe37014327c523ee23a4989365831f589[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Wed Jan 3 22:44:53 2024 +0100

    commit

[33mcommit 5fc9791908e2c84f4c5e1bd117f22ee273962c6f[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Fri Dec 29 21:10:37 2023 +0100

    cahier des charges

[33mcommit 2d79f5e5e2fbca869a6c76361de7204e126ae656[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Fri Dec 29 21:10:26 2023 +0100

    commit

[33mcommit 53ec9e7250eddcbbf16045e853f0390aac1b73f3[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Fri Dec 29 21:03:34 2023 +0100

    commit

[33mcommit 34b8619fe03fd09ee5e52274613a9b2239455a25[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Fri Dec 29 21:03:28 2023 +0100

    commit

[33mcommit 8d57ae9937f64821c3a36065f30cae0ce7950ae2[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Fri Dec 29 20:42:39 2023 +0100

    commit

[33mcommit db09e3e60d75f2b15a5b16282ea28671c919e247[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Fri Dec 29 19:53:07 2023 +0100

    plan de travail

[33mcommit 226e833976bcb4ba6b87dbb2584fbd840997bbec[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Fri Dec 29 19:49:40 2023 +0100

    commit

[33mcommit ce26c8b71f3767936efdc07ec3d0708432fdb014[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Fri Dec 29 19:20:14 2023 +0100

    app frontend

[33mcommit 23c0103812e011b8e36759e4128672879920d550[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Fri Dec 29 19:16:24 2023 +0100

    app backend

[33mcommit 90c9cb9a04c2c89c48ce1dd8aceae6c6c44c4bc9[m
Author: wizardy <wizardhassan99@gmail.com>
Date:   Fri Dec 29 19:05:38 2023 +0100

    commit
