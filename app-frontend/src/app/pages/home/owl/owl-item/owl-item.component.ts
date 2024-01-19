import { Component, Input } from '@angular/core';

@Component({
  selector: 'owl-item',
  standalone: true,
  imports: [],
  templateUrl: './owl-item.component.html',
  styleUrl: './owl-item.component.scss'
})
export class OwlItemComponent {

  @Input() title:string="";
}
