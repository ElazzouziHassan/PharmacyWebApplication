import { Component, Input } from '@angular/core';

@Component({
  selector: 'latest-item',
  standalone: true,
  imports: [],
  templateUrl: './latest-item.component.html',
  styleUrl: './latest-item.component.scss'
})
export class LatestItemComponent {

  
  @Input() productUrlPicture:string="";
  @Input() productName:string="";
  @Input() price:string="";
}
