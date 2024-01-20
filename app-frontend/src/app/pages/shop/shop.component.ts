import { CurrencyPipe, NgFor } from '@angular/common';
import { Component,Pipe } from '@angular/core';
import { RouterLink } from '@angular/router';
import { ProductService } from '../../services/products/product.service';
import { HttpClientModule } from '@angular/common/http';
import { pipe } from 'rxjs';

@Component({
  selector: 'app-shop',
  standalone: true,
  imports: [RouterLink,NgFor,HttpClientModule,CurrencyPipe],
  templateUrl: './shop.component.html',
  styleUrl: './shop.component.scss',
  providers:[ProductService]
})
export class ShopComponent {

  products:any;
  
  constructor(pros:ProductService){

    this.products =  pros.getAllProducts();
  }
  
  

}
