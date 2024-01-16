import { Component } from '@angular/core';
import { CommonModule } from '@angular/common';
import { RouterOutlet } from '@angular/router';
import { HomeComponent } from "./pages/home/home.component";
import { NavbarComponent } from "./component/navbar/navbar.component";
import { FooterComponent } from "./component/footer/footer.component";
import { LeftasideallcategoriesComponent } from './component/LeftAsideAllCategories/leftasideallcategories.component';
import { SearchallcategoriesComponent } from './component/searchallcategories/searchallcategories.component';
import { TopHeaderComponent } from './component/navbar/top-header/top-header.component';
import { LoginComponent } from './pages/login/login.component';
import { SignupComponent } from './pages/signup/signup.component';


@Component({
    selector: 'app-root',
    standalone: true,
    templateUrl: './app.component.html',
    styleUrl: './app.component.scss',
    imports: [CommonModule, RouterOutlet, HomeComponent, HomeComponent, NavbarComponent, FooterComponent,
    LeftasideallcategoriesComponent,SearchallcategoriesComponent,TopHeaderComponent,LoginComponent]
})
export class AppComponent {
  title = 'app-frontend';
  afficherLoginComponent:boolean=false;
  afficherSignUpComponent:boolean = false;
  switchToLogin(){
    if(this.afficherLoginComponent==false){ 
        
      this.afficherLoginComponent=true;
    }else{
      this.afficherLoginComponent=false;
    }
  }

  switchToSignUp(){
    //this.afficherLoginComponent=false;
    this.afficherSignUpComponent=true;
  }
}
