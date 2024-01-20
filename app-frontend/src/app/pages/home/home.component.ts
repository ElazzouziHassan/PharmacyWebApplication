import { Component } from '@angular/core';
import { RouterLink, RouterLinkActive } from '@angular/router';
import { MainComponent } from './main/main.component';
import { OwlComponent } from './owl/owl.component';
import { ProductService } from '../../services/products/product.service';
import { HttpClientModule } from '@angular/common/http';
import { CurrencyPipe, NgFor } from '@angular/common';
import { OwlStageComponent } from './owl/owl-stage/owl-stage.component';
import { OwlItemComponent } from './owl/owl-item/owl-item.component';
import { LatestItemComponent } from './latest-product/latest-item/latest-item.component';
import { OwlNavComponent } from './owl-nav/owl-nav.component';
import { FeaturedProductComponent } from './featured-product/featured-product.component';


@Component({
  selector: 'home',
  standalone: true,
  imports: [NgFor,RouterLink,RouterLinkActive,MainComponent,OwlComponent,HttpClientModule,CurrencyPipe,OwlStageComponent,OwlItemComponent,
    LatestItemComponent,OwlNavComponent,FeaturedProductComponent],
  templateUrl: './home.component.html',
  styleUrl: './home.component.scss',
  providers:[ProductService]
})
export class HomeComponent {

  numbersArray: number[] = [];
  products:any;
  
  featuredProducts:any[]=["Face masks","Vitamnies"];
  constructor(pros:ProductService){

    this.products =  pros.getAllProducts();
    console.log(this.products)
    this.generateNumbersArray();
  }
  generateNumbersArray(): void {
    for (let i = 0; i < 3; i++) {
      this.numbersArray.push(i);
    }
  }

}
