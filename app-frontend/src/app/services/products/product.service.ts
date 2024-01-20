import { HttpClient } from '@angular/common/http';
import { Injectable } from '@angular/core';


@Injectable({
  providedIn: 'root'
})
export class ProductService {
 
  SERVER_URL="http://localhost:3000/api";
  products:any =[{
    title:"Product ",
    price : Math.floor(Math.random() * 340) ,
    path:"../../../assets/images/bg.png"
  },{
    title:"Product ",
    price : Math.floor(Math.random() * 340) ,
    path:"../../../assets/images/bg.png"
  },{
    title:"Product ",
    price : Math.floor(Math.random() * 340) ,
    path:"../../../assets/images/bg.png"
  },{
    title:"Product ",
    price : Math.floor(Math.random() * 340) ,
    path:"../../../assets/images/bg.png"
  },{
    title:"Product ",
    price : Math.floor(Math.random() * 340) ,
    path:"../../../assets/images/bg.png"
  },{
    title:"Product ",
    price : Math.floor(Math.random() * 340) ,
    path:"../../../assets/images/bg.png"
  },{
    title:"Product ",
    price : Math.floor(Math.random() * 340) ,
    path:"../../../assets/images/bg.png"
  }]

  constructor(private http:HttpClient) { 

  }


  getAllProducts(){
    /* debugger; */
    //return this.http.get(this.SERVER_URL+"");
    return this.products;

  }
  getOneProduct(id:Number){
    return this.http.get(this.SERVER_URL+"");
  }

  getProductsByCategory(category:String){
    return this.http.get(this.SERVER_URL+"");
  }
}
