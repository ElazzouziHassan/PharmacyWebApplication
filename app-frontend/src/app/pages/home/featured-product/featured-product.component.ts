import { CurrencyPipe } from '@angular/common';
import { Component, Input } from '@angular/core';

@Component({
  selector: 'featured-product',
  standalone: true,
  imports: [CurrencyPipe],
  templateUrl: './featured-product.component.html',
  styleUrl: './featured-product.component.scss'
})
export class FeaturedProductComponent {

  @Input() productPath:string="";
  @Input() productTitle:string="";
  @Input() productPrice:string="";
}
