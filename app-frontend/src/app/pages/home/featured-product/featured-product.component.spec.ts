import { ComponentFixture, TestBed } from '@angular/core/testing';

import { FeaturedProductComponent } from './featured-product.component';

describe('FeaturedProductComponent', () => {
  let component: FeaturedProductComponent;
  let fixture: ComponentFixture<FeaturedProductComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      imports: [FeaturedProductComponent]
    })
    .compileComponents();
    
    fixture = TestBed.createComponent(FeaturedProductComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
