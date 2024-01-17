import { Component } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import { FormsModule } from '@angular/forms';
import Swal from 'sweetalert2'; 

@Component({
  selector: 'searchallcategories',
  standalone: true,
  imports: [ 
    FormsModule],
  templateUrl: './searchallcategories.component.html',
  styleUrl: './searchallcategories.component.scss'
})
export class SearchallcategoriesComponent {
  
  inputData: string = '';


  GetSearchedData() {
    
    Swal.fire({
      title:'You are at search area.',
      text:'you are looking for '+this.inputData +' Product it will be provided once the APIs are inserted',
      timer:3000
    })
  

  this.inputData="";

  }
}
