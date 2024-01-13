import { Routes } from '@angular/router';
import { ContactusComponent } from './pages/contactus/contactus.component';
import { LoginComponent } from './pages/login/login.component';



export const routes: Routes = [
    {path:'contact-us',component:ContactusComponent},
    {path:"login", component:LoginComponent}
];
