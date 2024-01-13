import { Routes } from '@angular/router';
import { ContactusComponent } from './pages/contactus/contactus.component';
import { HomeComponent } from './pages/home/home.component';
import { ShopComponent } from './pages/shop/shop.component';
import { BlogComponent } from './pages/blog/blog.component';



export const routes: Routes = [
    {path:'',component:HomeComponent},
    {path:'contact-us',component:ContactusComponent},
    {path:'home',component:HomeComponent},
    {path:'shop',component:ShopComponent},
    {path:'blog',component:BlogComponent},
];
