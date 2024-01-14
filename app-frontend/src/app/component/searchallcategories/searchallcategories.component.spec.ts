import { ComponentFixture, TestBed } from '@angular/core/testing';

import { SearchallcategoriesComponent } from './searchallcategories.component';

describe('SearchallcategoriesComponent', () => {
  let component: SearchallcategoriesComponent;
  let fixture: ComponentFixture<SearchallcategoriesComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      imports: [SearchallcategoriesComponent]
    })
    .compileComponents();
    
    fixture = TestBed.createComponent(SearchallcategoriesComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
