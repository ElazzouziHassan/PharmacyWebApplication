import { Routes } from '@angular/router';
import { ContactusComponent } from './pages/contactus/contactus.component';
import { LoginComponent } from './pages/login/login.component';
import { HomeComponent } from './pages/home/home.component';
import { ShopComponent } from './pages/shop/shop.component';
import { BlogComponent } from './pages/blog/blog.component';
import { ShopDetailsComponent } from './pages/shop-details/shop-details.component';
import { ShopingCartComponent } from './pages/shoping-cart/shoping-cart.component';
import { CheckOutComponent } from './pages/check-out/check-out.component';
import { BlogdetailsComponent } from './pages/blogdetails/blogdetails.component';
import { SignupComponent } from './pages/signup/signup.component';
import { PagenotfoundComponent } from './pages/pagenotfound/pagenotfound.component';



export const routes: Routes = [

    {path:'contact-us',component:ContactusComponent},
    {path:"login", component:LoginComponent},
    {path:'contact-us',component:ContactusComponent},
    {path:'home',component:HomeComponent},
    {path:'shop',component:ShopComponent},
    {path:'blog',component:BlogComponent},
    {path:'shopdetails',component:ShopDetailsComponent},
    {path:'shopingcart',component:ShopingCartComponent},
    {path:'checkout',component:CheckOutComponent},
    {path:'blogdetails',component:BlogdetailsComponent},
    // {path:'signup',component:SignupComponent},
    // {path:'login',component:LoginComponent},
    {path:'',component:HomeComponent},
    {path:'**',component:PagenotfoundComponent},

];


                               