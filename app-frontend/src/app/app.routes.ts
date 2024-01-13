import { Routes } from '@angular/router';
import { ContactusComponent } from './pages/contactus/contactus.component';
<<<<<<< HEAD
import { LoginComponent } from './pages/login/login.component';
=======
import { HomeComponent } from './pages/home/home.component';
import { ShopComponent } from './pages/shop/shop.component';
import { BlogComponent } from './pages/blog/blog.component';
>>>>>>> cd1d9feb74fdcde76e65549d73bcca7893ee071c



export const routes: Routes = [
<<<<<<< HEAD
    {path:'contact-us',component:ContactusComponent},
    {path:"login", component:LoginComponent}
=======
    {path:'',component:HomeComponent},
    {path:'contact-us',component:ContactusComponent},
    {path:'home',component:HomeComponent},
    {path:'shop',component:ShopComponent},
    {path:'blog',component:BlogComponent},
>>>>>>> cd1d9feb74fdcde76e65549d73bcca7893ee071c
];
